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
TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz_xxx)
{
    lhs.xyz = rhs.xxx;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz_xxy)
{
    lhs.xyz = rhs.xxy;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz_xxz)
{
    lhs.xyz = rhs.xxz;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz_xyx)
{
    lhs.xyz = rhs.xyx;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}
TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz_xyy)
{
    lhs.xyz = rhs.xyy;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}
TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz_xyz)
{
    lhs.xyz = rhs.xyz;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz_xzx)
{
    lhs.xyz = rhs.xzx;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz_xzy)
{
    lhs.xyz = rhs.xzy;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz_xzz)
{
    lhs.xyz = rhs.xzz;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz_yxx)
{
    lhs.xyz = rhs.yxx;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz_yxy)
{
    lhs.xyz = rhs.yxy;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz_yxz)
{
    lhs.xyz = rhs.yxz;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz_yyx)
{
    lhs.xyz = rhs.yyx;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz_yyy)
{
    lhs.xyz = rhs.yyy;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz_yyz)
{
    lhs.xyz = rhs.yyz;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz_yzx)
{
    lhs.xyz = rhs.yzx;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz_yzy)
{
    lhs.xyz = rhs.yzy;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz_yzz)
{
    lhs.xyz = rhs.yzz;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz_zxx)
{
    lhs.xyz = rhs.zxx;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz_zxy)
{
    lhs.xyz = rhs.zxy;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz_zxz)
{
    lhs.xyz = rhs.zxz;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz_zyx)
{
    lhs.xyz = rhs.zyx;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz_zyy)
{
    lhs.xyz = rhs.zyy;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz_zyz)
{
    lhs.xyz = rhs.zyz;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz_zzx)
{
    lhs.xyz = rhs.zzx;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz_zzy)
{
    lhs.xyz = rhs.zzy;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz_zzz)
{
    lhs.xyz = rhs.zzz;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xzy_xxx)
{
    lhs.xzy = rhs.xxx;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xzy_xxy)
{
    lhs.xzy = rhs.xxy;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xzy_xxz)
{
    lhs.xzy = rhs.xxz;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xzy_xyx)
{
    lhs.xzy = rhs.xyx;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}
TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xzy_xyy)
{
    lhs.xzy = rhs.xyy;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}
TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xzy_xyz)
{
    lhs.xzy = rhs.xyz;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xzy_xzx)
{
    lhs.xzy = rhs.xzx;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xzy_xzy)
{
    lhs.xzy = rhs.xzy;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xzy_xzz)
{
    lhs.xzy = rhs.xzz;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xzy_yxx)
{
    lhs.xzy = rhs.yxx;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xzy_yxy)
{
    lhs.xzy = rhs.yxy;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xzy_yxz)
{
    lhs.xzy = rhs.yxz;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xzy_yyx)
{
    lhs.xzy = rhs.yyx;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xzy_yyy)
{
    lhs.xzy = rhs.yyy;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xzy_yyz)
{
    lhs.xzy = rhs.yyz;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xzy_yzx)
{
    lhs.xzy = rhs.yzx;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xzy_yzy)
{
    lhs.xzy = rhs.yzy;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xzy_yzz)
{
    lhs.xzy = rhs.yzz;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xzy_zxx)
{
    lhs.xzy = rhs.zxx;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xzy_zxy)
{
    lhs.xzy = rhs.zxy;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xzy_zxz)
{
    lhs.xzy = rhs.zxz;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xzy_zyx)
{
    lhs.xzy = rhs.zyx;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xzy_zyy)
{
    lhs.xzy = rhs.zyy;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xzy_zyz)
{
    lhs.xzy = rhs.zyz;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xzy_zzx)
{
    lhs.xzy = rhs.zzx;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xzy_zzy)
{
    lhs.xzy = rhs.zzy;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xzy_zzz)
{
    lhs.xzy = rhs.zzz;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_zxy_xxx)
{
    lhs.zxy = rhs.xxx;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_zxy_xxy)
{
    lhs.zxy = rhs.xxy;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_zxy_xxz)
{
    lhs.zxy = rhs.xxz;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_zxy_xyx)
{
    lhs.zxy = rhs.xyx;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}
TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_zxy_xyy)
{
    lhs.zxy = rhs.xyy;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_zxy_xyz)
{
    lhs.zxy = rhs.xyz;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_zxy_xzx)
{
    lhs.zxy = rhs.xzx;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_zxy_xzy)
{
    lhs.zxy = rhs.xzy;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_zxy_xzz)
{
    lhs.zxy = rhs.xzz;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_zxy_yxx)
{
    lhs.zxy = rhs.yxx;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_zxy_yxy)
{
    lhs.zxy = rhs.yxy;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_zxy_yxz)
{
    lhs.zxy = rhs.yxz;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_zxy_yyx)
{
    lhs.zxy = rhs.yyx;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_zxy_yyy)
{
    lhs.zxy = rhs.yyy;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_zxy_yyz)
{
    lhs.zxy = rhs.yyz;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_zxy_yzx)
{
    lhs.zxy = rhs.yzx;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_zxy_yzy)
{
    lhs.zxy = rhs.yzy;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_zxy_yzz)
{
    lhs.zxy = rhs.yzz;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_zxy_zxx)
{
    lhs.zxy = rhs.zxx;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_zxy_zxy)
{
    lhs.zxy = rhs.zxy;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_zxy_zxz)
{
    lhs.zxy = rhs.zxz;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_zxy_zyx)
{
    lhs.zxy = rhs.zyx;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_zxy_zyy)
{
    lhs.zxy = rhs.zyy;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_zxy_zyz)
{
    lhs.zxy = rhs.zyz;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_zxy_zzx)
{
    lhs.zxy = rhs.zzx;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_zxy_zzy)
{
    lhs.zxy = rhs.zzy;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_zxy_zzz)
{
    lhs.zxy = rhs.zzz;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_yxz_xxx)
{
    lhs.yxz = rhs.xxx;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_yxz_xxy)
{
    lhs.yxz = rhs.xxy;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_yxz_xxz)
{
    lhs.yxz = rhs.xxz;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_yxz_xyx)
{
    lhs.yxz = rhs.xyx;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_yxz_xyy)
{
    lhs.yxz = rhs.xyy;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_yxz_xyz)
{
    lhs.yxz = rhs.xyz;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_yxz_xzx)
{
    lhs.yxz = rhs.xzx;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_yxz_xzy)
{
    lhs.yxz = rhs.xzy;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_yxz_xzz)
{
    lhs.yxz = rhs.xzz;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_yxz_yxx)
{
    lhs.yxz = rhs.yxx;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_yxz_yxy)
{
    lhs.yxz = rhs.yxy;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_yxz_yxz)
{
    lhs.yxz = rhs.yxz;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_yxz_yyx)
{
    lhs.yxz = rhs.yyx;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_yxz_yyy)
{
    lhs.yxz = rhs.yyy;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_yxz_yyz)
{
    lhs.yxz = rhs.yyz;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_yxz_yzx)
{
    lhs.yxz = rhs.yzx;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_yxz_yzy)
{
    lhs.yxz = rhs.yzy;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_yxz_yzz)
{
    lhs.yxz = rhs.yzz;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_yxz_zxx)
{
    lhs.yxz = rhs.zxx;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_yxz_zxy)
{
    lhs.yxz = rhs.zxy;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_yxz_zxz)
{
    lhs.yxz = rhs.zxz;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_yxz_zyx)
{
    lhs.yxz = rhs.zyx;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_yxz_zyy)
{
    lhs.yxz = rhs.zyy;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_yxz_zyz)
{
    lhs.yxz = rhs.zyz;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_yxz_zzx)
{
    lhs.yxz = rhs.zzx;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_yxz_zzy)
{
    lhs.yxz = rhs.zzy;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_yxz_zzz)
{
    lhs.yxz = rhs.zzz;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}
