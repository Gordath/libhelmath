cmake_minimum_required(VERSION 2.8)
project(helmath)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

option(COVERAGE "Generate coverage data" OFF)

if(COVERAGE)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0") # debug, no optimisation
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage") # enabling coverage
endif()

include_directories(src/include)

add_subdirectory(tests)

set(SOURCE_FILES
        src/helmath.cpp)

add_library(helmath ${SOURCE_FILES})
