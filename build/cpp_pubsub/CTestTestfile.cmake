# CMake generated Testfile for 
# Source directory: /home/dhanush/Documents/HW/ENPM808X/beginner_tutorials/ros2_ws/src/cpp_pubsub
# Build directory: /home/dhanush/Documents/HW/ENPM808X/beginner_tutorials/build/cpp_pubsub
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_cpp_pubsub "/usr/bin/python3.8" "-u" "/home/dhanush/ros2_humble/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/home/dhanush/Documents/HW/ENPM808X/beginner_tutorials/build/cpp_pubsub/test_results/cpp_pubsub/test_cpp_pubsub.gtest.xml" "--package-name" "cpp_pubsub" "--output-file" "/home/dhanush/Documents/HW/ENPM808X/beginner_tutorials/build/cpp_pubsub/ament_cmake_gtest/test_cpp_pubsub.txt" "--command" "/home/dhanush/Documents/HW/ENPM808X/beginner_tutorials/build/cpp_pubsub/test_cpp_pubsub" "--gtest_output=xml:/home/dhanush/Documents/HW/ENPM808X/beginner_tutorials/build/cpp_pubsub/test_results/cpp_pubsub/test_cpp_pubsub.gtest.xml")
set_tests_properties(test_cpp_pubsub PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/dhanush/Documents/HW/ENPM808X/beginner_tutorials/build/cpp_pubsub/test_cpp_pubsub" TIMEOUT "60" WORKING_DIRECTORY "/home/dhanush/Documents/HW/ENPM808X/beginner_tutorials/build/cpp_pubsub" _BACKTRACE_TRIPLES "/home/dhanush/ros2_humble/install/ament_cmake_test/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/dhanush/ros2_humble/install/ament_cmake_gtest/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/home/dhanush/ros2_humble/install/ament_cmake_gtest/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/dhanush/Documents/HW/ENPM808X/beginner_tutorials/ros2_ws/src/cpp_pubsub/CMakeLists.txt;50;ament_add_gtest;/home/dhanush/Documents/HW/ENPM808X/beginner_tutorials/ros2_ws/src/cpp_pubsub/CMakeLists.txt;0;")
subdirs("cpp_pubsub__py")
subdirs("gtest")
