cmake_minimum_required(VERSION 3.10)
project(dynamic_memory)

set(CMAKE_CXX_STANDARD 11)

include_directories(includes)

set(SOURCES
    main.cpp
    src/copy_dynamic_array.cpp
    src/delete_element.cpp
    src/find_max_element.cpp
    src/get_squares_array.cpp
    src/initialize_dynamic_array.cpp
    src/reverse_dynamic_array.cpp
    src/reverse_dynamic_string.cpp

)

add_executable(dynamic_memory ${SOURCES})
