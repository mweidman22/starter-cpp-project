cmake_minimum_required(VERSION 3.10)
project(cs1410_starter_project)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)


add_executable(main src/main.cpp)
add_executable(s_and_e src/struct_and_enum.cpp)
add_executable(array src/arr_and_str.cpp)
add_executable(pointer src/pointers.cpp)
add_executable(book src/book.cpp src/book_main.cpp)
