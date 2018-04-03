cmake_minimum_required(VERSION 3.9)
project(session09)

set(CMAKE_CXX_STANDARD 11)

add_executable(session09 main.cpp dynamicMemory.cpp dynamicarray.cpp String.cpp)
add_executable(dynamicarray dynamicarray.cpp)
add_executable(String String.cpp)