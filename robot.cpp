#include <pybind11/pybind11.h>
#include <iostream>
#include <string>
using namespace std;

class Robot{
public:
    Robot(const std::string &name) : name(name) {}
    void do_task(const std::string &task) {
        std::cout << name << "is doing " << task << std::endl;
    }
    std::string name;
};

namespace py = pybind11;

PYBIND11_MODULE(robot, m) {
    py::class_<Robot>(m, "Robot") 
        .def(py::init<const std::string &>())
        .def("do_task", &Robot::do_task)
        .def_readwrite("name", &Robot::name);
}
