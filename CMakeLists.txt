# 设置 CMake 最低版本要求
cmake_minimum_required(VERSION 3.10)
# 定义项目名称和版本
project(CMakeTemplate VERSION 1.0.0 LANGUAGES CXX)

include_directories(${PROJECT_SOURCE_DIR})

add_subdirectory(src/thread)
add_subdirectory(src/sort)
