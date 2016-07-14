add_subdirectory(lib/googletest)
add_subdirectory(vector)

add_executable(all_tests
        vector/vec2/vec2_swizzle_tests.cpp
        vector/vec3/vec3_double_tests.cpp
        vector/vec3/vec3_float_tests.cpp
        vector/vec3/vec3_int_tests.cpp)

target_link_libraries(all_tests
        gtest
        gtest_main
        helmath)