cmake_minimum_required(VERSION 3.16)

project(SimpleCalc)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(SimpleCalc
        src/main.cpp
        src/calc.cpp)