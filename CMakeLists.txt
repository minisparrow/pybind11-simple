cmake_minimum_required(VERSION 3.15)
project(robot)

# use python virual environment first than system environment
set(Python_VIRTUALENV FIRST)

add_subdirectory(third_party/pybind11)

pybind11_add_module(robot robot.cpp)

target_link_libraries(robot PRIVATE  pybind11::module)