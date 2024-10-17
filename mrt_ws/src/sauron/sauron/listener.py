import time
import rclpy
from std_msgs.msg import String

DEBUG = True
TIME_PERIOD = 1  # in sec

msg1 = None

def listen1_callback(msg):
    global msg1
    msg1 = msg.data
    if DEBUG:
        print('msg1:', msg1)

def listen2_callback(msg):
    msg2 = msg.data
    global msg1
    if DEBUG:
        print('msg2:', msg2)
    if msg1:
        print(msg1, msg2)
        msg1 = None


def main(args=None):
    rclpy.init(args=args)

    node = rclpy.create_node('listener')

    subscription1 = node.create_subscription(String, topic='listen_1', callback=listen1_callback,
                                             qos_profile=10)  # idk what qos does
    subscription2 = node.create_subscription(String, topic='listen_2', callback=listen2_callback, qos_profile=10)

    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
