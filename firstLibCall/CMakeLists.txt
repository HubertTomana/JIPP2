cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD  17)

include_directories(${CMAKE_SOURCE_DIR}/../firstLib/include)

add_executable(firstLibCall main.cpp)

target_link_libraries(firstLibCall firstLibLib)