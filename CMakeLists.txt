cmake_minimum_required(VERSION 3.4)
project(robot)

find_package(pybind11 REQUIRED)
pybind11_add_module(robot robot.cpp)

install(TARGET robot DESTINATION ${CMAKE_INSTALL_PREFIX})