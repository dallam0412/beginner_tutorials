// Copyright 2016 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "cpp_pubsub/srv/strings.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;
using std::placeholders::_2;

/* This example creates a subclass of Node and uses std::bind() to register a
 * member function as a callback from the timer. */

class MinimalPublisher : public rclcpp::Node {
 public:
  MinimalPublisher() : Node("minimal_publisher"), count_(0) {
    try{
    publisher_ = this->create_publisher<std_msgs::msg::String>("topic", 10);
    timer_ = this->create_wall_timer(
        500ms, std::bind(&MinimalPublisher::timer_callback, this));
      RCLCPP_DEBUG_STREAM(this->get_logger(), "publisher is initialized");
      server=this->create_service<cpp_pubsub::srv::Strings>("server_node",std::bind(&MinimalPublisher::take_input,this,std::placeholders::_1,std::placeholders::_2));
      RCLCPP_DEBUG_STREAM(this->get_logger(),"server initialized");
    }
    catch(...)
    {
      RCLCPP_ERROR_STREAM(this->get_logger(), "error found");
      RCLCPP_FATAL_STREAM(this->get_logger(), "not working");
      RCLCPP_WARN_STREAM(this->get_logger(), "some error");
    }

  }

 void take_input(const std::shared_ptr<cpp_pubsub::srv::Strings::Request> request,
                  std::shared_ptr<cpp_pubsub::srv::Strings::Response> response)
                  {
                    response->str = request->a;
                    respond_message=response->str;
                  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\na: %s",
                  request ->a.c_str());
                  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Sending back response\na: %s",
                  response ->str.c_str());
                  }
 private:
  void timer_callback() {
    auto message = std_msgs::msg::String();
    message.data = respond_message;
    RCLCPP_DEBUG_STREAM(this->get_logger(), "inserted string ");  
    RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
    publisher_->publish(message);
  }
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
  rclcpp::Service<cpp_pubsub::srv::Strings>::SharedPtr server;  
  std::string respond_message = "hello";
  size_t count_;
};

int main(int argc, char* argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalPublisher>());
  rclcpp::shutdown();
  return 0;
}
