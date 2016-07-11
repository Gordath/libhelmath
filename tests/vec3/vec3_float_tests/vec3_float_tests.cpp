#include "gtest/gtest.h"
#include "helmath.h"

TEST(Vec3_tests, test_length)
{
    hm::Vec3f v{10.0f, 20.0f, 30.0f};

    float length = v.lengthf();

    EXPECT_FLOAT_EQ(length, 37.416573867739416);
}

TEST(Vec3_tests, test_normalize)
{
    hm::Vec3f v{10.0f, 20.0f, 30.f};

    v.normalize();

    double length = v.length();

    EXPECT_DOUBLE_EQ(length, 1.0);
}
