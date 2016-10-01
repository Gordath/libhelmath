#include "gtest/gtest.h"
#include "helmath.h"

using namespace hm;

class Vector4Fixture : public ::testing::Test {
protected:
    Vec4f v1;
    Vec4f v2;

    void SetUp() override
    {
        v1 = Vec4f{1.0f, 2.0f, 3.0f, 4.0f};
        v2 = Vec4f{4.0f, 3.0f, 2.0f, 1.0f};
    }
};

TEST_F(Vector4Fixture, test_member_function_length)
{
    double len{v1.length()};

    EXPECT_DOUBLE_EQ(len, 5.4772255750516612);
}

TEST_F(Vector4Fixture, test_member_function_lengthf)
{
    float len{v1.lengthf()};

    EXPECT_FLOAT_EQ(len, 5.4772258f);
}

TEST_F(Vector4Fixture, test_member_function_normalize)
{
    v1.normalize();

    EXPECT_FLOAT_EQ(v1.x, 0.18257418f);
    EXPECT_FLOAT_EQ(v1.y, 0.36514837f);
    EXPECT_FLOAT_EQ(v1.z, 0.54772252f);
    EXPECT_FLOAT_EQ(v1.w, 0.73029673f);

    float len{v1.lengthf()};

    EXPECT_FLOAT_EQ(len, 1.0f);
}

TEST_F(Vector4Fixture, test_member_function_normalized)
{
    Vec4f res{v1.normalized()};

    EXPECT_FLOAT_EQ(res.x, 0.18257418f);
    EXPECT_FLOAT_EQ(res.y, 0.36514837f);
    EXPECT_FLOAT_EQ(res.z, 0.54772252f);
    EXPECT_FLOAT_EQ(res.w, 0.73029673f);

    float len = res.lengthf();

    EXPECT_FLOAT_EQ(len, 1.0f);
}

TEST_F(Vector4Fixture, test_member_function_dot)
{
    double d{v1.dot(v2)};

    EXPECT_DOUBLE_EQ(d, 20.0);
}

TEST_F(Vector4Fixture, test_member_function_dotf)
{
    float d{v1.dotf(v2)};

    EXPECT_FLOAT_EQ(d, 20.0f);
}

TEST_F(Vector4Fixture, test_member_function_reflect)
{
    v1.reflect(Vec4f{1.0f, 0.0f, 0.0f, 0.0f});

    EXPECT_FLOAT_EQ(v1.x, -1.0f);
    EXPECT_FLOAT_EQ(v1.y, 2.0f);
}

TEST_F(Vector4Fixture, test_member_function_reflected)
{
    Vec4f res{v1.reflected(Vec4f{1.0f, 0.0f, 0.0f, 0.0f})};

    EXPECT_FLOAT_EQ(res.x, -1.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
}

TEST_F(Vector4Fixture, test_member_function_transform)
{
    Mat4f trans{1, 0, 0, 1,
                0, 1, 0, 1,
                0, 0, 1, 1,
                0, 0, 0, 1};

    v1.transform(trans);

    EXPECT_FLOAT_EQ(v1.x, 5.0f);
    EXPECT_FLOAT_EQ(v1.y, 6.0f);
    EXPECT_FLOAT_EQ(v1.z, 7.0f);
    EXPECT_FLOAT_EQ(v1.w, 4.0f);
}

TEST_F(Vector4Fixture, test_member_function_transformed)
{
    Mat4f trans{1, 0, 0, 1,
                0, 1, 0, 1,
                0, 0, 1, 1,
                0, 0, 0, 1};

    Vec4f res{v1.transformed(trans)};

    EXPECT_FLOAT_EQ(res.x, 5.0f);
    EXPECT_FLOAT_EQ(res.y, 6.0f);
    EXPECT_FLOAT_EQ(res.z, 7.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vector4Fixture, test_implicit_conversion_to_pointer)
{
    float *vec = v1;

    const float *vec2 = v2;

    EXPECT_FLOAT_EQ(*(++vec), 2.0f);
    EXPECT_FLOAT_EQ(*(vec2 + 3), 1.0f);
}

TEST_F(Vector4Fixture, test_vector_plus_vector)
{
    Vec4f res{v1 + v2};

    EXPECT_FLOAT_EQ(res.x, 5.0f);
    EXPECT_FLOAT_EQ(res.y, 5.0f);
    EXPECT_FLOAT_EQ(res.z, 5.0f);
    EXPECT_FLOAT_EQ(res.w, 5.0f);
}

TEST_F(Vector4Fixture, test_operator_vector_minus_vector)
{
    Vec4f res{v2 - v1};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, -1.0f);
    EXPECT_FLOAT_EQ(res.w, -3.0f);
}

TEST_F(Vector4Fixture, test_operator_vector_mult_vector)
{
    Vec4f res{v1 * v2};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 6.0f);
    EXPECT_FLOAT_EQ(res.z, 6.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vector4Fixture, test_operator_vector_div_vector)
{
    Vec4f res{v1 / v2};

    EXPECT_FLOAT_EQ(res.x, 0.25);
    EXPECT_FLOAT_EQ(res.y, 0.66666669f);
    EXPECT_FLOAT_EQ(res.z, 1.5f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vector4Fixture, test_operator_vector_plus_scalar)
{
    Vec4f res{v1 + 2.0f};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 5.0f);
    EXPECT_FLOAT_EQ(res.w, 6.0f);
}

TEST_F(Vector4Fixture, test_operator_vector_minus_scalar)
{
    Vec4f res{v1 - 2.0f};

    EXPECT_FLOAT_EQ(res.x, -1.0f);
    EXPECT_FLOAT_EQ(res.y, 0.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vector4Fixture, test_operator_vector_mult_scalar)
{
    Vec4f res{v1 * 2.0f};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 6.0f);
    EXPECT_FLOAT_EQ(res.w, 8.0f);
}

TEST_F(Vector4Fixture, test_operator_vector_div_scalar)
{
    Vec4f res{v1 / 2.0f};

    EXPECT_FLOAT_EQ(res.x, 0.5f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 1.5f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vector4Fixture, test_operator_vector_plus_equals_vector)
{
    v1 += v2;

    EXPECT_FLOAT_EQ(v1.x, 5.0f);
    EXPECT_FLOAT_EQ(v1.y, 5.0f);
    EXPECT_FLOAT_EQ(v1.z, 5.0f);
    EXPECT_FLOAT_EQ(v1.w, 5.0f);
}

TEST_F(Vector4Fixture, test_operator_vector_minus_equals_vector)
{
    v1 -= v2;

    EXPECT_FLOAT_EQ(v1.x, -3.0f);
    EXPECT_FLOAT_EQ(v1.y, -1.0f);
    EXPECT_FLOAT_EQ(v1.z, 1.0f);
    EXPECT_FLOAT_EQ(v1.w, 3.0f);
}

TEST_F(Vector4Fixture, test_operator_vector_mult_equals_vector)
{
    v1 *= v2;

    EXPECT_FLOAT_EQ(v1.x, 4.0f);
    EXPECT_FLOAT_EQ(v1.y, 6.0f);
    EXPECT_FLOAT_EQ(v1.z, 6.0f);
    EXPECT_FLOAT_EQ(v1.w, 4.0f);
}

TEST_F(Vector4Fixture, test_operator_vector_div_equals_vector)
{
    v1 /= v2;

    EXPECT_FLOAT_EQ(v1.x, 0.25f);
    EXPECT_FLOAT_EQ(v1.y, 0.66666669f);
    EXPECT_FLOAT_EQ(v1.z, 1.5f);
    EXPECT_FLOAT_EQ(v1.w, 4.0f);
}

TEST_F(Vector4Fixture, test_operator_vector_plus_equals_scalar)
{
    v1 += 2.0f;

    EXPECT_FLOAT_EQ(v1.x, 3.0f);
    EXPECT_FLOAT_EQ(v1.y, 4.0f);
    EXPECT_FLOAT_EQ(v1.z, 5.0f);
    EXPECT_FLOAT_EQ(v1.w, 6.0f);
}

TEST_F(Vector4Fixture, test_operator_vector_minus_equals_scalar)
{
    v1 -= 2.0f;

    EXPECT_FLOAT_EQ(v1.x, -1.0f);
    EXPECT_FLOAT_EQ(v1.y, 0.0f);
    EXPECT_FLOAT_EQ(v1.z, 1.0f);
    EXPECT_FLOAT_EQ(v1.w, 2.0f);
}

TEST_F(Vector4Fixture, test_operator_vector_mult_equals_scalar)
{
    v1 *= 2.0f;

    EXPECT_FLOAT_EQ(v1.x, 2.0f);
    EXPECT_FLOAT_EQ(v1.y, 4.0f);
    EXPECT_FLOAT_EQ(v1.z, 6.0f);
    EXPECT_FLOAT_EQ(v1.w, 8.0f);
}

TEST_F(Vector4Fixture, test_operator_vector_div_equals_scalar)
{
    v1 /= 2.0f;

    EXPECT_FLOAT_EQ(v1.x, 0.5f);
    EXPECT_FLOAT_EQ(v1.y, 1.0f);
    EXPECT_FLOAT_EQ(v1.z, 1.5f);
    EXPECT_FLOAT_EQ(v1.w, 2.0f);
}

TEST_F(Vector4Fixture, test_non_member_funciton_length)
{
    double len{length(v1)};

    EXPECT_DOUBLE_EQ(len, 5.4772255750516612);
}

TEST_F(Vector4Fixture, test_non_member_function_lengthf)
{
    float len{lengthf(v1)};

    EXPECT_FLOAT_EQ(len, 5.4772258f);
}

TEST_F(Vector4Fixture, test_non_member_function_length_sqrd)
{
    double len{length_sqrd(v1)};

    EXPECT_DOUBLE_EQ(len, 30.0);
}

TEST_F(Vector4Fixture, test_non_member_function_length_sqrdf)
{
    float len{length_sqrdf(v1)};

    EXPECT_FLOAT_EQ(len, 30.0f);
}

TEST_F(Vector4Fixture, test_non_member_function_dot)
{
    double d{dot(v1, v2)};

    EXPECT_DOUBLE_EQ(d, 20.0);
}

TEST_F(Vector4Fixture, test_non_member_function_dotf)
{
    float d{dotf(v1, v2)};

    EXPECT_FLOAT_EQ(d, 20.0f);
}

TEST_F(Vector4Fixture, test_non_member_function_reflect)
{
    Vec4f res{reflect(v1, Vec4f{1.0f, 0.0f, 0.0f, 0.0f})};

    EXPECT_FLOAT_EQ(res.x, -1.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
}

TEST_F(Vector4Fixture, test_non_member_function_transform)
{
    Mat4f trans{1, 0, 0, 1,
                0, 1, 0, 1,
                0, 0, 1, 1,
                0, 0, 0, 1};

    Vec4f res{transform(v1, trans)};

    EXPECT_FLOAT_EQ(res.x, 5.0f);
    EXPECT_FLOAT_EQ(res.y, 6.0f);
    EXPECT_FLOAT_EQ(res.z, 7.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}
