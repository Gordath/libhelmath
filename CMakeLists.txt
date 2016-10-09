cmake_minimum_required(VERSION 2.8)
project(helmath)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")

option(COVERALLS "Generate coveralls data" OFF)

if (COVERALLS)
    include(Coveralls)
    coveralls_turn_on_coverage()

    set(COVERAGE_SRCS src/helmath.cpp)

    # Create the coveralls target.
    coveralls_setup(
            "${COVERAGE_SRCS}" # The source files.
            OFF                 # If we should upload.
            )
endif()

include_directories(src/include)

add_subdirectory(tests)

set(SOURCE_FILES
        src/helmath.cpp)

add_library(helmath ${SOURCE_FILES})
