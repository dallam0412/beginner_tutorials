//Copyright 2022 Dhanush Babu Allam
//Permission is hereby granted, free of charge, 
//to any person obtaining a copy of this 
//software and associated documentation files (the "Software"), 
//to deal in the Software without restriction, 
//including without limitation the rights to use, copy, modify, 
//merge, publish, distribute, sublicense, 
//and/or sell copies of the Software, and to permit persons 
//to whom the Software is furnished to do so, subject to the following conditions:
//
//The above copyright notice and this permission notice shall be included 
//in all copies or substantial portions of the Software.
//
//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, 
//EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF 
//MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. 
//IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES 
//OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
//OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
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
