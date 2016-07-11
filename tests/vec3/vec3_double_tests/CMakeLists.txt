include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(vec3_double_tests vec3_double_tests.cpp)

target_link_libraries(vec3_double_tests
        gtest
        gtest_main
        helmath)