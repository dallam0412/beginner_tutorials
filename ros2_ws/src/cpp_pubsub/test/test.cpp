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
 * @file test.cpp
 * @author Dhanush Babu Allam
 * @brief Test is run for talker node
 * @version 0.1
 * @date 2022-12-05
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <gtest/gtest.h>
#include <stdlib.h>

#include <rclcpp/rclcpp.hpp>

#include "std_msgs/msg/string.hpp"

/**
 * @brief Class for testing the publisher
 *
 */
class TaskPublisher : public testing::Test {
 protected:
  rclcpp::Node::SharedPtr test_node_;
};

TEST_F(TaskPublisher, test_num_publishers) {
  test_node_ = rclcpp::Node::make_shared("test");

  auto number_of_publishers = test_node_->count_publishers("chatter");
  EXPECT_EQ(1, static_cast<int>(number_of_publishers));
}
