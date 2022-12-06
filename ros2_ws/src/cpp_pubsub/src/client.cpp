/**
 * @file client.cpp
 * @author Dhanush Babu Allam (dallam@umd.edu)
 * @brief client node
 * @version 0.1
 * @date 2022-11-16
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <chrono>
#include <cstdlib>
#include <memory>
#include "cpp_pubsub/srv/strings.hpp"
#include "rclcpp/rclcpp.hpp"

using namespace std::chrono_literals;
/**
 * @brief intializes the node and recives the request
 *
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char **argv) {
  rclcpp::init(argc, argv);

  std::shared_ptr<rclcpp::Node> node =
      rclcpp::Node::make_shared("string_client");
  rclcpp::Client<cpp_pubsub::srv::Strings>::SharedPtr client =
      node->create_client<cpp_pubsub::srv::Strings>("server_node");

  auto request = std::make_shared<cpp_pubsub::srv::Strings::Request>();
  request->a = argv[1];
  while (!client->wait_for_service(1s)) {
    if (!rclcpp::ok()) {
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"),
                   "Interrupted while waiting for the service. Exiting.");
      return 0;
    }
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"),
                "service not available, waiting again...");
  }

  auto result = client->async_send_request(request);
  // Wait for the result.
  if (rclcpp::spin_until_future_complete(node, result) ==
      rclcpp::FutureReturnCode::SUCCESS) {
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "string: %s",
                result.get()->str.c_str());
  } else {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service");
  }

  rclcpp::shutdown();
  return 0;
}
