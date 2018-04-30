cmake_minimum_required(VERSION 3.10)
project(session13)

set(CMAKE_CXX_STANDARD 11)

add_executable(session13_ main.cpp 01inheritancealltheway.cpp 01inheritanceallthewayb.cpp inheritanceallthewayc.cpp inheritanceallthewayd.cpp 02virtualinheritance.cpp multipleinheritancemightwork.cpp 04virtualdestructor.cpp 05valuetemplates.cpp templatedlinkedlist.cpp linkedlist.cpp)
add_executable(linkedlist linkedlist.cpp)