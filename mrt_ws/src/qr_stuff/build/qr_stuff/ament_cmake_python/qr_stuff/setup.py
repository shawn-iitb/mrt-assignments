from setuptools import find_packages
from setuptools import setup

setup(
    name='qr_stuff',
    version='0.0.0',
    packages=find_packages(
        include=('qr_stuff', 'qr_stuff.*')),
)
