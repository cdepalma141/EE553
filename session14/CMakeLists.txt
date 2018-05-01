cmake_minimum_required(VERSION 3.10)
project(session14)

set(CMAKE_CXX_STANDARD 11)

add_executable(session14 main.cpp threading.cpp threading2.cpp Account.cpp primes.cpp fastthreadedloop.cpp)
add_executable(threading threading.cpp)
add_executable(Account Account.cpp)
add_executable(fastthreadedloop fastthreadedloop.cpp)
add_executable(threading2 threading2.cpp)