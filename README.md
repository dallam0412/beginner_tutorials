# beginner_tutorials

## Overview

Wrote a publisher and subscriber node which publishes My name is Dhanush to a topic and the subscriber listens to the string published by the publisher node from the same topic. Added a server function to the publisher node, and created a service node to accept a string. Created a launch file to run both the nodes in a single command and can set the frequency of printing the string

## Build/run steps

go to the root of the workspace ros2_ws then type the following in the terminal: -

for publisher and subscriber: -

```
colcon build --packages-select cpp_pubsub
```
open a new terminal and type: -

```
. install/setup.bash
ros2 run cpp_pubsub talker
```

open a new terminal and type: -

```
. install/setup.bash
ros2 run cpp_pubsub listener
```
for client and server : -

open a new terminal and type: -

```
. install/setup.bash
ros2 run cpp_pubsub talker
```
open a new terminal and type: -

```
. install/setup.bash
ros2 run cpp_pubsub client <string>
```
open a new terminal and type: -

```
. install/setup.bash
ros2 run cpp_pubsub client <string>
```
for launchfile which changes frequency: -

open a new terminal and type: -

```
. install/setup.bash
ros2 launch cpp_pubsub pubsublaunch.yaml freq:=<frequency>
```
for tf: -

open a new terminal and type: -

```
. install/setup.bash
ros2 topic echo /tf_static
os2 run tf2_tools view_frames
```
for test: -

open a new terminal and type: -

```
. install/setup.bash
colcon test --event-handlers console_direct+ --packages-select cpp_pubsub
```
for rosbag launch file close previous terminals and open a new terminal in ros2_ws directory and type: -

```
. install/setup.bash
ros2 launch cpp_pubsub ros_bag.py bag_record:=True
```
open a new terminal: -
```
. install/setup.bash
ros2 run cpp_pubsub talker
```
open a new terminal: -
```
. install/setup.bash
ros2 run cpp_pubsub client <string>
```

for rosbag close previous terminals and open a new terminal in ros2_ws directory and type: -

```
. install/setup.bash
ros2 run cpp_pubsub listener
```
open a new terminal and type: -

```
. install/setup.bash
ros2 bag play ~/beginner_tutorials//results/rosbag2_2022_12_05-22_15_20/rosbag2_2022_12_05-22_15_20_0.db3 
```


## dependencies

1. ROS humble
2. rclcpp
3. std_msgs