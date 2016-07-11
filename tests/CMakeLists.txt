cmake_minimum_required(VERSION 3.5)
project(helmath_test)

add_subdirectory(lib/googletest)
add_subdirectory(vec3/vec3_float_tests)
add_subdirectory(vec3/vec3_double_tests)
add_subdirectory(vec3/vec3_int_tests)