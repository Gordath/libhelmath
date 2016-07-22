include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(vec4_swizzle_tests vec4_swizzle_tests.cpp)

target_link_libraries(vec4_swizzle_tests
        gtest
        gtest_main)