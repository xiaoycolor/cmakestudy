
include_directories(${PROJECT_SOURCE_DIR}/include)

set(sort_src sort.cpp)

add_library(my_sort SHARED ${sort_src})

add_executable(sort main.cpp)
target_link_libraries(sort PUBLIC my_sort)
