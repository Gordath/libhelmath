add_subdirectory(lib/googletest)
add_subdirectory(vector)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(all_tests
        vector/vec2/vec2_swizzle_tests.cpp
        vector/vec3/vec3_swizzle_tests.cpp vector/vec4/vec4_swizzle_tests.cpp vector/vec3/vec3_tests.cpp ../src/include/internal/swizzle2_class_macros.h ../src/include/internal/swizzle3_class_macros.h ../src/include/internal/swizzle.h ../src/include/internal/swizzle4_class_macros.h)

target_link_libraries(all_tests
        gtest
        gtest_main)