include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(matrix4_tests matrix4_tests.cpp)

target_link_libraries(matrix4_tests
        gtest
        gtest_main)
