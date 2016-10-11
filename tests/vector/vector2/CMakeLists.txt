include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(vector2_tests vector2_tests.cpp)
add_executable(vector2_swizzle_tests vector2_swizzle_tests.cpp)

if(COVERAGE)
    target_compile_options(vector2_tests PUBLIC "--coverage")
    target_compile_options(vector2_swizzle_tests PUBLIC "--coverage")
endif()

target_link_libraries(vector2_tests
        gtest
        gtest_main
        helmath)

target_link_libraries(vector2_swizzle_tests
        gtest
        gtest_main
        helmath)
