include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(vec2_swizzle_tests vec2_swizzle_tests.cpp)

target_link_libraries(vec2_swizzle_tests
        gtest
        gtest_main
        helmath)