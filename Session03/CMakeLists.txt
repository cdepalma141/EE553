cmake_minimum_required(VERSION 3.9)
project(Session03)

set(CMAKE_CXX_STANDARD 11)

add_executable(Session03 main.cpp)
add_executable(main main.cpp review.cpp arraysandstrings.cpp 01bstrings.cpp 03files.cpp 03bfiles.cpp 04nestedloops.cpp 05objects.cpp 05bfraction.cpp 05cfraction.cpp)
add_executable(01bstrings 01bstrings.cpp)
add_executable(03files 03files.cpp)
add_executable(04nestedloops 04nestedloops.cpp)
add_executable(05objects 05objects.cpp)
add_executable(05cfraction 05cfraction.cpp)
add_executable(03bfiles 03bfiles.cpp)