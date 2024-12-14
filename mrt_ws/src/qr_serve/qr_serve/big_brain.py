import time
import rclpy
from rclpy.node import Node
import cv2
from cv_bridge import CvBridge
from qr_stuff.srv import GetImage, Arucoify, ShowAruco

TIME_PERIOD = 1/60  # in sec

def timer(func):
    def wrapper(*args, **kwargs):
        start = time.time()
        out = func(*args, **kwargs)
        print(f"Time taken: {time.time() - start}")
        return out
    return wrapper

class Logisticer(Node):
    def __init__(self):
        super().__init__("logisticer")

        self.bridge = CvBridge()
        self.get_image_cli = self.create_client(GetImage, 'raw_image')
        self.get_aruco_cli = self.create_client(Arucoify, 'arucoify')
        self.show_aruco_cli = self.create_client(ShowAruco, 'show_aruco')

        self.get_image_req = GetImage.Request()
        self.get_aruco_req = Arucoify.Request()
        self.show_aruco_req = ShowAruco.Request()

        while True:
            # time.sleep(TIME_PERIOD)
            self.run()

    @timer
    def run(self):

        if not self.get_image_cli.wait_for_service(timeout_sec=1.0):
            return
        self.future = self.get_image_cli.call_async(self.get_image_req)
        rclpy.spin_until_future_complete(self, self.future)
        response = self.future.result()

        img_msg = response.raw_image

        # cv2.imshow("img", self.bridge.imgmsg_to_cv2(img_msg))
        # cv2.waitKey(0)

        if not self.get_aruco_cli.wait_for_service(timeout_sec=1.0):
            return
        self.get_aruco_req.raw_image = img_msg
        self.future = self.get_aruco_cli.call_async(self.get_aruco_req)
        rclpy.spin_until_future_complete(self, self.future)
        response = self.future.result()


        if not self.show_aruco_cli.wait_for_service(timeout_sec=1.0):
            return
        self.show_aruco_req.raw_image = img_msg
        self.show_aruco_req.aruco_data = response.aruco_data
        self.future = self.show_aruco_cli.call_async(self.show_aruco_req)
        rclpy.spin_until_future_complete(self, self.future)

def main(args=None):
    rclpy.init(args=args)

    logisticer = Logisticer()
    try:
        rclpy.spin(logisticer)
    finally:
        logisticer.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
