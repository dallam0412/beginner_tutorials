
##
 # @file test.cpp
 # @author Dhanush Babu Allam
 # @brief Tests
 # @version 0.1
 # @date 2022-12-05
 #
 # @copyright Copyright (c) 2022
 #
 #

from launch_ros.actions import Node
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess, TimerAction
from launch.conditions import IfCondition
from launch.substitutions import LaunchConfiguration, PythonExpression


def generate_launch_description():
    """Method to launch the nodes in rthe package with bag record flag"""
    bag_record = LaunchConfiguration('bag_record')

    bag_record_arg = DeclareLaunchArgument(
        'bag_record',
        default_value='False'
    )
    talker_node = Node(
        package='cpp_pubsub',
        executable='talker'
    )
    listener_node = Node(
        package='cpp_pubsub',
        executable='listener'
    )
    client_node = Node(
        package='cpp_pubsub',
        executable='client'
    )
    bag_record_conditioned = ExecuteProcess(
        condition=IfCondition(
            PythonExpression([bag_record,' == True'])
        ),
        cmd=[[
            'cd ../results/bag_files && ros2 bag record /chatter '
        ]],
        shell=True
    )

    return LaunchDescription([
        bag_record_arg,
        talker_node,
        listener_node,
        client_node,
        TimerAction(
            period=2.0,
            actions=[bag_record_conditioned],
        )
    ])