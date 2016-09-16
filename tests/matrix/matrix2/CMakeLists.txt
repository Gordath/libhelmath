include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(matrix2_tests matrix2_tests.cpp)

target_link_libraries(matrix2_tests
        gtest
        gtest_main
        helmath)
