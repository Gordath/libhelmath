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

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxxy)
{
    Vec4f res{lhs.xxxy};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxxz)
{
    Vec4f res{lhs.xxxz};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxxw)
{
    Vec4f res{lhs.xxxw};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxyx)
{
    Vec4f res{lhs.xxyx};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxyy)
{
    Vec4f res{lhs.xxyy};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxyz)
{
    Vec4f res{lhs.xxyz};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxyw)
{
    Vec4f res{lhs.xxyw};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxzx)
{
    Vec4f res{lhs.xxzx};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxzy)
{
    Vec4f res{lhs.xxzy};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxzz)
{
    Vec4f res{lhs.xxzz};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxzw)
{
    Vec4f res{lhs.xxzw};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxwx)
{
    Vec4f res{lhs.xxwx};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxwy)
{
    Vec4f res{lhs.xxwy};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxwz)
{
    Vec4f res{lhs.xxwz};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxww)
{
    Vec4f res{lhs.xxww};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xyxx)
{
    Vec4f res{lhs.xyxx};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xyxy)
{
    Vec4f res{lhs.xyxy};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xyxz)
{
    Vec4f res{lhs.xyxz};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xyxw)
{
    Vec4f res{lhs.xyxw};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xyyx)
{
    Vec4f res{lhs.xyyx};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xyyy)
{
    Vec4f res{lhs.xyyy};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xyyz)
{
    Vec4f res{lhs.xyyz};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xyyw)
{
    Vec4f res{lhs.xyyw};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xyzx)
{
    Vec4f res{lhs.xyzx};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xyzy)
{
    Vec4f res{lhs.xyzy};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xyzz)
{
    Vec4f res{lhs.xyzz};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xyzw)
{
    Vec4f res{lhs.xyzw};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xywx)
{
    Vec4f res{lhs.xywx};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xywy)
{
    Vec4f res{lhs.xywy};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xywz)
{
    Vec4f res{lhs.xywz};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xyww)
{
    Vec4f res{lhs.xyww};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzxx)
{
    Vec4f res{lhs.xzxx};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzxy)
{
    Vec4f res{lhs.xzxy};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzxz)
{
    Vec4f res{lhs.xzxz};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzxw)
{
    Vec4f res{lhs.xzxw};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzyx)
{
    Vec4f res{lhs.xzyx};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzyy)
{
    Vec4f res{lhs.xzyy};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzyz)
{
    Vec4f res{lhs.xzyz};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzyw)
{
    Vec4f res{lhs.xzyw};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzzx)
{
    Vec4f res{lhs.xzzx};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzzy)
{
    Vec4f res{lhs.xzzy};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzzz)
{
    Vec4f res{lhs.xzzz};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzzw)
{
    Vec4f res{lhs.xzzw};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzwx)
{
    Vec4f res{lhs.xzwx};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzwy)
{
    Vec4f res{lhs.xzwy};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzwz)
{
    Vec4f res{lhs.xzwz};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzww)
{
    Vec4f res{lhs.xzww};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwxx)
{
    Vec4f res{lhs.xwxx};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwxy)
{
    Vec4f res{lhs.xwxy};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwxz)
{
    Vec4f res{lhs.xwxz};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwxw)
{
    Vec4f res{lhs.xwxw};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwyx)
{
    Vec4f res{lhs.xwyx};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwyy)
{
    Vec4f res{lhs.xwyy};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwyz)
{
    Vec4f res{lhs.xwyz};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwyw)
{
    Vec4f res{lhs.xwyw};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwzx)
{
    Vec4f res{lhs.xwzx};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwzy)
{
    Vec4f res{lhs.xwzy};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwzz)
{
    Vec4f res{lhs.xwzz};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwzw)
{
    Vec4f res{lhs.xwzw};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwwx)
{
    Vec4f res{lhs.xwwx};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwwy)
{
    Vec4f res{lhs.xwwy};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwwz)
{
    Vec4f res{lhs.xwwz};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwww)
{
    Vec4f res{lhs.xwww};

    EXPECT_FLOAT_EQ(res.x, 4.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxxx)
{
    Vec4f res{lhs.yxxx};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxxy)
{
    Vec4f res{lhs.yxxy};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxxz)
{
    Vec4f res{lhs.yxxz};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxxw)
{
    Vec4f res{lhs.yxxw};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxyx)
{
    Vec4f res{lhs.yxyx};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxyy)
{
    Vec4f res{lhs.yxyy};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxyz)
{
    Vec4f res{lhs.yxyz};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxyw)
{
    Vec4f res{lhs.yxyw};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxzx)
{
    Vec4f res{lhs.yxzx};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxzy)
{
    Vec4f res{lhs.yxzy};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxzz)
{
    Vec4f res{lhs.yxzz};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxzw)
{
    Vec4f res{lhs.yxzw};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxwx)
{
    Vec4f res{lhs.yxwx};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxwy)
{
    Vec4f res{lhs.yxwy};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxwz)
{
    Vec4f res{lhs.yxwz};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxww)
{
    Vec4f res{lhs.yxww};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yyxx)
{
    Vec4f res{lhs.yyxx};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yyxy)
{
    Vec4f res{lhs.yyxy};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yyxz)
{
    Vec4f res{lhs.yyxz};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yyxw)
{
    Vec4f res{lhs.yyxw};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yyyx)
{
    Vec4f res{lhs.yyyx};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yyyy)
{
    Vec4f res{lhs.yyyy};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yyyz)
{
    Vec4f res{lhs.yyyz};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yyyw)
{
    Vec4f res{lhs.yyyw};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yyzx)
{
    Vec4f res{lhs.yyzx};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yyzy)
{
    Vec4f res{lhs.yyzy};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yyzz)
{
    Vec4f res{lhs.yyzz};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yyzw)
{
    Vec4f res{lhs.yyzw};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yywx)
{
    Vec4f res{lhs.yywx};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yywy)
{
    Vec4f res{lhs.yywy};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yywz)
{
    Vec4f res{lhs.yywz};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yyww)
{
    Vec4f res{lhs.yyww};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzxx)
{
    Vec4f res{lhs.yzxx};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzxy)
{
    Vec4f res{lhs.yzxy};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzxz)
{
    Vec4f res{lhs.yzxz};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzxw)
{
    Vec4f res{lhs.yzxw};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzyx)
{
    Vec4f res{lhs.yzyx};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzyy)
{
    Vec4f res{lhs.yzyy};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzyz)
{
    Vec4f res{lhs.yzyz};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzyw)
{
    Vec4f res{lhs.yzyw};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzzx)
{
    Vec4f res{lhs.yzzx};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzzy)
{
    Vec4f res{lhs.yzzy};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzzz)
{
    Vec4f res{lhs.yzzz};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzzw)
{
    Vec4f res{lhs.yzzw};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzwx)
{
    Vec4f res{lhs.yzwx};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzwy)
{
    Vec4f res{lhs.yzwy};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzwz)
{
    Vec4f res{lhs.yzwz};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzww)
{
    Vec4f res{lhs.yzww};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywxx)
{
    Vec4f res{lhs.ywxx};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywxy)
{
    Vec4f res{lhs.ywxy};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywxz)
{
    Vec4f res{lhs.ywxz};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywxw)
{
    Vec4f res{lhs.ywxw};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywyx)
{
    Vec4f res{lhs.ywyx};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywyy)
{
    Vec4f res{lhs.ywyy};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywyz)
{
    Vec4f res{lhs.ywyz};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywyw)
{
    Vec4f res{lhs.ywyw};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywzx)
{
    Vec4f res{lhs.ywzx};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywzy)
{
    Vec4f res{lhs.ywzy};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywzz)
{
    Vec4f res{lhs.ywzz};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywzw)
{
    Vec4f res{lhs.ywzw};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywwx)
{
    Vec4f res{lhs.ywwx};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywwy)
{
    Vec4f res{lhs.ywwy};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywwz)
{
    Vec4f res{lhs.ywwz};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywww)
{
    Vec4f res{lhs.ywww};

    EXPECT_FLOAT_EQ(res.x, 3.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxxx)
{
    Vec4f res{lhs.zxxx};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxxy)
{
    Vec4f res{lhs.zxxy};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxxz)
{
    Vec4f res{lhs.zxxz};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxxw)
{
    Vec4f res{lhs.zxxw};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxyx)
{
    Vec4f res{lhs.zxyx};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxyy)
{
    Vec4f res{lhs.zxyy};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxyz)
{
    Vec4f res{lhs.zxyz};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxyw)
{
    Vec4f res{lhs.zxyw};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxzx)
{
    Vec4f res{lhs.zxzx};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxzy)
{
    Vec4f res{lhs.zxzy};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxzz)
{
    Vec4f res{lhs.zxzz};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxzw)
{
    Vec4f res{lhs.zxzw};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxwx)
{
    Vec4f res{lhs.zxwx};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxwy)
{
    Vec4f res{lhs.zxwy};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxwz)
{
    Vec4f res{lhs.zxwz};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxww)
{
    Vec4f res{lhs.zxww};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zyxx)
{
    Vec4f res{lhs.zyxx};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zyxy)
{
    Vec4f res{lhs.zyxy};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zyxz)
{
    Vec4f res{lhs.zyxz};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zyxw)
{
    Vec4f res{lhs.zyxw};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zyyx)
{
    Vec4f res{lhs.zyyx};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zyyy)
{
    Vec4f res{lhs.zyyy};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zyyz)
{
    Vec4f res{lhs.zyyz};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zyyw)
{
    Vec4f res{lhs.zyyw};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zyzx)
{
    Vec4f res{lhs.zyzx};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zyzy)
{
    Vec4f res{lhs.zyzy};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zyzz)
{
    Vec4f res{lhs.zyzz};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zyzw)
{
    Vec4f res{lhs.zyzw};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zywx)
{
    Vec4f res{lhs.zywx};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zywy)
{
    Vec4f res{lhs.zywy};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zywz)
{
    Vec4f res{lhs.zywz};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zyww)
{
    Vec4f res{lhs.zyww};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzxx)
{
    Vec4f res{lhs.zzxx};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzxy)
{
    Vec4f res{lhs.zzxy};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzxz)
{
    Vec4f res{lhs.zzxz};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzxw)
{
    Vec4f res{lhs.zzxw};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzyx)
{
    Vec4f res{lhs.zzyx};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzyy)
{
    Vec4f res{lhs.zzyy};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzyz)
{
    Vec4f res{lhs.zzyz};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzyw)
{
    Vec4f res{lhs.zzyw};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzzx)
{
    Vec4f res{lhs.zzzx};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzzy)
{
    Vec4f res{lhs.zzzy};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzzz)
{
    Vec4f res{lhs.zzzz};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzzw)
{
    Vec4f res{lhs.zzzw};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzwx)
{
    Vec4f res{lhs.zzwx};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzwy)
{
    Vec4f res{lhs.zzwy};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzwz)
{
    Vec4f res{lhs.zzwz};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzww)
{
    Vec4f res{lhs.zzww};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwxx)
{
    Vec4f res{lhs.zwxx};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwxy)
{
    Vec4f res{lhs.zwxy};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwxz)
{
    Vec4f res{lhs.zwxz};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwxw)
{
    Vec4f res{lhs.zwxw};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwyx)
{
    Vec4f res{lhs.zwyx};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwyy)
{
    Vec4f res{lhs.zwyy};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwyz)
{
    Vec4f res{lhs.zwyz};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwyw)
{
    Vec4f res{lhs.zwyw};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwzx)
{
    Vec4f res{lhs.zwzx};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwzy)
{
    Vec4f res{lhs.zwzy};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwzz)
{
    Vec4f res{lhs.zwzz};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwzw)
{
    Vec4f res{lhs.zwzw};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwwx)
{
    Vec4f res{lhs.zwwx};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwwy)
{
    Vec4f res{lhs.zwwy};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwwz)
{
    Vec4f res{lhs.zwwz};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwww)
{
    Vec4f res{lhs.zwww};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxxx)
{
    Vec4f res{lhs.wxxx};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxxy)
{
    Vec4f res{lhs.wxxy};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxxz)
{
    Vec4f res{lhs.wxxz};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxxw)
{
    Vec4f res{lhs.wxxw};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxyx)
{
    Vec4f res{lhs.wxyx};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxyy)
{
    Vec4f res{lhs.wxyy};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxyz)
{
    Vec4f res{lhs.wxyz};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxyw)
{
    Vec4f res{lhs.wxyw};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxzx)
{
    Vec4f res{lhs.wxzx};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxzy)
{
    Vec4f res{lhs.wxzy};
    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxzz)
{
    Vec4f res{lhs.wxzz};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxzw)
{
    Vec4f res{lhs.wxzw};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxwx)
{
    Vec4f res{lhs.wxwx};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxwy)
{
    Vec4f res{lhs.wxwy};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxwz)
{
    Vec4f res{lhs.wxwz};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxww)
{
    Vec4f res{lhs.wxww};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 4.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wyxx)
{
    Vec4f res{lhs.wyxx};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wyxy)
{
    Vec4f res{lhs.wyxy};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wyxz)
{
    Vec4f res{lhs.wyxz};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wyxw)
{
    Vec4f res{lhs.wyxw};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wyyx)
{
    Vec4f res{lhs.wyyx};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wyyy)
{
    Vec4f res{lhs.wyyy};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wyyz)
{
    Vec4f res{lhs.wyyz};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wyyw)
{
    Vec4f res{lhs.wyyw};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wyzx)
{
    Vec4f res{lhs.wyzx};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wyzy)
{
    Vec4f res{lhs.wyzy};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wyzz)
{
    Vec4f res{lhs.wyzz};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wyzw)
{
    Vec4f res{lhs.wyzw};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wywx)
{
    Vec4f res{lhs.wywx};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wywy)
{
    Vec4f res{lhs.wywy};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wywz)
{
    Vec4f res{lhs.wywz};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wyww)
{
    Vec4f res{lhs.wyww};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 3.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzxx)
{
    Vec4f res{lhs.wzxx};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzxy)
{
    Vec4f res{lhs.wzxy};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzxz)
{
    Vec4f res{lhs.wzxz};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzxw)
{
    Vec4f res{lhs.wzxw};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzyx)
{
    Vec4f res{lhs.wzyx};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzyy)
{
    Vec4f res{lhs.wzyy};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzyz)
{
    Vec4f res{lhs.wzyz};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzyw)
{
    Vec4f res{lhs.wzyw};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzzx)
{
    Vec4f res{lhs.wzzx};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzzy)
{
    Vec4f res{lhs.wzzy};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzzz)
{
    Vec4f res{lhs.wzzz};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzzw)
{
    Vec4f res{lhs.wzzw};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzwx)
{
    Vec4f res{lhs.wzwx};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzwy)
{
    Vec4f res{lhs.wzwy};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzwz)
{
    Vec4f res{lhs.wzwz};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzww)
{
    Vec4f res{lhs.wzww};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwxx)
{
    Vec4f res{lhs.wwxx};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwxy)
{
    Vec4f res{lhs.wwxy};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwxz)
{
    Vec4f res{lhs.wwxz};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwxw)
{
    Vec4f res{lhs.wwxw};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 4.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwyx)
{
    Vec4f res{lhs.wwyx};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwyy)
{
    Vec4f res{lhs.wwyy};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwyz)
{
    Vec4f res{lhs.wwyz};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwyw)
{
    Vec4f res{lhs.wwyw};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 3.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwzx)
{
    Vec4f res{lhs.wwzx};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwzy)
{
    Vec4f res{lhs.wwzy};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwzz)
{
    Vec4f res{lhs.wwzz};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwzw)
{
    Vec4f res{lhs.wwzw};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwwx)
{
    Vec4f res{lhs.wwwx};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwwy)
{
    Vec4f res{lhs.wwwy};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwwz)
{
    Vec4f res{lhs.wwwz};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwww)
{
    Vec4f res{lhs.wwww};

    EXPECT_FLOAT_EQ(res.x, 1.0f);
    EXPECT_FLOAT_EQ(res.y, 1.0f);
    EXPECT_FLOAT_EQ(res.z, 1.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}


TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrrr)
{
    Vec4f res{lhs.rrrr};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrrg)
{
    Vec4f res{lhs.rrrg};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrrb)
{
    Vec4f res{lhs.rrrb};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrra)
{
    Vec4f res{lhs.rrra};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrgr)
{
    Vec4f res{lhs.rrgr};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrgg)
{
    Vec4f res{lhs.rrgg};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrgb)
{
    Vec4f res{lhs.rrgb};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrga)
{
    Vec4f res{lhs.rrga};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrbr)
{
    Vec4f res{lhs.rrbr};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrbg)
{
    Vec4f res{lhs.rrbg};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrbb)
{
    Vec4f res{lhs.rrbb};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrba)
{
    Vec4f res{lhs.rrba};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrar)
{
    Vec4f res{lhs.rrar};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrag)
{
    Vec4f res{lhs.rrag};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrab)
{
    Vec4f res{lhs.rrab};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rraa)
{
    Vec4f res{lhs.rraa};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rgrr)
{
    Vec4f res{lhs.rgrr};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rgrg)
{
    Vec4f res{lhs.rgrg};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rgrb)
{
    Vec4f res{lhs.rgrb};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rgra)
{
    Vec4f res{lhs.rgra};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rggr)
{
    Vec4f res{lhs.rggr};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rggg)
{
    Vec4f res{lhs.rggg};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rggb)
{
    Vec4f res{lhs.rggb};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rgga)
{
    Vec4f res{lhs.rgga};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rgbr)
{
    Vec4f res{lhs.rgbr};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rgbg)
{
    Vec4f res{lhs.rgbg};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rgbb)
{
    Vec4f res{lhs.rgbb};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rgba)
{
    Vec4f res{lhs.rgba};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rgar)
{
    Vec4f res{lhs.rgar};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rgag)
{
    Vec4f res{lhs.rgag};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rgab)
{
    Vec4f res{lhs.rgab};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rgaa)
{
    Vec4f res{lhs.rgaa};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbrr)
{
    Vec4f res{lhs.rbrr};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbrg)
{
    Vec4f res{lhs.rbrg};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbrb)
{
    Vec4f res{lhs.rbrb};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbra)
{
    Vec4f res{lhs.rbra};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbgr)
{
    Vec4f res{lhs.rbgr};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbgg)
{
    Vec4f res{lhs.rbgg};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbgb)
{
    Vec4f res{lhs.rbgb};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbga)
{
    Vec4f res{lhs.rbga};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbbr)
{
    Vec4f res{lhs.rbbr};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbbg)
{
    Vec4f res{lhs.rbbg};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbbb)
{
    Vec4f res{lhs.rbbb};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbba)
{
    Vec4f res{lhs.rbba};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbar)
{
    Vec4f res{lhs.rbar};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbag)
{
    Vec4f res{lhs.rbag};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbab)
{
    Vec4f res{lhs.rbab};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbaa)
{
    Vec4f res{lhs.rbaa};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rarr)
{
    Vec4f res{lhs.rarr};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rarg)
{
    Vec4f res{lhs.rarg};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rarb)
{
    Vec4f res{lhs.rarb};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rara)
{
    Vec4f res{lhs.rara};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ragr)
{
    Vec4f res{lhs.ragr};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ragg)
{
    Vec4f res{lhs.ragg};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ragb)
{
    Vec4f res{lhs.ragb};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_raga)
{
    Vec4f res{lhs.raga};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rabr)
{
    Vec4f res{lhs.rabr};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rabg)
{
    Vec4f res{lhs.rabg};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rabb)
{
    Vec4f res{lhs.rabb};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_raba)
{
    Vec4f res{lhs.raba};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_raar)
{
    Vec4f res{lhs.raar};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_raag)
{
    Vec4f res{lhs.raag};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_raab)
{
    Vec4f res{lhs.raab};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_raaa)
{
    Vec4f res{lhs.raaa};

    EXPECT_FLOAT_EQ(res.r, 4.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grrr)
{
    Vec4f res{lhs.grrr};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grrg)
{
    Vec4f res{lhs.grrg};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grrb)
{
    Vec4f res{lhs.grrb};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grra)
{
    Vec4f res{lhs.grra};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grgr)
{
    Vec4f res{lhs.grgr};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grgg)
{
    Vec4f res{lhs.grgg};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grgb)
{
    Vec4f res{lhs.grgb};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grga)
{
    Vec4f res{lhs.grga};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grbr)
{
    Vec4f res{lhs.grbr};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grbg)
{
    Vec4f res{lhs.grbg};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grbb)
{
    Vec4f res{lhs.grbb};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grba)
{
    Vec4f res{lhs.grba};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grar)
{
    Vec4f res{lhs.grar};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grag)
{
    Vec4f res{lhs.grag};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grab)
{
    Vec4f res{lhs.grab};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_graa)
{
    Vec4f res{lhs.graa};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ggrr)
{
    Vec4f res{lhs.ggrr};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ggrg)
{
    Vec4f res{lhs.ggrg};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ggrb)
{
    Vec4f res{lhs.ggrb};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ggra)
{
    Vec4f res{lhs.ggra};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gggr)
{
    Vec4f res{lhs.gggr};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gggg)
{
    Vec4f res{lhs.gggg};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gggb)
{
    Vec4f res{lhs.gggb};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ggga)
{
    Vec4f res{lhs.ggga};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ggbr)
{
    Vec4f res{lhs.ggbr};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ggbg)
{
    Vec4f res{lhs.ggbg};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ggbb)
{
    Vec4f res{lhs.ggbb};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ggba)
{
    Vec4f res{lhs.ggba};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ggar)
{
    Vec4f res{lhs.ggar};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ggag)
{
    Vec4f res{lhs.ggag};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ggab)
{
    Vec4f res{lhs.ggab};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ggaa)
{
    Vec4f res{lhs.ggaa};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbrr)
{
    Vec4f res{lhs.gbrr};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbrg)
{
    Vec4f res{lhs.gbrg};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbrb)
{
    Vec4f res{lhs.gbrb};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbra)
{
    Vec4f res{lhs.gbra};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbgr)
{
    Vec4f res{lhs.gbgr};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbgg)
{
    Vec4f res{lhs.gbgg};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbgb)
{
    Vec4f res{lhs.gbgb};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbga)
{
    Vec4f res{lhs.gbga};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbbr)
{
    Vec4f res{lhs.gbbr};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbbg)
{
    Vec4f res{lhs.gbbg};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbbb)
{
    Vec4f res{lhs.gbbb};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbba)
{
    Vec4f res{lhs.gbba};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbar)
{
    Vec4f res{lhs.gbar};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbag)
{
    Vec4f res{lhs.gbag};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbab)
{
    Vec4f res{lhs.gbab};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbaa)
{
    Vec4f res{lhs.gbaa};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_garr)
{
    Vec4f res{lhs.garr};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_garg)
{
    Vec4f res{lhs.garg};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_garb)
{
    Vec4f res{lhs.garb};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gara)
{
    Vec4f res{lhs.gara};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gagr)
{
    Vec4f res{lhs.gagr};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gagg)
{
    Vec4f res{lhs.gagg};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gagb)
{
    Vec4f res{lhs.gagb};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gaga)
{
    Vec4f res{lhs.gaga};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gabr)
{
    Vec4f res{lhs.gabr};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gabg)
{
    Vec4f res{lhs.gabg};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gabb)
{
    Vec4f res{lhs.gabb};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gaba)
{
    Vec4f res{lhs.gaba};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gaar)
{
    Vec4f res{lhs.gaar};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gaag)
{
    Vec4f res{lhs.gaag};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gaab)
{
    Vec4f res{lhs.gaab};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gaaa)
{
    Vec4f res{lhs.gaaa};

    EXPECT_FLOAT_EQ(res.r, 3.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brrr)
{
    Vec4f res{lhs.brrr};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brrg)
{
    Vec4f res{lhs.brrg};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brrb)
{
    Vec4f res{lhs.brrb};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brra)
{
    Vec4f res{lhs.brra};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brgr)
{
    Vec4f res{lhs.brgr};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brgg)
{
    Vec4f res{lhs.brgg};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brgb)
{
    Vec4f res{lhs.brgb};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brga)
{
    Vec4f res{lhs.brga};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brbr)
{
    Vec4f res{lhs.brbr};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brbg)
{
    Vec4f res{lhs.brbg};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brbb)
{
    Vec4f res{lhs.brbb};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brba)
{
    Vec4f res{lhs.brba};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brar)
{
    Vec4f res{lhs.brar};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brag)
{
    Vec4f res{lhs.brag};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brab)
{
    Vec4f res{lhs.brab};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_braa)
{
    Vec4f res{lhs.braa};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bgrr)
{
    Vec4f res{lhs.bgrr};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bgrg)
{
    Vec4f res{lhs.bgrg};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bgrb)
{
    Vec4f res{lhs.bgrb};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bgra)
{
    Vec4f res{lhs.bgra};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bggr)
{
    Vec4f res{lhs.bggr};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bggg)
{
    Vec4f res{lhs.bggg};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bggb)
{
    Vec4f res{lhs.bggb};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bgga)
{
    Vec4f res{lhs.bgga};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bgbr)
{
    Vec4f res{lhs.bgbr};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bgbg)
{
    Vec4f res{lhs.bgbg};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bgbb)
{
    Vec4f res{lhs.bgbb};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bgba)
{
    Vec4f res{lhs.bgba};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bgar)
{
    Vec4f res{lhs.bgar};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bgag)
{
    Vec4f res{lhs.bgag};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bgab)
{
    Vec4f res{lhs.bgab};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bgaa)
{
    Vec4f res{lhs.bgaa};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbrr)
{
    Vec4f res{lhs.bbrr};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbrg)
{
    Vec4f res{lhs.bbrg};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbrb)
{
    Vec4f res{lhs.bbrb};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbra)
{
    Vec4f res{lhs.bbra};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbgr)
{
    Vec4f res{lhs.bbgr};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbgg)
{
    Vec4f res{lhs.bbgg};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbgb)
{
    Vec4f res{lhs.bbgb};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbga)
{
    Vec4f res{lhs.bbga};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbbr)
{
    Vec4f res{lhs.bbbr};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbbg)
{
    Vec4f res{lhs.bbbg};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbbb)
{
    Vec4f res{lhs.bbbb};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbba)
{
    Vec4f res{lhs.bbba};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbar)
{
    Vec4f res{lhs.bbar};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbag)
{
    Vec4f res{lhs.bbag};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbab)
{
    Vec4f res{lhs.bbab};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbaa)
{
    Vec4f res{lhs.bbaa};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_barr)
{
    Vec4f res{lhs.barr};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_barg)
{
    Vec4f res{lhs.barg};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_barb)
{
    Vec4f res{lhs.barb};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bara)
{
    Vec4f res{lhs.bara};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bagr)
{
    Vec4f res{lhs.bagr};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bagg)
{
    Vec4f res{lhs.bagg};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bagb)
{
    Vec4f res{lhs.bagb};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_baga)
{
    Vec4f res{lhs.baga};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_babr)
{
    Vec4f res{lhs.babr};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_babg)
{
    Vec4f res{lhs.babg};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_babb)
{
    Vec4f res{lhs.babb};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_baba)
{
    Vec4f res{lhs.baba};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_baar)
{
    Vec4f res{lhs.baar};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_baag)
{
    Vec4f res{lhs.baag};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_baab)
{
    Vec4f res{lhs.baab};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_baaa)
{
    Vec4f res{lhs.baaa};

    EXPECT_FLOAT_EQ(res.r, 2.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_arrr)
{
    Vec4f res{lhs.arrr};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_arrg)
{
    Vec4f res{lhs.arrg};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_arrb)
{
    Vec4f res{lhs.arrb};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_arra)
{
    Vec4f res{lhs.arra};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_argr)
{
    Vec4f res{lhs.argr};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_argg)
{
    Vec4f res{lhs.argg};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_argb)
{
    Vec4f res{lhs.argb};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_arga)
{
    Vec4f res{lhs.arga};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_arbr)
{
    Vec4f res{lhs.arbr};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_arbg)
{
    Vec4f res{lhs.arbg};
    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_arbb)
{
    Vec4f res{lhs.arbb};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_arba)
{
    Vec4f res{lhs.arba};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_arar)
{
    Vec4f res{lhs.arar};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_arag)
{
    Vec4f res{lhs.arag};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_arab)
{
    Vec4f res{lhs.arab};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_araa)
{
    Vec4f res{lhs.araa};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 4.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_agrr)
{
    Vec4f res{lhs.agrr};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_agrg)
{
    Vec4f res{lhs.agrg};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_agrb)
{
    Vec4f res{lhs.agrb};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_agra)
{
    Vec4f res{lhs.agra};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aggr)
{
    Vec4f res{lhs.aggr};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aggg)
{
    Vec4f res{lhs.aggg};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aggb)
{
    Vec4f res{lhs.aggb};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_agga)
{
    Vec4f res{lhs.agga};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_agbr)
{
    Vec4f res{lhs.agbr};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_agbg)
{
    Vec4f res{lhs.agbg};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_agbb)
{
    Vec4f res{lhs.agbb};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_agba)
{
    Vec4f res{lhs.agba};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_agar)
{
    Vec4f res{lhs.agar};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_agag)
{
    Vec4f res{lhs.agag};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_agab)
{
    Vec4f res{lhs.agab};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_agaa)
{
    Vec4f res{lhs.agaa};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 3.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abrr)
{
    Vec4f res{lhs.abrr};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abrg)
{
    Vec4f res{lhs.abrg};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abrb)
{
    Vec4f res{lhs.abrb};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abra)
{
    Vec4f res{lhs.abra};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abgr)
{
    Vec4f res{lhs.abgr};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abgg)
{
    Vec4f res{lhs.abgg};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abgb)
{
    Vec4f res{lhs.abgb};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abga)
{
    Vec4f res{lhs.abga};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abbr)
{
    Vec4f res{lhs.abbr};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abbg)
{
    Vec4f res{lhs.abbg};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abbb)
{
    Vec4f res{lhs.abbb};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abba)
{
    Vec4f res{lhs.abba};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abar)
{
    Vec4f res{lhs.abar};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abag)
{
    Vec4f res{lhs.abag};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abab)
{
    Vec4f res{lhs.abab};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abaa)
{
    Vec4f res{lhs.abaa};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 2.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aarr)
{
    Vec4f res{lhs.aarr};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aarg)
{
    Vec4f res{lhs.aarg};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aarb)
{
    Vec4f res{lhs.aarb};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aara)
{
    Vec4f res{lhs.aara};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 4.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aagr)
{
    Vec4f res{lhs.aagr};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aagg)
{
    Vec4f res{lhs.aagg};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aagb)
{
    Vec4f res{lhs.aagb};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aaga)
{
    Vec4f res{lhs.aaga};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 3.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aabr)
{
    Vec4f res{lhs.aabr};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aabg)
{
    Vec4f res{lhs.aabg};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aabb)
{
    Vec4f res{lhs.aabb};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aaba)
{
    Vec4f res{lhs.aaba};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 2.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aaar)
{
    Vec4f res{lhs.aaar};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aaag)
{
    Vec4f res{lhs.aaag};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aaab)
{
    Vec4f res{lhs.aaab};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aaaa)
{
    Vec4f res{lhs.aaaa};

    EXPECT_FLOAT_EQ(res.r, 1.0f);
    EXPECT_FLOAT_EQ(res.g, 1.0f);
    EXPECT_FLOAT_EQ(res.b, 1.0f);
    EXPECT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ssss)
{
    Vec4f res{lhs.ssss};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ssst)
{
    Vec4f res{lhs.ssst};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sssp)
{
    Vec4f res{lhs.sssp};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sssq)
{
    Vec4f res{lhs.sssq};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ssts)
{
    Vec4f res{lhs.ssts};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sstt)
{
    Vec4f res{lhs.sstt};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sstp)
{
    Vec4f res{lhs.sstp};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sstq)
{
    Vec4f res{lhs.sstq};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ssps)
{
    Vec4f res{lhs.ssps};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sspt)
{
    Vec4f res{lhs.sspt};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sspp)
{
    Vec4f res{lhs.sspp};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sspq)
{
    Vec4f res{lhs.sspq};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ssqs)
{
    Vec4f res{lhs.ssqs};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ssqt)
{
    Vec4f res{lhs.ssqt};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ssqp)
{
    Vec4f res{lhs.ssqp};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ssqq)
{
    Vec4f res{lhs.ssqq};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_stss)
{
    Vec4f res{lhs.stss};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_stst)
{
    Vec4f res{lhs.stst};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_stsp)
{
    Vec4f res{lhs.stsp};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_stsq)
{
    Vec4f res{lhs.stsq};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_stts)
{
    Vec4f res{lhs.stts};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sttt)
{
    Vec4f res{lhs.sttt};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sttp)
{
    Vec4f res{lhs.sttp};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sttq)
{
    Vec4f res{lhs.sttq};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_stps)
{
    Vec4f res{lhs.stps};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_stpt)
{
    Vec4f res{lhs.stpt};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_stpp)
{
    Vec4f res{lhs.stpp};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_stpq)
{
    Vec4f res{lhs.stpq};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_stqs)
{
    Vec4f res{lhs.stqs};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_stqt)
{
    Vec4f res{lhs.stqt};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_stqp)
{
    Vec4f res{lhs.stqp};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_stqq)
{
    Vec4f res{lhs.stqq};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_spss)
{
    Vec4f res{lhs.spss};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_spst)
{
    Vec4f res{lhs.spst};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_spsp)
{
    Vec4f res{lhs.spsp};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_spsq)
{
    Vec4f res{lhs.spsq};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_spts)
{
    Vec4f res{lhs.spts};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sptt)
{
    Vec4f res{lhs.sptt};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sptp)
{
    Vec4f res{lhs.sptp};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sptq)
{
    Vec4f res{lhs.sptq};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_spps)
{
    Vec4f res{lhs.spps};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sppt)
{
    Vec4f res{lhs.sppt};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sppp)
{
    Vec4f res{lhs.sppp};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sppq)
{
    Vec4f res{lhs.sppq};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_spqs)
{
    Vec4f res{lhs.spqs};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_spqt)
{
    Vec4f res{lhs.spqt};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_spqp)
{
    Vec4f res{lhs.spqp};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_spqq)
{
    Vec4f res{lhs.spqq};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqss)
{
    Vec4f res{lhs.sqss};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqst)
{
    Vec4f res{lhs.sqst};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqsp)
{
    Vec4f res{lhs.sqsp};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqsq)
{
    Vec4f res{lhs.sqsq};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqts)
{
    Vec4f res{lhs.sqts};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqtt)
{
    Vec4f res{lhs.sqtt};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqtp)
{
    Vec4f res{lhs.sqtp};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqtq)
{
    Vec4f res{lhs.sqtq};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqps)
{
    Vec4f res{lhs.sqps};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqpt)
{
    Vec4f res{lhs.sqpt};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqpp)
{
    Vec4f res{lhs.sqpp};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqpq)
{
    Vec4f res{lhs.sqpq};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqqs)
{
    Vec4f res{lhs.sqqs};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqqt)
{
    Vec4f res{lhs.sqqt};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqqp)
{
    Vec4f res{lhs.sqqp};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqqq)
{
    Vec4f res{lhs.sqqq};

    EXPECT_FLOAT_EQ(res.s, 4.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tsss)
{
    Vec4f res{lhs.tsss};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tsst)
{
    Vec4f res{lhs.tsst};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tssp)
{
    Vec4f res{lhs.tssp};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tssq)
{
    Vec4f res{lhs.tssq};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tsts)
{
    Vec4f res{lhs.tsts};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tstt)
{
    Vec4f res{lhs.tstt};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tstp)
{
    Vec4f res{lhs.tstp};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tstq)
{
    Vec4f res{lhs.tstq};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tsps)
{
    Vec4f res{lhs.tsps};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tspt)
{
    Vec4f res{lhs.tspt};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tspp)
{
    Vec4f res{lhs.tspp};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tspq)
{
    Vec4f res{lhs.tspq};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tsqs)
{
    Vec4f res{lhs.tsqs};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tsqt)
{
    Vec4f res{lhs.tsqt};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tsqp)
{
    Vec4f res{lhs.tsqp};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tsqq)
{
    Vec4f res{lhs.tsqq};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ttss)
{
    Vec4f res{lhs.ttss};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ttst)
{
    Vec4f res{lhs.ttst};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ttsp)
{
    Vec4f res{lhs.ttsp};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ttsq)
{
    Vec4f res{lhs.ttsq};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ttts)
{
    Vec4f res{lhs.ttts};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tttt)
{
    Vec4f res{lhs.tttt};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tttp)
{
    Vec4f res{lhs.tttp};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tttq)
{
    Vec4f res{lhs.tttq};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ttps)
{
    Vec4f res{lhs.ttps};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ttpt)
{
    Vec4f res{lhs.ttpt};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ttpp)
{
    Vec4f res{lhs.ttpp};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ttpq)
{
    Vec4f res{lhs.ttpq};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ttqs)
{
    Vec4f res{lhs.ttqs};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ttqt)
{
    Vec4f res{lhs.ttqt};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ttqp)
{
    Vec4f res{lhs.ttqp};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ttqq)
{
    Vec4f res{lhs.ttqq};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tpss)
{
    Vec4f res{lhs.tpss};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tpst)
{
    Vec4f res{lhs.tpst};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tpsp)
{
    Vec4f res{lhs.tpsp};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tpsq)
{
    Vec4f res{lhs.tpsq};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tpts)
{
    Vec4f res{lhs.tpts};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tptt)
{
    Vec4f res{lhs.tptt};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tptp)
{
    Vec4f res{lhs.tptp};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tptq)
{
    Vec4f res{lhs.tptq};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tpps)
{
    Vec4f res{lhs.tpps};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tppt)
{
    Vec4f res{lhs.tppt};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tppp)
{
    Vec4f res{lhs.tppp};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tppq)
{
    Vec4f res{lhs.tppq};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tpqs)
{
    Vec4f res{lhs.tpqs};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tpqt)
{
    Vec4f res{lhs.tpqt};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tpqp)
{
    Vec4f res{lhs.tpqp};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tpqq)
{
    Vec4f res{lhs.tpqq};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqss)
{
    Vec4f res{lhs.tqss};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqst)
{
    Vec4f res{lhs.tqst};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqsp)
{
    Vec4f res{lhs.tqsp};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqsq)
{
    Vec4f res{lhs.tqsq};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqts)
{
    Vec4f res{lhs.tqts};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqtt)
{
    Vec4f res{lhs.tqtt};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqtp)
{
    Vec4f res{lhs.tqtp};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqtq)
{
    Vec4f res{lhs.tqtq};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqps)
{
    Vec4f res{lhs.tqps};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqpt)
{
    Vec4f res{lhs.tqpt};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqpp)
{
    Vec4f res{lhs.tqpp};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqpq)
{
    Vec4f res{lhs.tqpq};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqqs)
{
    Vec4f res{lhs.tqqs};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqqt)
{
    Vec4f res{lhs.tqqt};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqqp)
{
    Vec4f res{lhs.tqqp};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqqq)
{
    Vec4f res{lhs.tqqq};

    EXPECT_FLOAT_EQ(res.s, 3.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_psss)
{
    Vec4f res{lhs.psss};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_psst)
{
    Vec4f res{lhs.psst};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pssp)
{
    Vec4f res{lhs.pssp};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pssq)
{
    Vec4f res{lhs.pssq};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_psts)
{
    Vec4f res{lhs.psts};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pstt)
{
    Vec4f res{lhs.pstt};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pstp)
{
    Vec4f res{lhs.pstp};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pstq)
{
    Vec4f res{lhs.pstq};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_psps)
{
    Vec4f res{lhs.psps};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pspt)
{
    Vec4f res{lhs.pspt};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pspp)
{
    Vec4f res{lhs.pspp};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pspq)
{
    Vec4f res{lhs.pspq};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_psqs)
{
    Vec4f res{lhs.psqs};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_psqt)
{
    Vec4f res{lhs.psqt};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_psqp)
{
    Vec4f res{lhs.psqp};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_psqq)
{
    Vec4f res{lhs.psqq};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ptss)
{
    Vec4f res{lhs.ptss};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ptst)
{
    Vec4f res{lhs.ptst};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ptsp)
{
    Vec4f res{lhs.ptsp};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ptsq)
{
    Vec4f res{lhs.ptsq};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ptts)
{
    Vec4f res{lhs.ptts};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pttt)
{
    Vec4f res{lhs.pttt};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pttp)
{
    Vec4f res{lhs.pttp};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pttq)
{
    Vec4f res{lhs.pttq};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ptps)
{
    Vec4f res{lhs.ptps};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ptpt)
{
    Vec4f res{lhs.ptpt};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ptpp)
{
    Vec4f res{lhs.ptpp};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ptpq)
{
    Vec4f res{lhs.ptpq};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ptqs)
{
    Vec4f res{lhs.ptqs};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ptqt)
{
    Vec4f res{lhs.ptqt};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ptqp)
{
    Vec4f res{lhs.ptqp};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ptqq)
{
    Vec4f res{lhs.ptqq};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ppss)
{
    Vec4f res{lhs.ppss};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ppst)
{
    Vec4f res{lhs.ppst};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ppsp)
{
    Vec4f res{lhs.ppsp};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ppsq)
{
    Vec4f res{lhs.ppsq};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ppts)
{
    Vec4f res{lhs.ppts};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pptt)
{
    Vec4f res{lhs.pptt};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pptp)
{
    Vec4f res{lhs.pptp};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pptq)
{
    Vec4f res{lhs.pptq};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ppps)
{
    Vec4f res{lhs.ppps};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pppt)
{
    Vec4f res{lhs.pppt};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pppp)
{
    Vec4f res{lhs.pppp};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pppq)
{
    Vec4f res{lhs.pppq};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ppqs)
{
    Vec4f res{lhs.ppqs};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ppqt)
{
    Vec4f res{lhs.ppqt};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ppqp)
{
    Vec4f res{lhs.ppqp};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ppqq)
{
    Vec4f res{lhs.ppqq};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqss)
{
    Vec4f res{lhs.pqss};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqst)
{
    Vec4f res{lhs.pqst};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqsp)
{
    Vec4f res{lhs.pqsp};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqsq)
{
    Vec4f res{lhs.pqsq};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqts)
{
    Vec4f res{lhs.pqts};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqtt)
{
    Vec4f res{lhs.pqtt};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqtp)
{
    Vec4f res{lhs.pqtp};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqtq)
{
    Vec4f res{lhs.pqtq};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqps)
{
    Vec4f res{lhs.pqps};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqpt)
{
    Vec4f res{lhs.pqpt};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqpp)
{
    Vec4f res{lhs.pqpp};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqpq)
{
    Vec4f res{lhs.pqpq};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqqs)
{
    Vec4f res{lhs.pqqs};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqqt)
{
    Vec4f res{lhs.pqqt};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqqp)
{
    Vec4f res{lhs.pqqp};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqqq)
{
    Vec4f res{lhs.pqqq};

    EXPECT_FLOAT_EQ(res.s, 2.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qsss)
{
    Vec4f res{lhs.qsss};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qsst)
{
    Vec4f res{lhs.qsst};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qssp)
{
    Vec4f res{lhs.qssp};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qssq)
{
    Vec4f res{lhs.qssq};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qsts)
{
    Vec4f res{lhs.qsts};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qstt)
{
    Vec4f res{lhs.qstt};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qstp)
{
    Vec4f res{lhs.qstp};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qstq)
{
    Vec4f res{lhs.qstq};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qsps)
{
    Vec4f res{lhs.qsps};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qspt)
{
    Vec4f res{lhs.qspt};
    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qspp)
{
    Vec4f res{lhs.qspp};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qspq)
{
    Vec4f res{lhs.qspq};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qsqs)
{
    Vec4f res{lhs.qsqs};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qsqt)
{
    Vec4f res{lhs.qsqt};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qsqp)
{
    Vec4f res{lhs.qsqp};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qsqq)
{
    Vec4f res{lhs.qsqq};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 4.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qtss)
{
    Vec4f res{lhs.qtss};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qtst)
{
    Vec4f res{lhs.qtst};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qtsp)
{
    Vec4f res{lhs.qtsp};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qtsq)
{
    Vec4f res{lhs.qtsq};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qtts)
{
    Vec4f res{lhs.qtts};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qttt)
{
    Vec4f res{lhs.qttt};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qttp)
{
    Vec4f res{lhs.qttp};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qttq)
{
    Vec4f res{lhs.qttq};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qtps)
{
    Vec4f res{lhs.qtps};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qtpt)
{
    Vec4f res{lhs.qtpt};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qtpp)
{
    Vec4f res{lhs.qtpp};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qtpq)
{
    Vec4f res{lhs.qtpq};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qtqs)
{
    Vec4f res{lhs.qtqs};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qtqt)
{
    Vec4f res{lhs.qtqt};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qtqp)
{
    Vec4f res{lhs.qtqp};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qtqq)
{
    Vec4f res{lhs.qtqq};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 3.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qpss)
{
    Vec4f res{lhs.qpss};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qpst)
{
    Vec4f res{lhs.qpst};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qpsp)
{
    Vec4f res{lhs.qpsp};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qpsq)
{
    Vec4f res{lhs.qpsq};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qpts)
{
    Vec4f res{lhs.qpts};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qptt)
{
    Vec4f res{lhs.qptt};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qptp)
{
    Vec4f res{lhs.qptp};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qptq)
{
    Vec4f res{lhs.qptq};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qpps)
{
    Vec4f res{lhs.qpps};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qppt)
{
    Vec4f res{lhs.qppt};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qppp)
{
    Vec4f res{lhs.qppp};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qppq)
{
    Vec4f res{lhs.qppq};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qpqs)
{
    Vec4f res{lhs.qpqs};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qpqt)
{
    Vec4f res{lhs.qpqt};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qpqp)
{
    Vec4f res{lhs.qpqp};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qpqq)
{
    Vec4f res{lhs.qpqq};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 2.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqss)
{
    Vec4f res{lhs.qqss};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqst)
{
    Vec4f res{lhs.qqst};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqsp)
{
    Vec4f res{lhs.qqsp};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqsq)
{
    Vec4f res{lhs.qqsq};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 4.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqts)
{
    Vec4f res{lhs.qqts};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqtt)
{
    Vec4f res{lhs.qqtt};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqtp)
{
    Vec4f res{lhs.qqtp};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqtq)
{
    Vec4f res{lhs.qqtq};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 3.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqps)
{
    Vec4f res{lhs.qqps};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqpt)
{
    Vec4f res{lhs.qqpt};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqpp)
{
    Vec4f res{lhs.qqpp};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqpq)
{
    Vec4f res{lhs.qqpq};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 2.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqqs)
{
    Vec4f res{lhs.qqqs};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqqt)
{
    Vec4f res{lhs.qqqt};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqqp)
{
    Vec4f res{lhs.qqqp};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqqq)
{
    Vec4f res{lhs.qqqq};

    EXPECT_FLOAT_EQ(res.s, 1.0f);
    EXPECT_FLOAT_EQ(res.t, 1.0f);
    EXPECT_FLOAT_EQ(res.p, 1.0f);
    EXPECT_FLOAT_EQ(res.q, 1.0f);
}

