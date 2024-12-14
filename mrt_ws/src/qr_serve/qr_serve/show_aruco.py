import time
import rclpy
from rclpy.node import Node
import numpy
import cv2
from cv_bridge import CvBridge
from qr_stuff.srv import ShowAruco

arucoDict = cv2.aruco.getPredefinedDictionary(cv2.aruco.DICT_4X4_50)
IMG_SIZE = 200

def timer(func):
    def wrapper(*args, **kwargs):
        start = time.time()
        out = func(*args, **kwargs)
        print(f"Time taken: {time.time() - start}")
        return out
    return wrapper

class ShowerAruco(Node):
    def __init__(self):
        super().__init__("shower_aruco")

        self.bridge = CvBridge()
        self.aruco_service = self.create_service(ShowAruco, 'show_aruco', self.callback)
        # self.aruco_sub = self.create_subscription(Image, 'raw_image', self.image_callback, 10)

    @timer
    def callback(self, request, response):
        print("Received data")
        cv_image = self.bridge.imgmsg_to_cv2(request.raw_image)
        corners = [numpy.array([[[point.x, point.y] for point in corner.points]]) for corner in request.aruco_data.corners]
        ids = numpy.array([[ID] for ID in request.aruco_data.ids])
        rejected = [numpy.array([[[point.x, point.y] for point in reject.points]]) for reject in request.aruco_data.rejected]

        # print(corners)
        # print(ids)
        # print(rejected)

        cv2.aruco.drawDetectedMarkers(cv_image, corners, ids=ids)
        cv2.aruco.drawDetectedMarkers(cv_image, rejected, borderColor=(100, 0, 240))

        cv2.imshow("Image", cv_image)
        cv2.waitKey(20)
        print('returning')
        return response


def main(args=None):
    rclpy.init(args=args)

    shower_aruco = ShowerAruco()
    try:
        rclpy.spin(shower_aruco)
    finally:
        shower_aruco.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
