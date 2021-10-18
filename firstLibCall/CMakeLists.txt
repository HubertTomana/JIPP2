cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD  17)

include_directories(../firstLib/include)

add_executable(firstLibCall src/main.cpp)

target_link_libraries(simpleLibApp simpleLibLib)