include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(matrix3_tests matrix3_tests.cpp)

target_link_libraries(matrix3_tests
        gtest
        gtest_main)
