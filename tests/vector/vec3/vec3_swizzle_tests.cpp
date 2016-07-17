#include "gtest/gtest.h"
#include "helmath.h"

using namespace hm;

class Vec3SwizzleFixture : public ::testing::Test {
public:
    Vec3f rhs;
    Vec3f lhs;

    void SetUp()
    {
        rhs = Vec3f{1.0f, 2.0f, 3.0f};
        lhs = Vec3f{4.0f, 3.0f, 2.0f};
    }
};


// -------------------------
// Swizzle assignment tests
// -------------------------
TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz)
{
    lhs.xyz = rhs.xzx;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xzy)
{
    lhs.xzy = rhs.xyx;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_zxy)
{
    lhs.zxy = rhs.xyz;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_yxz)
{
    lhs.yxz = rhs.xyy;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}
