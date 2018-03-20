cmake_minimum_required(VERSION 3.9)
project(session07)

set(CMAKE_CXX_STANDARD 11)


add_executable(05static 05static.cpp)
add_executable(gravitysim gravitysim.cpp GravSim.h Body.h)
add_executable(GravSim GravSim.cpp)
add_executable(sepcompilationexample sepcompilationexample.cpp Fraction.h)
add_executable(Fraction Fraction.cpp)
add_executable(main main.cpp)