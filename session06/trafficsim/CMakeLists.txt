cmake_minimum_required(VERSION 3.9)
project(trafficsim)

set(CMAKE_CXX_STANDARD 11)

add_executable(trafficsim main.cpp Car.h Bus.h truck.h Vehicle.h)
add_executable(main main.cpp)