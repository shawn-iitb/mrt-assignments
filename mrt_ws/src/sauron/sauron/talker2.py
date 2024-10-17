import rclpy
from std_msgs.msg import String

TIME_PERIOD = 1  # in sec


def timer_callback():
    msg = String()
    msg.data = "Build me an army worthy of Mordor."

    publisher.publish(msg)
    print(f"published: {msg.data}")


def main(args=None):
    rclpy.init(args=args)

    node = rclpy.create_node("talker_2")

    global publisher
    publisher = node.create_publisher(String, 'listen_2', 10)  # idk what qos_profile is

    timer = node.create_timer(timer_period_sec=TIME_PERIOD, callback=timer_callback)

    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
