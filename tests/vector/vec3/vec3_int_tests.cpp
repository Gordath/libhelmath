#include "gtest/gtest.h"
#include "helmath.h"

TEST(Vec3_int_tests, test_length)
{
    hm::Vec3i v{1, 2, 3};

    double length = v.length();

    EXPECT_DOUBLE_EQ(length, 3.741657386773941);
}

TEST(Vec3_int_tests, test_normalize)
{
    hm::Vec3i v{10, 20, 30};

    v.normalize();

    double length = v.length();

    EXPECT_DOUBLE_EQ(length, 0);
}
