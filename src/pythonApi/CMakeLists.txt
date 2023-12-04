include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/third_party/pybind11)
include_directories(${PROJECT_SOURCE_DIR}/third_party/pybind11/include)
include_directories(/usr/include/python3.8/)

message(${PROJECT_SOURCE_DIR})

add_subdirectory(${PROJECT_SOURCE_DIR}/third_party/pybind11 pybind11_binary_dir)

add_library(MyQuickSort MODULE pythonSort.cpp)
target_link_libraries(MyQuickSort PRIVATE my_sort)

pybind11_extension(MyQuickSort)
pybind11_strip(MyQuickSort)