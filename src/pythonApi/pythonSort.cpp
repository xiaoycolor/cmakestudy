#include <include/pybind11/pybind11.h>
#include <include/pybind11/stl.h>
#include <sort/sort.h>

namespace py = pybind11;

PYBIND11_MODULE(MyQuickSort, m)
{
    py::class_<QuickSort>(m, "QuickSort")
        .def(py::init())
        .def("sort", &QuickSort::sort1);
}