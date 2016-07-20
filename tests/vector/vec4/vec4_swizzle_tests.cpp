#include "gtest/gtest.h"
#include "helmath.h"

using namespace hm;

class Vec4SwizzleFixture : public ::testing::Test {
public:
    Vec4f rhs;
    Vec4f lhs;

    void SetUp()
    {
        rhs = Vec4f{1.0f, 2.0f, 3.0f, 4.0f};
        lhs = Vec4f{4.0f, 3.0f, 2.0f, 1.0f};
    }
};

// ----------------------------------
// Vector creation from swizzle tests
// ----------------------------------
TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxxx)
{
    Vec4f res{lhs.xxxx};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxxy) {
    Vec4f res{lhs.xxxy};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}
