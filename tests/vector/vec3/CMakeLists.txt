include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(vec3_tests vec3_tests.cpp vec3_tests.cpp)
add_executable(vec3_swizzle_tests vec3_swizzle_tests.cpp)

target_link_libraries(vec3_tests
        gtest
        gtest_main)

target_link_libraries(vec3_swizzle_tests
        gtest
        gtest_main)