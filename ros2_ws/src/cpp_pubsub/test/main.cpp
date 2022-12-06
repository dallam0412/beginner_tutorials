/**
 * @file main.cpp
 * @author Dhanush Babu Allam (dallam@umd.edu)
 * @brief Test Execution file
 * @version 0.1
 * @date 2022-12-05
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <gtest/gtest.h>

#include <rclcpp/rclcpp.hpp>

/**
 * @brief Main funtion to run all the tests
 *
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char** argv) {
  rclcpp::init(argc, argv);
  ::testing::InitGoogleTest(&argc, argv);
  int result_1 = RUN_ALL_TESTS();
  rclcpp::shutdown();
  return result_1;
}
