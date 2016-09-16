include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(vector4_tests vector4_tests.cpp)
add_executable(vector4_swizzle_tests vector4_swizzle_tests.cpp)

target_link_libraries(vector4_tests
        gtest
        gtest_main
        helmath)

target_link_libraries(vector4_swizzle_tests
        gtest
        gtest_main
        helmath)