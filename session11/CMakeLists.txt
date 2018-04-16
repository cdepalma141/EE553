cmake_minimum_required(VERSION 3.10)
project(session11)

set(CMAKE_CXX_STANDARD 11)

add_executable(00reveiw 00reveiw.cpp 05templatelist.cpp templatelist/main.cpp templatelist/List.h templatelist/Elephant.h)
add_executable(03templatefunctions 03templatefunctions.cpp)
add_executable(04sortingonkeys 04sortingonkeys.cpp)

add_executable(main templatelist/main.cpp)