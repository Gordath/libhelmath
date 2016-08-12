include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(mat2_tests mat2_tests.cpp)

target_link_libraries(mat2_tests
        gtest
        gtest_main)