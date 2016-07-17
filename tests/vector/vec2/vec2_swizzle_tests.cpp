#include "gtest/gtest.h"
#include "helmath.h"

using namespace hm;

class Vec2SwizzleFixture : public ::testing::Test {
public:
    Vec2f rhs;
    Vec2f lhs;

    void SetUp()
    {
        rhs = Vec2f{1.0f, 2.0f};
        lhs = Vec2f{2.0f, 2.0f};
    }
};

// -------------------------
// Swizzle assignment tests
// -------------------------
TEST_F(Vec2SwizzleFixture, test_swizzle_assignment_xy_xy)
{
    lhs.xy = rhs.xy;

    ASSERT_FLOAT_EQ(lhs.x, 10000.0);
    ASSERT_FLOAT_EQ(lhs.y, rhs.y);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_assignment_xy_yx)
{
    lhs.xy = rhs.yx;

    ASSERT_FLOAT_EQ(lhs.x, rhs.y);
    ASSERT_FLOAT_EQ(lhs.y, rhs.x);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_assignment_yx_yx)
{
    lhs.yx = rhs.yx;

    ASSERT_FLOAT_EQ(lhs.y, rhs.y);
    ASSERT_FLOAT_EQ(lhs.x, rhs.x);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_assignment_yx_xy)
{
    lhs.yx = rhs.xy;

    ASSERT_FLOAT_EQ(lhs.y, rhs.x);
    ASSERT_FLOAT_EQ(lhs.x, rhs.y);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_assignment_xy_xx)
{
    lhs.xy = rhs.xx;

    ASSERT_FLOAT_EQ(lhs.x, rhs.x);
    ASSERT_FLOAT_EQ(lhs.y, rhs.x);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_assignment_yx_xx)
{
    lhs.yx = rhs.xx;

    ASSERT_FLOAT_EQ(lhs.y, rhs.x);
    ASSERT_FLOAT_EQ(lhs.x, rhs.x);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_assignment_xy_yy)
{
    lhs.xy = rhs.yy;

    ASSERT_FLOAT_EQ(lhs.x, rhs.y);
    ASSERT_FLOAT_EQ(lhs.y, rhs.y);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_assignment_yx_yy)
{
    lhs.yx = rhs.yy;

    ASSERT_FLOAT_EQ(lhs.y, rhs.y);
    ASSERT_FLOAT_EQ(lhs.x, rhs.y);
}


// --------------------------------------------
// Swizzle operator + tests (swizzle + swizzle)
// --------------------------------------------
TEST_F(Vec2SwizzleFixture, test_swizzle_plus_operator_xy_xy)
{
    Vec2f res = lhs.xy + rhs.xy;

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_plus_operator_xy_yx)
{
    Vec2f res = lhs.xy + rhs.yx;

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_plus_operator_xy_xx)
{
    Vec2f res = lhs.xy + rhs.xx;

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_plus_operator_xy_yy)
{
    Vec2f res = lhs.xy + rhs.yy;

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_plus_operator_yx_xy)
{
    Vec2f res = lhs.yx + rhs.xy;

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_plus_operator_yx_yx)
{
    Vec2f res = lhs.yx + rhs.yx;

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_plus_operator_yx_xx)
{
    Vec2f res = lhs.yx + rhs.xx;

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_plus_operator_yx_yy)
{
    Vec2f res = lhs.yx + rhs.yy;

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
}


// --------------------------------------------
// Swizzle operator - tests (swizzle - swizzle)
// --------------------------------------------
TEST_F(Vec2SwizzleFixture, test_swizzle_minus_operator_xy_xy)
{
    Vec2f res = lhs.xy - rhs.xy;

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 0.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_minus_operator_xy_yx)
{
    Vec2f res = lhs.xy - rhs.yx;

    ASSERT_FLOAT_EQ(res.x, 0.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_minus_operator_xy_xx)
{
    Vec2f res = lhs.xy - rhs.xx;

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_minus_operator_xy_yy)
{
    Vec2f res = lhs.xy - rhs.yy;

    ASSERT_FLOAT_EQ(res.x, 0.0f);
    ASSERT_FLOAT_EQ(res.y, 0.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_minus_operator_yx_xy)
{
    Vec2f res = lhs.yx - rhs.xy;

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 0.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_minus_operator_yx_yx)
{
    Vec2f res = lhs.yx - rhs.yx;

    ASSERT_FLOAT_EQ(res.x, 0.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_minus_operator_yx_xx)
{
    Vec2f res = lhs.yx - rhs.xx;

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_minus_operator_yx_yy)
{
    Vec2f res = lhs.yx - rhs.yy;

    ASSERT_FLOAT_EQ(res.x, 0.0f);
    ASSERT_FLOAT_EQ(res.y, 0.0f);
}


// --------------------------------------------
// Swizzle operator * tests (swizzle * swizzle)
// --------------------------------------------
TEST_F(Vec2SwizzleFixture, test_swizzle_star_operator_xy_xy)
{
    Vec2f res = lhs.xy * rhs.xy;

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_star_operator_xy_yx)
{
    Vec2f res = lhs.xy * rhs.yx;

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_star_operator_xy_xx)
{
    Vec2f res = lhs.xy * rhs.xx;

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_star_operator_xy_yy)
{
    Vec2f res = lhs.xy * rhs.yy;

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_star_operator_yx_xy)
{
    Vec2f res = lhs.yx * rhs.xy;

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_star_operator_yx_yx)
{
    Vec2f res = lhs.yx * rhs.yx;

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_star_operator_yx_xx)
{
    Vec2f res = lhs.yx * rhs.xx;

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.x, 2.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_star_operator_yx_yy)
{
    Vec2f res = lhs.yx * rhs.yy;

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
}


// --------------------------------------------
// Swizzle operator / tests (swizzle / swizzle)
// --------------------------------------------
TEST_F(Vec2SwizzleFixture, test_swizzle_div_operator_xy_xy)
{
    Vec2f res = lhs.xy / rhs.xy;

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_div_operator_xy_yx)
{
    Vec2f res = lhs.xy / rhs.yx;

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_div_operator_xy_xx)
{
    Vec2f res = lhs.xy / rhs.xx;

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_div_operator_xy_yy)
{
    Vec2f res = lhs.xy / rhs.yy;

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_div_operator_yx_xy)
{
    Vec2f res = lhs.yx / rhs.xy;

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_div_operator_yx_yx)
{
    Vec2f res = lhs.yx / rhs.yx;

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_div_operator_yx_xx)
{
    Vec2f res = lhs.yx / rhs.xx;

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.x, 2.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_div_operator_yx_yy)
{
    Vec2f res = lhs.yx / rhs.yy;

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
}


// --------------------------------------------
// Swizzle operator += tests (swizzle += swizzle)
// --------------------------------------------
TEST_F(Vec2SwizzleFixture, test_swizzle_plus_equals_operator_xy_xy)
{
    lhs.xy += rhs.xy;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 4.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_plus_equals_operator_xy_yx)
{
    lhs.xy += rhs.yx;

    ASSERT_FLOAT_EQ(lhs.x, 4.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_plus_equals_operator_xy_xx)
{
    lhs.xy += rhs.xx;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_plus_equals_operator_xy_yy)
{
    lhs.xy += rhs.yy;

    ASSERT_FLOAT_EQ(lhs.x, 4.0f);
    ASSERT_FLOAT_EQ(lhs.y, 4.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_plus_equals_operator_yx_xy)
{
    lhs.yx += rhs.xy;

    ASSERT_FLOAT_EQ(lhs.x, 4.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_plus_equals_operator_yx_yx)
{
    lhs.yx += rhs.yx;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.y, 4.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_plus_equals_operator_yx_xx)
{
    lhs.yx += rhs.xx;

    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
    ASSERT_FLOAT_EQ(lhs.x, 3.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_plus_equals_operator_yx_yy)
{
    lhs.yx += rhs.yy;

    ASSERT_FLOAT_EQ(lhs.x, 4.0f);
    ASSERT_FLOAT_EQ(lhs.y, 4.0f);
}


// --------------------------------------------
// Swizzle operator -= tests (swizzle -= swizzle)
// --------------------------------------------
TEST_F(Vec2SwizzleFixture, test_swizzle_minus_equals_operator_xy_xy)
{
    lhs.xy -= rhs.xy;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 0.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_minus_equals_operator_xy_yx)
{
    lhs.xy -= rhs.yx;

    ASSERT_FLOAT_EQ(lhs.x, 0.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_minus_equals_operator_xy_xx)
{
    lhs.xy -= rhs.xx;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_minus_equals_operator_xy_yy)
{
    lhs.xy -= rhs.yy;

    ASSERT_FLOAT_EQ(lhs.x, 0.0f);
    ASSERT_FLOAT_EQ(lhs.y, 0.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_minus_equals_operator_yx_xy)
{
    lhs.yx -= rhs.xy;

    ASSERT_FLOAT_EQ(lhs.x, 0.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_minus_equals_operator_yx_yx)
{
    lhs.yx -= rhs.yx;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 0.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_minus_equals_operator_yx_xx)
{
    lhs.yx -= rhs.xx;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_minus_equals_operator_yx_yy)
{
    lhs.yx -= rhs.yy;

    ASSERT_FLOAT_EQ(lhs.x, 0.0f);
    ASSERT_FLOAT_EQ(lhs.y, 0.0f);
}


// --------------------------------------------
// Swizzle operator *= tests (swizzle *= swizzle)
// --------------------------------------------
TEST_F(Vec2SwizzleFixture, test_swizzle_star_equals_operator_xy_xy)
{
    lhs.xy *= rhs.xy;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 4.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_star_equals_operator_xy_yx)
{
    lhs.xy *= rhs.yx;

    ASSERT_FLOAT_EQ(lhs.x, 4.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_star_equals_operator_xy_xx)
{
    lhs.xy *= rhs.xx;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_star_equals_operator_xy_yy)
{
    lhs.xy *= rhs.yy;

    ASSERT_FLOAT_EQ(lhs.x, 4.0f);
    ASSERT_FLOAT_EQ(lhs.y, 4.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_star_equals_operator_yx_xy)
{
    lhs.yx *= rhs.xy;

    ASSERT_FLOAT_EQ(lhs.x, 4.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_star_equals_operator_yx_yx)
{
    lhs.yx *= rhs.yx;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 4.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_star_equals_operator_yx_xx)
{
    lhs.yx *= rhs.xx;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_star_equals_operator_yx_yy)
{
    lhs.yx *= rhs.yy;

    ASSERT_FLOAT_EQ(lhs.x, 4.0f);
    ASSERT_FLOAT_EQ(lhs.y, 4.0f);
}


// --------------------------------------------
// Swizzle operator /= tests (swizzle /= swizzle)
// --------------------------------------------
TEST_F(Vec2SwizzleFixture, test_swizzle_div_equals_operator_xy_xy)
{
    lhs.xy /= rhs.xy;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_div_equals_operator_xy_yx)
{
    lhs.xy /= rhs.yx;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_div_equals_operator_xy_xx)
{
    lhs.xy /= rhs.xx;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_div_equals_operator_xy_yy)
{
    lhs.xy /= rhs.yy;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_div_equals_operator_yx_xy)
{
    lhs.yx /= rhs.xy;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 2.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_div_equals_operator_yx_yx)
{
    lhs.yx /= rhs.yx;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_div_equals_operator_yx_xx)
{
    lhs.yx /= rhs.xx;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_div_equals_operator_yx_yy)
{
    lhs.yx /= rhs.yy;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
}

// --------------------------------------------
// Swizzle operator + tests (swizzle + scalar)
// --------------------------------------------
TEST_F(Vec2SwizzleFixture, test_swizzle_plus_operator_xy_scalar)
{
    Vec2f res = lhs.xy + 2.0f;

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_plus_operator_yx_scalar)
{
    Vec2f res = lhs.yx + 2.0f;

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_plus_operator_xx_scalar)
{
    Vec2f res = lhs.xx + 2.0f;

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_plus_operator_yy_scalar)
{
    Vec2f res = lhs.yy + 2.0f;

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
}

// --------------------------------------------
// Swizzle operator - tests (swizzle - scalar)
// --------------------------------------------
TEST_F(Vec2SwizzleFixture, test_swizzle_minus_operator_xy_scalar)
{
    Vec2f res = lhs.xy - 2.0f;

    ASSERT_FLOAT_EQ(res.x, 0.0f);
    ASSERT_FLOAT_EQ(res.y, 0.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_minus_operator_yx_scalar)
{
    Vec2f res = lhs.yx - 2.0f;

    ASSERT_FLOAT_EQ(res.x, 0.0f);
    ASSERT_FLOAT_EQ(res.y, 0.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_minus_operator_xx_scalar)
{
    Vec2f res = lhs.xx - 2.0f;

    ASSERT_FLOAT_EQ(res.x, 0.0f);
    ASSERT_FLOAT_EQ(res.y, 0.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_minus_operator_yy_scalar)
{
    Vec2f res = lhs.yy - 2.0f;

    ASSERT_FLOAT_EQ(res.x, 0.0f);
    ASSERT_FLOAT_EQ(res.y, 0.0f);
}

// --------------------------------------------
// Swizzle operator * tests (swizzle * scalar)
// --------------------------------------------
TEST_F(Vec2SwizzleFixture, test_swizzle_star_operator_xy_scalar)
{
    Vec2f res = lhs.xy * 2.0f;

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_star_operator_yx_scalar)
{
    Vec2f res = lhs.yx * 2.0f;

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_star_operator_xx_scalar)
{
    Vec2f res = lhs.xx * 2.0f;

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_star_operator_yy_scalar)
{
    Vec2f res = lhs.yy * 2.0f;

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
}

// --------------------------------------------
// Swizzle operator / tests (swizzle / scalar)
// --------------------------------------------
TEST_F(Vec2SwizzleFixture, test_swizzle_div_operator_xy_scalar)
{
    Vec2f res = lhs.xy / 2.0f;

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_div_operator_yx_scalar)
{
    Vec2f res = lhs.yx / 2.0f;

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_div_operator_xx_scalar)
{
    Vec2f res = lhs.xx / 2.0f;

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_div_operator_yy_scalar)
{
    Vec2f res = lhs.yy / 2.0f;

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
}

// --------------------------------------------
// Swizzle operator += tests (swizzle += scalar)
// --------------------------------------------
TEST_F(Vec2SwizzleFixture, test_swizzle_plus_equals_operator_xy_scalar)
{
    lhs.xy += 2.0f;

    ASSERT_FLOAT_EQ(lhs.x, 4.0f);
    ASSERT_FLOAT_EQ(lhs.y, 4.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_plus_equals_operator_yx_scalar)
{
    lhs.yx += 2.0f;

    ASSERT_FLOAT_EQ(lhs.x, 4.0f);
    ASSERT_FLOAT_EQ(lhs.y, 4.0f);
}

// --------------------------------------------
// Swizzle operator -= tests (swizzle -= scalar)
// --------------------------------------------
TEST_F(Vec2SwizzleFixture, test_swizzle_minus_equals_operator_xy_scalar)
{
    lhs.xy -= 2.0f;

    ASSERT_FLOAT_EQ(lhs.x, 0.0f);
    ASSERT_FLOAT_EQ(lhs.y, 0.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_minus_equals_operator_yx_scalar)
{
    lhs.yx -= 2.0f;

    ASSERT_FLOAT_EQ(lhs.x, 0.0f);
    ASSERT_FLOAT_EQ(lhs.y, 0.0f);
}

// --------------------------------------------
// Swizzle operator *= tests (swizzle *= scalar)
// --------------------------------------------
TEST_F(Vec2SwizzleFixture, test_swizzle_star_equals_operator_xy_scalar)
{
    lhs.xy *= 2.0f;

    ASSERT_FLOAT_EQ(lhs.x, 4.0f);
    ASSERT_FLOAT_EQ(lhs.y, 4.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_star_equals_operator_yx_scalar)
{
    lhs.yx *= 2.0f;

    ASSERT_FLOAT_EQ(lhs.x, 4.0f);
    ASSERT_FLOAT_EQ(lhs.y, 4.0f);
}

// --------------------------------------------
// Swizzle operator /= tests (swizzle /= scalar)
// --------------------------------------------
TEST_F(Vec2SwizzleFixture, test_swizzle_div_equals_operator_xy_scalar)
{
    lhs.xy /= 2.0f;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_div_equals_operator_yx_scalar)
{
    lhs.yx /= 2.0f;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
}
