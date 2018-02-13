cmake_minimum_required(VERSION 3.9)
project(Session04)

set(CMAKE_CXX_STANDARD 11)

add_executable(Session04 main.cpp s00fraction.cpp s00bFraction.cpp s00dFraction.cpp s00eFraction.cc 01static.cpp 02containment.cpp 03Inheritance.cpp)
add_executable(s00fraction s00fraction.cpp)
add_executable(s00eFraction s00eFraction.cc)
add_executable(01static 01static.cpp)
add_executable(02containment 02containment.cpp)
add_executable(03Inheritance 03Inheritance.cpp)