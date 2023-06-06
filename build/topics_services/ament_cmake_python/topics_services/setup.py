from setuptools import find_packages
from setuptools import setup

setup(
    name='topics_services',
    version='0.0.0',
    packages=find_packages(
        include=('topics_services', 'topics_services.*')),
)
