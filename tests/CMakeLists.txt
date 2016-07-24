add_subdirectory(lib/googletest)
add_subdirectory(vector)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(all_tests
        vector/vec2/vec2_swizzle_tests.cpp
        vector/vec3/vec3_swizzle_tests.cpp vector/vec4/vec4_swizzle_tests.cpp vector/vec3/vec3_tests.cpp)

target_link_libraries(all_tests
        gtest
        gtest_main)