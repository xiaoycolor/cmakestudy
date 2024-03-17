# 设置 CMake 最低版本要求
cmake_minimum_required(VERSION 3.10)
# 定义项目名称和版本
project(CMakeTemplate VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_C_FLAGS} -O3 -Wall -fPIC")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O3 -Wall -fPIC")

include_directories(${PROJECT_SOURCE_DIR})

add_subdirectory(src/thread)
add_subdirectory(src/sort)
add_subdirectory(src/performance)
add_subdirectory(src/pythonApi)
add_subdirectory(unit-test)
