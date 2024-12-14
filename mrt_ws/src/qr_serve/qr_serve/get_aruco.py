import time
import rclpy
from rclpy.node import Node
import cv2
from cv_bridge import CvBridge
from qr_stuff.msg import Point, Box, ArucoData
from qr_stuff.srv import Arucoify

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

class Arucoer(Node):
    def __init__(self):
        super().__init__("arucoer")

        self.bridge = CvBridge()
        self.aruco_service = self.create_service(Arucoify, 'arucoify', self.callback)

    @timer
    def callback(self, request, response):
        print("Received image")
        cv_image = self.bridge.imgmsg_to_cv2(request.raw_image)

        # cv2.imshow('image', cv_image)
        # cv2.waitKey(0)

        corners, ids, rejected = cv2.aruco.detectMarkers(cv_image, arucoDict)

        # print(corners)
        # print(ids)
        # print(rejected)
        response.aruco_data = ArucoData()
        response.aruco_data.corners = []
        for corner, in corners:
            response.aruco_data.corners.append(Box(points=[Point(x=int(corner[i][0]), y=int(corner[i][1])) for i in range(4)]))

        if ids is None:
            response.aruco_data.ids = []
        else:
            response.aruco_data.ids = [int(ID[0]) for ID in ids]

        response.aruco_data.rejected = []
        for reject, in rejected:
            response.aruco_data.rejected.append(Box(points=[Point(x=int(reject[i][0]), y=int(reject[i][1])) for i in range(4)]))

        # cv2.aruco.drawDetectedMarkers(cv_image, corners, ids)
        # cv2.aruco.drawDetectedMarkers(cv_image, rejected, borderColor=(100, 0, 240))

        # cv2.imshow("Image", cv_image)
        # cv2.waitKey(0)

        print('returning')
        return response

def main(args=None):
    rclpy.init(args=args)

    arucoer = Arucoer()
    try:
        rclpy.spin(arucoer)
    finally:
        arucoer.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
