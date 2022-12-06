/**
 * @file publisher_member_function.cpp
 * @author Dhanush Babu Allam (dallam@umd.edu)
 * @brief a simple publisher and has parameters to change the frequency of
 * printing in the terminal. Has, service node to accept a string
 * @version 0.1
 * @date 2022-11-16
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "cpp_pubsub/srv/strings.hpp"
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "tf2/LinearMath/Quaternion.h"
#include "tf2_ros/static_transform_broadcaster.h"
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;
using std::placeholders::_2;

/* This example creates a subclass of Node and uses std::bind() to register a
 * member function as a callback from the timer. */
using PARAMETER_EVENT = std::shared_ptr<rclcpp::ParameterEventHandler>;
using PARAMETER_HNADLE = std::shared_ptr<rclcpp::ParameterCallbackHandle>;
/**
 * @brief constructor for the node
 *
 */
class MinimalPublisher : public rclcpp::Node {
 public:
  MinimalPublisher() : Node("minimal_publisher"), count_(0) {
    try {
      auto param_desc = rcl_interfaces::msg::ParameterDescriptor();
      param_desc.description = "Set callback frequency.";
      this->declare_parameter("freq", 2.0, param_desc);
      auto param = this->get_parameter("freq");
      auto freq = param.get_parameter_value().get<std::float_t>();
      m_param_subscriber_ =
          std::make_shared<rclcpp::ParameterEventHandler>(this);
      auto paramCallbackPtr =
          std::bind(&MinimalPublisher::param_callback, this, _1);
      m_paramHandle_ =
          m_param_subscriber_->add_parameter_callback("freq", paramCallbackPtr);
      publisher_ = this->create_publisher<std_msgs::msg::String>("chatter", 10);
      auto period = std::chrono::milliseconds(static_cast<int>((1000 / freq)));
      timer_ = this->create_wall_timer(
          period, std::bind(&MinimalPublisher::timer_callback, this));
      RCLCPP_DEBUG_STREAM(this->get_logger(), "publisher is initialized");
      server = this->create_service<cpp_pubsub::srv::Strings>(
          "server_node",
          std::bind(&MinimalPublisher::take_input, this, std::placeholders::_1,
                    std::placeholders::_2));
      RCLCPP_DEBUG_STREAM(this->get_logger(), "server initialized");
      tf_static_broadcaster_ = std::make_shared<tf2_ros::StaticTransformBroadcaster>(this);
      this->make_transforms();
    } catch (...) {
      RCLCPP_ERROR_STREAM(this->get_logger(), "error found");
      RCLCPP_FATAL_STREAM(this->get_logger(), "not working");
      RCLCPP_WARN_STREAM(this->get_logger(), "some error");
    }
  }

 private:
  PARAMETER_EVENT m_param_subscriber_;
  PARAMETER_HNADLE m_paramHandle_;
  /**
   * @brief service function to accept and respond a string
   *
   * @param request
   * @param response
   */
  void take_input(
      const std::shared_ptr<cpp_pubsub::srv::Strings::Request> request,
      std::shared_ptr<cpp_pubsub::srv::Strings::Response> response) {
    response->str = request->a;
    respond_message = response->str;
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\na: %s",
                request->a.c_str());
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Sending back response\na: %s",
                response->str.c_str());
  }
  /**
   * @brief publishes the message
   *
   */
  void timer_callback() {
    auto param = this->get_parameter("freq");
    auto freq = param.get_parameter_value().get<std::float_t>();
    auto message = std_msgs::msg::String();
    message.data = respond_message;
    RCLCPP_DEBUG_STREAM(this->get_logger(), "inserted string");
    RCLCPP_INFO(this->get_logger(), "Publishing at %.2f Hz: '%s'", freq,
                message.data.c_str());
    publisher_->publish(message);
  }
  /**
   * @brief accepts the frequency in which to print
   *
   * @param param
   */
  void param_callback(const rclcpp::Parameter& param) {
    RCLCPP_INFO(this->get_logger(),
                "cb: Received an update to parameter \"%s\" of type %s: %.2f",
                param.get_name().c_str(), param.get_type_name().c_str(),
                param.as_double());

    auto period = std::chrono::milliseconds(static_cast<int>
    (1000 / param.as_double()));
    auto topicCallbackPtr = std::bind(&MinimalPublisher::timer_callback, this);
    timer_ = this->create_wall_timer(period,
                                     topicCallbackPtr);  // no memory leak here
  }
  void make_transforms()
  {
    geometry_msgs::msg::TransformStamped t;
    t.header.stamp = this->get_clock()->now();
    t.header.frame_id = "world";
    t.child_frame_id = "mystaticturtle";

    t.transform.translation.x = 1;
    t.transform.translation.y = 2;
    t.transform.translation.z = 3;
    tf2::Quaternion q;
    q.setRPY(
      4,
      5,
      6);
    t.transform.rotation.x = q.x();
    t.transform.rotation.y = q.y();
    t.transform.rotation.z = q.z();
    t.transform.rotation.w = q.w();
    tf_static_broadcaster_->sendTransform(t);
  }
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
  rclcpp::Service<cpp_pubsub::srv::Strings>::SharedPtr server;
  std::string respond_message = "hello";
  std::shared_ptr<tf2_ros::StaticTransformBroadcaster> tf_static_broadcaster_;
  size_t count_;
};
/**
 * @brief main function which initializes the node
 *
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char* argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalPublisher>());
  rclcpp::shutdown();
  return 0;
}
