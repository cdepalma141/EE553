cmake_minimum_required(VERSION 3.9)
project(Session05)

set(CMAKE_CXX_STANDARD 11)

add_executable(Session05 main.cpp 01pointers.cpp 01b.cpp 04pointervsref.cpp 05casting.cpp "06pointers to objects.cpp")
add_executable(01pointers 01pointers.cpp)

add_executable(06pointerstoobjects 06pointerstoobjects.cpp)