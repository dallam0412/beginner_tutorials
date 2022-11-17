# beginner_tutorials

## Overview

Wrote a publisher and subscriber node which publishes My name is Dhanush to a topic and the subscriber listens to the string published by the publisher node from the same topic. Added a server function to the publisher node, and created a service node to accept a string. Created a launch file to run both the nodes in a single command and can set the frequency of printing the string

## Build/run steps

go to the root of the workspace ros2_ws then type the following in the terminal: -

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
open a new terminal and type: -

```
. install/setup.bash
ros2 launch cpp_pubsub pubsublaunch.yaml freq:=<frequency>
```


## dependencies

1. ROS humble
2. rclcpp
3. std_msgs