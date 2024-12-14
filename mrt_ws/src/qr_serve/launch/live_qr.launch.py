from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='qr_serve',
            executable='get_image'
        ),
        Node(
            package='qr_serve',
            executable='get_aruco'
        ),
        Node(
            package='qr_serve',
            executable='show_aruco'
        ),
        Node(
            package='qr_serve',
            executable='big_brain'
        ),
    ])