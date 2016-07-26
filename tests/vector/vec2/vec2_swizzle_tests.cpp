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

// ----------------------------------
// Vector creation from swizzle tests
// ----------------------------------
TEST_F(Vec2SwizzleFixture, test_vector_creation_from_xx)
{
    Vec2f res{rhs.xx};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
}

TEST_F(Vec2SwizzleFixture, test_vector_creation_from_xy)
{
    Vec2f res{rhs.xy};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
}

TEST_F(Vec2SwizzleFixture, test_vector_creation_from_yx)
{
    Vec2f res{rhs.yx};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
}

TEST_F(Vec2SwizzleFixture, test_vector_creation_from_yy)
{
    Vec2f res{rhs.yy};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
}

TEST_F(Vec2SwizzleFixture, test_vector_creation_from_ss)
{
    Vec2f res{rhs.ss};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
}

TEST_F(Vec2SwizzleFixture, test_vector_creation_from_st)
{
    Vec2f res{rhs.st};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
}

TEST_F(Vec2SwizzleFixture, test_vector_creation_from_ts)
{
    Vec2f res{rhs.ts};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
}

TEST_F(Vec2SwizzleFixture, test_vector_creation_from_tt)
{
    Vec2f res{rhs.tt};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
}


// ---------------------------------
// Swizzle assignment operator tests
// ---------------------------------
TEST_F(Vec2SwizzleFixture, test_swizzle_assignment_operator)
{
    lhs.xy = rhs.yx;

    EXPECT_FLOAT_EQ(lhs.x, rhs.y);
    EXPECT_FLOAT_EQ(lhs.y, rhs.x);
}


// ------------------------
// Swizzle operator + tests
// ------------------------
TEST_F(Vec2SwizzleFixture, test_swizzle_operator_swizzle_plus_swizzle)
{
    Vec2f res{lhs.xy + rhs.xy};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_operator_swizzleAA_plus_swizzle)
{
    Vec2f res{lhs.xx + rhs.xy};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_operator_swizzle_plus_scalar)
{
    Vec2f res{lhs.xy + 2.0f};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_operator_swizzleAA_plus_scalar)
{
    Vec2f res{lhs.xx + 2.0f};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
}

// ------------------------
// Swizzle operator - tests
// ------------------------
TEST_F(Vec2SwizzleFixture, test_swizzle_operator_swizzle_minus_swizzle)
{
    Vec2f res{lhs.xy - rhs.yx};

    EXPECT_FLOAT_EQ(res.x, 0.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_operator_swizzleAA_minus_swizzle)
{
    Vec2f res{lhs.xx - rhs.xy};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 0.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_operator_swizzle_minus_scalar)
{
    Vec2f res{lhs.xy - 2.0f};

    EXPECT_FLOAT_EQ(res.x, 0.0f);
    EXPECT_FLOAT_EQ(res.y, 0.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_operator_swizzleAA_minus_scalar)
{
    Vec2f res{lhs.xx - 2.0f};

    EXPECT_FLOAT_EQ(res.x, 0.0f);
    EXPECT_FLOAT_EQ(res.y, 0.0f);
}


// ------------------------
// Swizzle operator * tests
// ------------------------
TEST_F(Vec2SwizzleFixture, test_swizzle_operator_swizzle_mult_swizzle)
{
    Vec2f res{lhs.xy * rhs.yx};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_operator_swizzleAA_mult_swizzle)
{
    Vec2f res{lhs.xx * rhs.xy};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_operator_swizzle_mult_scalar)
{
    Vec2f res{lhs.xy * 2.0f};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_operator_sizzleAA_mult_scalar)
{
    Vec2f res{lhs.xx * 2.0f};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.x, 4.0f);
}


// ------------------------
// Swizzle operator / tests
// ------------------------
TEST_F(Vec2SwizzleFixture, test_swizzle_operator_swizzle_div_swizzle)
{
    Vec2f res{lhs.xy / rhs.yx};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_opeartor_swizzleAA_div_swizzle)
{
    Vec2f res{lhs.xx / rhs.xy};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_operator_swizzle_div_scalar)
{
    Vec2f res{lhs.xy / 2.0f};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_operator_swizzleAA_div_scalar)
{
    Vec2f res{lhs.xx / 2.0f};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
}


// -------------------------
// Swizzle operator += tests
// -------------------------
TEST_F(Vec2SwizzleFixture, test_swizzle_operator_swizzle_plus_equals_swizzle)
{
    lhs.xy += rhs.yx;

    EXPECT_FLOAT_EQ(lhs.x, 4.0f);
    EXPECT_FLOAT_EQ(lhs.y, 3.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_operator_swizzle_plus_equals_scalar)
{
    lhs.xy += 2.0f;

    EXPECT_FLOAT_EQ(lhs.x, 4.0f);
    EXPECT_FLOAT_EQ(lhs.y, 4.0f);
}


// -------------------------
// Swizzle operator -= tests
// -------------------------
TEST_F(Vec2SwizzleFixture, test_swizzle_operator_swizzle_minus_equals_swizzle)
{
    lhs.xy -= rhs.yx;

    EXPECT_FLOAT_EQ(lhs.x, 0.0f);
    EXPECT_FLOAT_EQ(lhs.y, 1.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_operator_swizzle_minus_equals_scalar)
{
    lhs.xy -= 2.0f;

    EXPECT_FLOAT_EQ(lhs.x, 0.0f);
    EXPECT_FLOAT_EQ(lhs.y, 0.0f);
}


// -------------------------
// Swizzle operator *= tests
// -------------------------
TEST_F(Vec2SwizzleFixture, test_swizzle_operator_swizzle_mult_equals_swizzle)
{
    lhs.xy *= rhs.yx;

    EXPECT_FLOAT_EQ(lhs.x, 4.0f);
    EXPECT_FLOAT_EQ(lhs.y, 2.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_operator_swizzle_mult_equals_scalar)
{
    lhs.xy *= 2.0f;

    EXPECT_FLOAT_EQ(lhs.x, 4.0f);
    EXPECT_FLOAT_EQ(lhs.y, 4.0f);
}


// -------------------------
// Swizzle operator /= tests
// -------------------------
TEST_F(Vec2SwizzleFixture, test_swizzle_operator_swizzle_div_equals_swizzle)
{
    lhs.xy /= rhs.yx;

    EXPECT_FLOAT_EQ(lhs.x, 1.0f);
    EXPECT_FLOAT_EQ(lhs.y, 2.0f);
}

TEST_F(Vec2SwizzleFixture, test_swizzle_operator_swizzle_div_equals_scalar)
{
    lhs.xy /= 2.0f;

    EXPECT_FLOAT_EQ(lhs.x, 1.0f);
    EXPECT_FLOAT_EQ(lhs.y, 1.0f);
}
