cmake_minimum_required(VERSION 3.10)
project(session14)

set(CMAKE_CXX_STANDARD 11)

add_executable(session14 main.cpp threading.cpp threading2.cpp Account.cpp primes.cpp fastthreadedloop.cpp Practice/practice.cpp)
add_executable(threading threading.cpp)
add_executable(Account Account.cpp "Practice/StringPractice/string.cpp")
add_executable(fastthreadedloop fastthreadedloop.cpp)
add_executable(threading2 threading2.cpp)
add_executable(mainlist Practice/List.cpp Practice/mainlist.cpp)
add_executable(mainlist2 Practice/mainlist2.cpp)


add_executable(morepractice Practice/morepractice.cpp)
add_executable(moarpractice Practice/moarpractice.cpp)

add_executable(main3 Practice/StringPractice/main3.cpp)
add_executable(string Practice/StringPractice/string.cpp)
add_executable(practice Practice/practice.cpp)
add_executable(poop Practice/StringPractice/poop.cpp)