cmake_minimum_required(VERSION 3.9)
project(HW5)

set(CMAKE_CXX_STANDARD 11)

add_executable(HW5 main.cpp HW3c.cpp PointerPractice.cpp)
add_executable(HW3c HW3c.cpp)
add_executable(main main.cpp)
add_executable(PointerPractice PointerPractice.cpp)