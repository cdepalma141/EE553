cmake_minimum_required(VERSION 3.9)
project(Session08)

set(CMAKE_CXX_STANDARD 11)

add_executable(Session08 main.cpp Fraction.cpp exception2.cpp Fraction2.cpp)
add_executable(Fraction Fraction.cpp)
add_executable(Fraction2 Fraction2.cpp)
add_executable(main main.cpp)