include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(vector3_tests vector3_tests.cpp vector3_tests.cpp)
add_executable(vector3_swizzle_tests vector3_swizzle_tests.cpp)

target_link_libraries(vector3_tests
        gtest
        gtest_main)

target_link_libraries(vector3_swizzle_tests
        gtest
        gtest_main)