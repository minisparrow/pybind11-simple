#include <pybind11/pybind11.h>
#include <iostream>
#include <string>
using namespace std;

class Robot{
public:
    enum BOT_FUNC {
        CHAT, 
        VISION, 
        DRAW,
    };

    Robot(const std::string &name, BOT_FUNC func_type) : name(name), func_type(func_type) {

    }

    void do_task(const std::string &task) {
        std::cout << name << "is doing " << task << std::endl;
    }

    int add(int a, int b) {
        return  a + b; 
    }

    int sub(int a, int b) {
        return  a - b; 
    }

    std::string name;
    BOT_FUNC func_type;
};

namespace py = pybind11;

PYBIND11_MODULE(robot, m) {
    py::class_<Robot>(m, "Robot") 
        .def(py::init<const std::string &, Robot::BOT_FUNC>())

        .def("do_task", &Robot::do_task)

        .def_readwrite("name", &Robot::name)

        .def_readwrite("func_type", &Robot::func_type)

        .def("mul", 
            //lambda function
            [](Robot &self, int a, int b) ->int {
                return a * b; 
            }
            )

        .def("add", 
            &Robot::add, 
            py::arg("i"), py::arg("j"))

        .def("sub", 
            &Robot::sub, 
            py::arg("i"), py::arg("j"));

    //void init_bot(py::module &m) {
    py::enum_<Robot::BOT_FUNC>(m, "bot_kind")
        .value("chat", Robot::BOT_FUNC::CHAT)
        .value("vision",Robot::BOT_FUNC::VISION)
        .value("draw", Robot::BOT_FUNC::DRAW)
        .export_values();
}


