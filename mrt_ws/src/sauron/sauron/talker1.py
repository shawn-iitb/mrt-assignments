import rclpy
from std_msgs.msg import String

TIME_PERIOD = 1  # in sec


def timer_callback():
    msg = String()
    msg.data = "You cannot hide. I see you."

    publisher.publish(msg)
    print(f"published: {msg.data}")


def main(args=None):
    rclpy.init(args=args)

    node = rclpy.create_node("talker_1")

    global publisher
    publisher = node.create_publisher(String, 'listen_1', 10)  # idk what qos_profile is

    timer = node.create_timer(timer_period_sec=TIME_PERIOD, callback=timer_callback)

    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
