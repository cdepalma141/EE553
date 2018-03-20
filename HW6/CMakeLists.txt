cmake_minimum_required(VERSION 3.9)
project(HW6)

set(CMAKE_CXX_STANDARD 11)

add_executable(HW6 main.cpp Postscript.cpp practice.cpp)
add_executable(main main.cpp)
add_executable(Postscript Postscript.cpp)
add_executable(practice practice.cpp)