cmake_minimum_required(VERSION 2.8)
project(helmath)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(src/include)

add_subdirectory(tests)

set(SOURCE_FILES
        src/helmath.cpp)

add_library(helmath ${SOURCE_FILES})
