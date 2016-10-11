add_subdirectory(lib/googletest)
add_subdirectory(vector)
add_subdirectory(matrix)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(all_tests
        vector/vector2/vector2_swizzle_tests.cpp
        vector/vector3/vector3_swizzle_tests.cpp
        vector/vector4/vector4_swizzle_tests.cpp
        vector/vector2/vector2_tests.cpp
        vector/vector3/vector3_tests.cpp
        vector/vector4/vector4_tests.cpp
        matrix/matrix2/matrix2_tests.cpp
        matrix/matrix3/matrix3_tests.cpp
        matrix/matrix4/matrix4_tests.cpp)

target_link_libraries(all_tests
        gtest
        gtest_main
        helmath)