import time
import rclpy
from rclpy.node import Node
from cv_bridge import CvBridge
import cv2
from qr_stuff.srv import GetImage

TIME_PERIOD = 1  # in sec
arucoDict = cv2.aruco.getPredefinedDictionary(cv2.aruco.DICT_4X4_50)
IMG_SIZE = 200

def timer(func):
    def wrapper(*args, **kwargs):
        start = time.time()
        out = func(*args, **kwargs)
        print(f"Time taken: {time.time() - start}")
        return out
    return wrapper

class ImagePublisher(Node):
    def __init__(self):
        super().__init__("get_image")

        self.service = self.create_service(GetImage, 'raw_image', self.callback)
        self.bridge = CvBridge()
        self.camera = cv2.VideoCapture(0)

    @timer
    def callback(self, request, response):
        # img = numpy.zeros((IMG_SIZE, IMG_SIZE), dtype="uint8")
        # cv2.aruco.generateImageMarker(arucoDict, 10, IMG_SIZE, img, 10)

        return_value, img = self.camera.read()

        # img = cv2.imread('/home/shawn/Work/iitb/mrt/ros/mrt_ws/src/qr_serve/qr_serve/dumb.jpg')

        # cv2.imshow("Image", img)
        # cv2.waitKey(0)


        response.raw_image = self.bridge.cv2_to_imgmsg(img)
        print("responded")

        return response


def main(args=None):
    rclpy.init(args=args)

    image_publisher = ImagePublisher()
    try:
        rclpy.spin(image_publisher)
    finally:
        image_publisher.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
