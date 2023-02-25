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

    int add(int a, int b) {
        return  a + b; 
    }

    int sub(int a, int b) {
        return  a - b; 
    }
};

namespace py = pybind11;

PYBIND11_MODULE(robot, m) {
    py::class_<Robot>(m, "Robot") 
        .def(py::init<const std::string &>())

        .def("do_task", &Robot::do_task)

        .def_readwrite("name", &Robot::name)

        .def("add", &Robot::add, py::arg("i"), py::arg("j"))

        .def("sub", &Robot::sub, py::arg("i"), py::arg("j"));
}
