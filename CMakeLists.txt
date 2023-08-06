cmake_minimum_required(VERSION 3.3)
project(CURL)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -lcurl")

set(SOURCE_FILES main.cpp)
add_executable(CURL ${SOURCE_FILES})
target_link_libraries(CURL curl)
