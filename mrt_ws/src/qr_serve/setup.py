from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'qr_serve'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', 'live_qr.launch.py')))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='shawn',
    maintainer_email='24b1214@iitb.ac.in',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'service = qr_serve.service_member_function:main',
            'client = qr_serve.client_member_function:main',
            'get_image = qr_serve.get_image:main',
            'big_brain = qr_serve.big_brain:main',
            'get_aruco = qr_serve.get_aruco:main',
            'show_aruco = qr_serve.show_aruco:main',
        ],
    },
)
