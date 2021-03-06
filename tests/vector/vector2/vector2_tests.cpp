#include "gtest/gtest.h"
#include "helmath.h"

using namespace hm;

class Vector2Fixture : public ::testing::Test {
protected:
    Vec2f v1;
    Vec2f v2;

    void SetUp() override
    {
        v1 = Vec2f{1.0f, 2.0f};
        v2 = Vec2f{3.0f, 2.0f};
    }
};

TEST_F(Vector2Fixture, test_member_function_length)
{
    float len{v1.length()};

    EXPECT_FLOAT_EQ(len, 2.2360679774997898);
}

TEST_F(Vector2Fixture, test_member_function_normalize)
{
    v1.normalize();

    EXPECT_FLOAT_EQ(v1.x, 0.44721359f);
    EXPECT_FLOAT_EQ(v1.y, 0.89442718f);

    float len{v1.length()};

    EXPECT_FLOAT_EQ(len, 1.0f);
}

TEST_F(Vector2Fixture, test_member_function_normalized)
{
    Vec2f res{v1.normalized()};

    EXPECT_FLOAT_EQ(res.x, 0.44721359f);
    EXPECT_FLOAT_EQ(res.y, 0.89442718f);

    float len = res.length();

    EXPECT_FLOAT_EQ(len, 1.0f);
}

TEST_F(Vector2Fixture, test_member_function_dot)
{
    double d{v1.dot(v2)};

    EXPECT_DOUBLE_EQ(d, 7.0);
}

TEST_F(Vector2Fixture, test_member_function_reflect)
{
    v1.reflect(Vec2f{1.0f, 0.0f});

    EXPECT_FLOAT_EQ(v1.x, -1.0f);
    EXPECT_FLOAT_EQ(v1.y, 2.0f);
}

TEST_F(Vector2Fixture, test_member_function_reflected)
{
    Vec2f res{v1.reflected(Vec2f{1.0f, 0.0f})};

    EXPECT_FLOAT_EQ(res.x, -1.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
}

TEST_F(Vector2Fixture, test_member_function_transform)
{
    Mat4f trans{1, 0, 0, 1,
                0, 1, 0, 1,
                0, 0, 1, 1,
                0, 0, 0, 1};

    v1.transform(trans);

    EXPECT_FLOAT_EQ(v1.x, 2.0f);
    EXPECT_FLOAT_EQ(v1.y, 3.0f);
}

TEST_F(Vector2Fixture, test_member_function_transformed)
{
    Mat4f trans{1, 0, 0, 1,
                0, 1, 0, 1,
                0, 0, 1, 1,
                0, 0, 0, 1};

    Vec2f res{v1.transformed(trans)};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
}

TEST_F(Vector2Fixture, test_implicit_conversion_to_pointer)
{
    float *vec = v1;

    const float *vec2 = v2;

    EXPECT_FLOAT_EQ(*(++vec), 2.0f);
    EXPECT_FLOAT_EQ(*(++vec2), 2.0f);
}

TEST_F(Vector2Fixture, test_vector_plus_vector)
{
    Vec2f res{v1 + v2};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
}

TEST_F(Vector2Fixture, test_operator_vector_minus_vector)
{
    Vec2f res{v2 - v1};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 0.0f);
}

TEST_F(Vector2Fixture, test_operator_vector_mult_vector)
{
    Vec2f res{v1 * v2};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
}

TEST_F(Vector2Fixture, test_operator_vector_div_vector)
{
    Vec2f res{v1 / v2};

    EXPECT_FLOAT_EQ(res.x, 0.33333334);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
}

TEST_F(Vector2Fixture, test_operator_vector_plus_scalar)
{
    Vec2f res{v1 + 2.0f};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
}

TEST_F(Vector2Fixture, test_operator_vector_minus_scalar)
{
    Vec2f res{v1 - 2.0f};

    EXPECT_FLOAT_EQ(res.x, -1.0f);
    EXPECT_FLOAT_EQ(res.y, 0.0f);
}

TEST_F(Vector2Fixture, test_operator_vector_mult_scalar)
{
    Vec2f res{v1 * 2.0f};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
}

TEST_F(Vector2Fixture, test_operator_vector_div_scalar)
{
    Vec2f res{v1 / 2.0f};

    EXPECT_FLOAT_EQ(res.x, 0.5f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
}

TEST_F(Vector2Fixture, test_operator_vector_plus_equals_vector)
{
    v1 += v2;

    EXPECT_FLOAT_EQ(v1.x, 4.0f);
    EXPECT_FLOAT_EQ(v1.y, 4.0f);
}

TEST_F(Vector2Fixture, test_operator_vector_minus_equals_vector)
{
    v1 -= v2;

    EXPECT_FLOAT_EQ(v1.x, -2.0f);
    EXPECT_FLOAT_EQ(v1.y, 0.0f);
}

TEST_F(Vector2Fixture, test_operator_vector_mult_equals_vector)
{
    v1 *= v2;

    EXPECT_FLOAT_EQ(v1.x, 3.0f);
    EXPECT_FLOAT_EQ(v1.y, 4.0f);
}

TEST_F(Vector2Fixture, test_operator_vector_div_equals_vector)
{
    v1 /= v2;

    EXPECT_FLOAT_EQ(v1.x, 0.3333334f);
    EXPECT_FLOAT_EQ(v1.y, 1.0f);
}

TEST_F(Vector2Fixture, test_operator_vector_plus_equals_scalar)
{
    v1 += 2.0f;

    EXPECT_FLOAT_EQ(v1.x, 3.0f);
    EXPECT_FLOAT_EQ(v1.y, 4.0f);
}

TEST_F(Vector2Fixture, test_operator_vector_minus_equals_scalar)
{
    v1 -= 2.0f;

    EXPECT_FLOAT_EQ(v1.x, -1.0f);
    EXPECT_FLOAT_EQ(v1.y, 0.0f);
}

TEST_F(Vector2Fixture, test_operator_vector_mult_equals_scalar)
{
    v1 *= 2.0f;

    EXPECT_FLOAT_EQ(v1.x, 2.0f);
    EXPECT_FLOAT_EQ(v1.y, 4.0f);
}

TEST_F(Vector2Fixture, test_operator_vector_div_equals_scalar)
{
    v1 /= 2.0f;

    EXPECT_FLOAT_EQ(v1.x, 0.5f);
    EXPECT_FLOAT_EQ(v1.y, 1.0f);
}

TEST_F(Vector2Fixture, test_subscript_operator)
{
    float val{v1[0]};
    float val2{v1[1]};

    EXPECT_FLOAT_EQ(val, 1.0f);
    EXPECT_FLOAT_EQ(val2, 2.0f);
}

TEST_F(Vector2Fixture, test_non_member_function_length)
{
    float len{length(v1)};

    EXPECT_FLOAT_EQ(len, 2.2360679774997898);
}

TEST_F(Vector2Fixture, test_non_member_function_length_sqrd)
{
    double len{length_sqrd(v1)};

    EXPECT_DOUBLE_EQ(len, 5.0);
}

TEST_F(Vector2Fixture, test_non_member_function_dot)
{
    double d{dot(v1, v2)};

    EXPECT_DOUBLE_EQ(d, 7.0);
}

TEST_F(Vector2Fixture, test_non_member_function_reflect)
{
    Vec2f res{reflect(v1, Vec2f{1.0f, 0.0f})};

    EXPECT_FLOAT_EQ(res.x, -1.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
}

TEST_F(Vector2Fixture, test_non_member_function_transform)
{
    Mat4f trans{1, 0, 0, 1,
                0, 1, 0, 1,
                0, 0, 1, 1,
                0, 0, 0, 1};

    Vec2f res{transform(v1, trans)};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
}
