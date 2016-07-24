#include "gtest/gtest.h"
#include "helmath.h"

using namespace hm;

class Vec3Fixture : public ::testing::Test {
protected:
    Vec3f v1;
    Vec3f v2;

    void SetUp() override
    {
        v1 = Vec3f{1.0f, 2.0f, 3.0f};
        v2 = Vec3f{3.0f, 2.0f, 1.0f};
    }
};

TEST_F(Vec3Fixture, test_member_function_length)
{
    double len{v1.length()};

    ASSERT_DOUBLE_EQ(len, 3.7416574954986572);
}

TEST_F(Vec3Fixture, test_member_function_lengthf)
{
    float len{v1.lengthf()};

    ASSERT_FLOAT_EQ(len, 3.7416575f);
}

TEST_F(Vec3Fixture, test_member_function_normalize)
{
    v1.normalize();

    ASSERT_FLOAT_EQ(v1.x, 0.2672612f);
    ASSERT_FLOAT_EQ(v1.y, 0.5345224f);
    ASSERT_FLOAT_EQ(v1.z, 0.8017837f);

    float len{v1.lengthf()};

    ASSERT_FLOAT_EQ(len, 1.0f);
}

TEST_F(Vec3Fixture, test_member_function_normalized)
{
    Vec3f res{v1.normalized()};

    ASSERT_FLOAT_EQ(res.x, 0.2672612f);
    ASSERT_FLOAT_EQ(res.y, 0.5345224f);
    ASSERT_FLOAT_EQ(res.z, 0.8017837f);

    float len = res.lengthf();

    ASSERT_FLOAT_EQ(len, 1.0f);
}

TEST_F(Vec3Fixture, test_member_function_dot)
{
    double d{v1.dot(v2)};

    ASSERT_DOUBLE_EQ(d, 10.0);
}

TEST_F(Vec3Fixture, test_member_function_dotf)
{
    float d{v1.dotf(v2)};

    ASSERT_FLOAT_EQ(d, 10.0f);
}

TEST_F(Vec3Fixture, test_member_function_reflect)
{
    v1.reflect(Vec3f{1.0f, 0.0f, 0.0f});

    ASSERT_FLOAT_EQ(v1.x, -1.0f);
    ASSERT_FLOAT_EQ(v1.y, 2.0f);
    ASSERT_FLOAT_EQ(v1.z, 3.0f);
}

TEST_F(Vec3Fixture, test_member_function_reflected)
{
    Vec3f res{v1.reflected(Vec3f{1.0f, 0.0f, 0.0f})};

    ASSERT_FLOAT_EQ(res.x, -1.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
}

TEST_F(Vec3Fixture, test_non_member_function_dot)
{
    double d{dot(v1, v2)};

    ASSERT_DOUBLE_EQ(d, 10.0);
}

TEST_F(Vec3Fixture, test_non_member_function_dotf)
{
    float d{dotf(v1, v2)};

    ASSERT_FLOAT_EQ(d, 10.0f);
}

TEST_F(Vec3Fixture, test_non_member_function_reflect)
{
    Vec3f res{reflect(v1, Vec3f{1.0f, 0.0f, 0.0f})};

    ASSERT_FLOAT_EQ(res.x, -1.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
}
