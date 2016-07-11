cmake_minimum_required(VERSION 3.5)
project(helmath)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(src)

add_subdirectory(tests)

set(SOURCE_FILES
        src/vec3.h
        src/vec3.cpp
        src/helmath.h
        src/vec2.h
        src/vec4.h
        src/vec4.cpp
        src/vec2.cpp)

add_library(helmath ${SOURCE_FILES})
