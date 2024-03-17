# 设置 gtest的路径
set(gtest_path "/usr/local")

# include 头文件
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories("${gtest_path}/include")

# 用于添加目录使链接器能在其查找到gtest库
link_directories(${gtest_path}/lib)

# 生成可执行程序
add_executable(ut sort_test.cpp)
# 链接依赖库
target_link_libraries(ut gtest gtest_main my_sort pthread)