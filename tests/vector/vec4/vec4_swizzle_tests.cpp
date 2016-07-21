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

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxxy)
{
    Vec4f res{lhs.xxxy};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxxz)
{
    Vec4f res{lhs.xxxz};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxxw)
{
    Vec4f res{lhs.xxxw};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxyx)
{
    Vec4f res{lhs.xxyx};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxyy)
{
    Vec4f res{lhs.xxyy};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxyz)
{
    Vec4f res{lhs.xxyz};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxyw)
{
    Vec4f res{lhs.xxyw};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxzx)
{
    Vec4f res{lhs.xxzx};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxzy)
{
    Vec4f res{lhs.xxzy};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxzz)
{
    Vec4f res{lhs.xxzz};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxzw)
{
    Vec4f res{lhs.xxzw};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxwx)
{
    Vec4f res{lhs.xxwx};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxwy)
{
    Vec4f res{lhs.xxwy};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxwz)
{
    Vec4f res{lhs.xxwz};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xxww)
{
    Vec4f res{lhs.xxww};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xyxx)
{
    Vec4f res{lhs.xyxx};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xyxy)
{
    Vec4f res{lhs.xyxy};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xyxz)
{
    Vec4f res{lhs.xyxz};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xyxw)
{
    Vec4f res{lhs.xyxw};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xyyx)
{
    Vec4f res{lhs.xyyx};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xyyy)
{
    Vec4f res{lhs.xyyy};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xyyz)
{
    Vec4f res{lhs.xyyz};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xyyw)
{
    Vec4f res{lhs.xyyw};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xyzx)
{
    Vec4f res{lhs.xyzx};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xyzy)
{
    Vec4f res{lhs.xyzy};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xyzz)
{
    Vec4f res{lhs.xyzz};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xyzw)
{
    Vec4f res{lhs.xyzw};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xywx)
{
    Vec4f res{lhs.xywx};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xywy)
{
    Vec4f res{lhs.xywy};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xywz)
{
    Vec4f res{lhs.xywz};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xyww)
{
    Vec4f res{lhs.xyww};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzxx)
{
    Vec4f res{lhs.xzxx};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzxy)
{
    Vec4f res{lhs.xzxy};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzxz)
{
    Vec4f res{lhs.xzxz};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzxw)
{
    Vec4f res{lhs.xzxw};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzyx)
{
    Vec4f res{lhs.xzyx};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzyy)
{
    Vec4f res{lhs.xzyy};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzyz)
{
    Vec4f res{lhs.xzyz};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzyw)
{
    Vec4f res{lhs.xzyw};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzzx)
{
    Vec4f res{lhs.xzzx};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzzy)
{
    Vec4f res{lhs.xzzy};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzzz)
{
    Vec4f res{lhs.xzzz};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzzw)
{
    Vec4f res{lhs.xzzw};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzwx)
{
    Vec4f res{lhs.xzwx};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzwy)
{
    Vec4f res{lhs.xzwy};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzwz)
{
    Vec4f res{lhs.xzwz};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xzww)
{
    Vec4f res{lhs.xzww};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwxx)
{
    Vec4f res{lhs.xwxx};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwxy)
{
    Vec4f res{lhs.xwxy};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwxz)
{
    Vec4f res{lhs.xwxz};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwxw)
{
    Vec4f res{lhs.xwxw};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwyx)
{
    Vec4f res{lhs.xwyx};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwyy)
{
    Vec4f res{lhs.xwyy};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwyz)
{
    Vec4f res{lhs.xwyz};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwyw)
{
    Vec4f res{lhs.xwyw};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwzx)
{
    Vec4f res{lhs.xwzx};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwzy)
{
    Vec4f res{lhs.xwzy};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwzz)
{
    Vec4f res{lhs.xwzz};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwzw)
{
    Vec4f res{lhs.xwzw};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwwx)
{
    Vec4f res{lhs.xwwx};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwwy)
{
    Vec4f res{lhs.xwwy};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwwz)
{
    Vec4f res{lhs.xwwz};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_xwww)
{
    Vec4f res{lhs.xwww};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxxx)
{
    Vec4f res{lhs.yxxx};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxxy)
{
    Vec4f res{lhs.yxxy};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxxz)
{
    Vec4f res{lhs.yxxz};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxxw)
{
    Vec4f res{lhs.yxxw};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxyx)
{
    Vec4f res{lhs.yxyx};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxyy)
{
    Vec4f res{lhs.yxyy};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxyz)
{
    Vec4f res{lhs.yxyz};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxyw)
{
    Vec4f res{lhs.yxyw};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxzx)
{
    Vec4f res{lhs.yxzx};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxzy)
{
    Vec4f res{lhs.yxzy};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxzz)
{
    Vec4f res{lhs.yxzz};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxzw)
{
    Vec4f res{lhs.yxzw};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxwx)
{
    Vec4f res{lhs.yxwx};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxwy)
{
    Vec4f res{lhs.yxwy};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxwz)
{
    Vec4f res{lhs.yxwz};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yxww)
{
    Vec4f res{lhs.yxww};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yyxx)
{
    Vec4f res{lhs.yyxx};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yyxy)
{
    Vec4f res{lhs.yyxy};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yyxz)
{
    Vec4f res{lhs.yyxz};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yyxw)
{
    Vec4f res{lhs.yyxw};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yyyx)
{
    Vec4f res{lhs.yyyx};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yyyy)
{
    Vec4f res{lhs.yyyy};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yyyz)
{
    Vec4f res{lhs.yyyz};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yyyw)
{
    Vec4f res{lhs.yyyw};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yyzx)
{
    Vec4f res{lhs.yyzx};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yyzy)
{
    Vec4f res{lhs.yyzy};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yyzz)
{
    Vec4f res{lhs.yyzz};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yyzw)
{
    Vec4f res{lhs.yyzw};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yywx)
{
    Vec4f res{lhs.yywx};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yywy)
{
    Vec4f res{lhs.yywy};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yywz)
{
    Vec4f res{lhs.yywz};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yyww)
{
    Vec4f res{lhs.yyww};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzxx)
{
    Vec4f res{lhs.yzxx};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzxy)
{
    Vec4f res{lhs.yzxy};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzxz)
{
    Vec4f res{lhs.yzxz};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzxw)
{
    Vec4f res{lhs.yzxw};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzyx)
{
    Vec4f res{lhs.yzyx};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzyy)
{
    Vec4f res{lhs.yzyy};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzyz)
{
    Vec4f res{lhs.yzyz};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzyw)
{
    Vec4f res{lhs.yzyw};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzzx)
{
    Vec4f res{lhs.yzzx};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzzy)
{
    Vec4f res{lhs.yzzy};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzzz)
{
    Vec4f res{lhs.yzzz};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzzw)
{
    Vec4f res{lhs.yzzw};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzwx)
{
    Vec4f res{lhs.yzwx};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzwy)
{
    Vec4f res{lhs.yzwy};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzwz)
{
    Vec4f res{lhs.yzwz};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_yzww)
{
    Vec4f res{lhs.yzww};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywxx)
{
    Vec4f res{lhs.ywxx};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywxy)
{
    Vec4f res{lhs.ywxy};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywxz)
{
    Vec4f res{lhs.ywxz};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywxw)
{
    Vec4f res{lhs.ywxw};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywyx)
{
    Vec4f res{lhs.ywyx};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywyy)
{
    Vec4f res{lhs.ywyy};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywyz)
{
    Vec4f res{lhs.ywyz};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywyw)
{
    Vec4f res{lhs.ywyw};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywzx)
{
    Vec4f res{lhs.ywzx};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywzy)
{
    Vec4f res{lhs.ywzy};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywzz)
{
    Vec4f res{lhs.ywzz};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywzw)
{
    Vec4f res{lhs.ywzw};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywwx)
{
    Vec4f res{lhs.ywwx};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywwy)
{
    Vec4f res{lhs.ywwy};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywwz)
{
    Vec4f res{lhs.ywwz};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ywww)
{
    Vec4f res{lhs.ywww};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxxx)
{
    Vec4f res{lhs.zxxx};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxxy)
{
    Vec4f res{lhs.zxxy};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxxz)
{
    Vec4f res{lhs.zxxz};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxxw)
{
    Vec4f res{lhs.zxxw};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxyx)
{
    Vec4f res{lhs.zxyx};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxyy)
{
    Vec4f res{lhs.zxyy};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxyz)
{
    Vec4f res{lhs.zxyz};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxyw)
{
    Vec4f res{lhs.zxyw};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxzx)
{
    Vec4f res{lhs.zxzx};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxzy)
{
    Vec4f res{lhs.zxzy};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxzz)
{
    Vec4f res{lhs.zxzz};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxzw)
{
    Vec4f res{lhs.zxzw};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxwx)
{
    Vec4f res{lhs.zxwx};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxwy)
{
    Vec4f res{lhs.zxwy};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxwz)
{
    Vec4f res{lhs.zxwz};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zxww)
{
    Vec4f res{lhs.zxww};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zyxx)
{
    Vec4f res{lhs.zyxx};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zyxy)
{
    Vec4f res{lhs.zyxy};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zyxz)
{
    Vec4f res{lhs.zyxz};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zyxw)
{
    Vec4f res{lhs.zyxw};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zyyx)
{
    Vec4f res{lhs.zyyx};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zyyy)
{
    Vec4f res{lhs.zyyy};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zyyz)
{
    Vec4f res{lhs.zyyz};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zyyw)
{
    Vec4f res{lhs.zyyw};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zyzx)
{
    Vec4f res{lhs.zyzx};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zyzy)
{
    Vec4f res{lhs.zyzy};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zyzz)
{
    Vec4f res{lhs.zyzz};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zyzw)
{
    Vec4f res{lhs.zyzw};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zywx)
{
    Vec4f res{lhs.zywx};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zywy)
{
    Vec4f res{lhs.zywy};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zywz)
{
    Vec4f res{lhs.zywz};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zyww)
{
    Vec4f res{lhs.zyww};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzxx)
{
    Vec4f res{lhs.zzxx};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzxy)
{
    Vec4f res{lhs.zzxy};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzxz)
{
    Vec4f res{lhs.zzxz};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzxw)
{
    Vec4f res{lhs.zzxw};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzyx)
{
    Vec4f res{lhs.zzyx};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzyy)
{
    Vec4f res{lhs.zzyy};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzyz)
{
    Vec4f res{lhs.zzyz};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzyw)
{
    Vec4f res{lhs.zzyw};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzzx)
{
    Vec4f res{lhs.zzzx};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzzy)
{
    Vec4f res{lhs.zzzy};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzzz)
{
    Vec4f res{lhs.zzzz};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzzw)
{
    Vec4f res{lhs.zzzw};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzwx)
{
    Vec4f res{lhs.zzwx};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzwy)
{
    Vec4f res{lhs.zzwy};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzwz)
{
    Vec4f res{lhs.zzwz};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zzww)
{
    Vec4f res{lhs.zzww};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwxx)
{
    Vec4f res{lhs.zwxx};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwxy)
{
    Vec4f res{lhs.zwxy};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwxz)
{
    Vec4f res{lhs.zwxz};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwxw)
{
    Vec4f res{lhs.zwxw};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwyx)
{
    Vec4f res{lhs.zwyx};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwyy)
{
    Vec4f res{lhs.zwyy};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwyz)
{
    Vec4f res{lhs.zwyz};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwyw)
{
    Vec4f res{lhs.zwyw};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwzx)
{
    Vec4f res{lhs.zwzx};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwzy)
{
    Vec4f res{lhs.zwzy};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwzz)
{
    Vec4f res{lhs.zwzz};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwzw)
{
    Vec4f res{lhs.zwzw};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwwx)
{
    Vec4f res{lhs.zwwx};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwwy)
{
    Vec4f res{lhs.zwwy};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwwz)
{
    Vec4f res{lhs.zwwz};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_zwww)
{
    Vec4f res{lhs.zwww};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxxx)
{
    Vec4f res{lhs.wxxx};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxxy)
{
    Vec4f res{lhs.wxxy};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxxz)
{
    Vec4f res{lhs.wxxz};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxxw)
{
    Vec4f res{lhs.wxxw};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxyx)
{
    Vec4f res{lhs.wxyx};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxyy)
{
    Vec4f res{lhs.wxyy};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxyz)
{
    Vec4f res{lhs.wxyz};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxyw)
{
    Vec4f res{lhs.wxyw};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxzx)
{
    Vec4f res{lhs.wxzx};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxzy)
{
    Vec4f res{lhs.wxzy};
    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxzz)
{
    Vec4f res{lhs.wxzz};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxzw)
{
    Vec4f res{lhs.wxzw};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxwx)
{
    Vec4f res{lhs.wxwx};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxwy)
{
    Vec4f res{lhs.wxwy};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxwz)
{
    Vec4f res{lhs.wxwz};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wxww)
{
    Vec4f res{lhs.wxww};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wyxx)
{
    Vec4f res{lhs.wyxx};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wyxy)
{
    Vec4f res{lhs.wyxy};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wyxz)
{
    Vec4f res{lhs.wyxz};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wyxw)
{
    Vec4f res{lhs.wyxw};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wyyx)
{
    Vec4f res{lhs.wyyx};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wyyy)
{
    Vec4f res{lhs.wyyy};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wyyz)
{
    Vec4f res{lhs.wyyz};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wyyw)
{
    Vec4f res{lhs.wyyw};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wyzx)
{
    Vec4f res{lhs.wyzx};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wyzy)
{
    Vec4f res{lhs.wyzy};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wyzz)
{
    Vec4f res{lhs.wyzz};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wyzw)
{
    Vec4f res{lhs.wyzw};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wywx)
{
    Vec4f res{lhs.wywx};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wywy)
{
    Vec4f res{lhs.wywy};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wywz)
{
    Vec4f res{lhs.wywz};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wyww)
{
    Vec4f res{lhs.wyww};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzxx)
{
    Vec4f res{lhs.wzxx};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzxy)
{
    Vec4f res{lhs.wzxy};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzxz)
{
    Vec4f res{lhs.wzxz};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzxw)
{
    Vec4f res{lhs.wzxw};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzyx)
{
    Vec4f res{lhs.wzyx};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzyy)
{
    Vec4f res{lhs.wzyy};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzyz)
{
    Vec4f res{lhs.wzyz};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzyw)
{
    Vec4f res{lhs.wzyw};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzzx)
{
    Vec4f res{lhs.wzzx};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzzy)
{
    Vec4f res{lhs.wzzy};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzzz)
{
    Vec4f res{lhs.wzzz};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzzw)
{
    Vec4f res{lhs.wzzw};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzwx)
{
    Vec4f res{lhs.wzwx};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzwy)
{
    Vec4f res{lhs.wzwy};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzwz)
{
    Vec4f res{lhs.wzwz};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wzww)
{
    Vec4f res{lhs.wzww};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwxx)
{
    Vec4f res{lhs.wwxx};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwxy)
{
    Vec4f res{lhs.wwxy};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwxz)
{
    Vec4f res{lhs.wwxz};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwxw)
{
    Vec4f res{lhs.wwxw};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwyx)
{
    Vec4f res{lhs.wwyx};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwyy)
{
    Vec4f res{lhs.wwyy};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwyz)
{
    Vec4f res{lhs.wwyz};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwyw)
{
    Vec4f res{lhs.wwyw};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwzx)
{
    Vec4f res{lhs.wwzx};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwzy)
{
    Vec4f res{lhs.wwzy};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwzz)
{
    Vec4f res{lhs.wwzz};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwzw)
{
    Vec4f res{lhs.wwzw};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwwx)
{
    Vec4f res{lhs.wwwx};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwwy)
{
    Vec4f res{lhs.wwwy};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwwz)
{
    Vec4f res{lhs.wwwz};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_wwww)
{
    Vec4f res{lhs.wwww};

    ASSERT_FLOAT_EQ(res.x, 1.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
    ASSERT_FLOAT_EQ(res.w, 1.0f);
}


TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrrr)
{
    Vec4f res{lhs.rrrr};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrrg)
{
    Vec4f res{lhs.rrrg};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrrb)
{
    Vec4f res{lhs.rrrb};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrra)
{
    Vec4f res{lhs.rrra};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrgr)
{
    Vec4f res{lhs.rrgr};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrgg)
{
    Vec4f res{lhs.rrgg};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrgb)
{
    Vec4f res{lhs.rrgb};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrga)
{
    Vec4f res{lhs.rrga};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrbr)
{
    Vec4f res{lhs.rrbr};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrbg)
{
    Vec4f res{lhs.rrbg};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrbb)
{
    Vec4f res{lhs.rrbb};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrba)
{
    Vec4f res{lhs.rrba};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrar)
{
    Vec4f res{lhs.rrar};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrag)
{
    Vec4f res{lhs.rrag};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rrab)
{
    Vec4f res{lhs.rrab};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rraa)
{
    Vec4f res{lhs.rraa};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rgrr)
{
    Vec4f res{lhs.rgrr};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rgrg)
{
    Vec4f res{lhs.rgrg};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rgrb)
{
    Vec4f res{lhs.rgrb};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rgra)
{
    Vec4f res{lhs.rgra};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rggr)
{
    Vec4f res{lhs.rggr};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rggg)
{
    Vec4f res{lhs.rggg};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rggb)
{
    Vec4f res{lhs.rggb};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rgga)
{
    Vec4f res{lhs.rgga};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rgbr)
{
    Vec4f res{lhs.rgbr};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rgbg)
{
    Vec4f res{lhs.rgbg};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rgbb)
{
    Vec4f res{lhs.rgbb};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rgba)
{
    Vec4f res{lhs.rgba};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rgar)
{
    Vec4f res{lhs.rgar};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rgag)
{
    Vec4f res{lhs.rgag};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rgab)
{
    Vec4f res{lhs.rgab};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rgaa)
{
    Vec4f res{lhs.rgaa};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbrr)
{
    Vec4f res{lhs.rbrr};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbrg)
{
    Vec4f res{lhs.rbrg};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbrb)
{
    Vec4f res{lhs.rbrb};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbra)
{
    Vec4f res{lhs.rbra};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbgr)
{
    Vec4f res{lhs.rbgr};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbgg)
{
    Vec4f res{lhs.rbgg};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbgb)
{
    Vec4f res{lhs.rbgb};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbga)
{
    Vec4f res{lhs.rbga};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbbr)
{
    Vec4f res{lhs.rbbr};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbbg)
{
    Vec4f res{lhs.rbbg};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbbb)
{
    Vec4f res{lhs.rbbb};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbba)
{
    Vec4f res{lhs.rbba};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbar)
{
    Vec4f res{lhs.rbar};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbag)
{
    Vec4f res{lhs.rbag};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbab)
{
    Vec4f res{lhs.rbab};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rbaa)
{
    Vec4f res{lhs.rbaa};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rarr)
{
    Vec4f res{lhs.rarr};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rarg)
{
    Vec4f res{lhs.rarg};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rarb)
{
    Vec4f res{lhs.rarb};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rara)
{
    Vec4f res{lhs.rara};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ragr)
{
    Vec4f res{lhs.ragr};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ragg)
{
    Vec4f res{lhs.ragg};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ragb)
{
    Vec4f res{lhs.ragb};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_raga)
{
    Vec4f res{lhs.raga};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rabr)
{
    Vec4f res{lhs.rabr};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rabg)
{
    Vec4f res{lhs.rabg};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_rabb)
{
    Vec4f res{lhs.rabb};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_raba)
{
    Vec4f res{lhs.raba};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_raar)
{
    Vec4f res{lhs.raar};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_raag)
{
    Vec4f res{lhs.raag};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_raab)
{
    Vec4f res{lhs.raab};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_raaa)
{
    Vec4f res{lhs.raaa};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grrr)
{
    Vec4f res{lhs.grrr};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grrg)
{
    Vec4f res{lhs.grrg};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grrb)
{
    Vec4f res{lhs.grrb};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grra)
{
    Vec4f res{lhs.grra};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grgr)
{
    Vec4f res{lhs.grgr};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grgg)
{
    Vec4f res{lhs.grgg};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grgb)
{
    Vec4f res{lhs.grgb};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grga)
{
    Vec4f res{lhs.grga};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grbr)
{
    Vec4f res{lhs.grbr};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grbg)
{
    Vec4f res{lhs.grbg};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grbb)
{
    Vec4f res{lhs.grbb};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grba)
{
    Vec4f res{lhs.grba};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grar)
{
    Vec4f res{lhs.grar};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grag)
{
    Vec4f res{lhs.grag};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_grab)
{
    Vec4f res{lhs.grab};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_graa)
{
    Vec4f res{lhs.graa};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ggrr)
{
    Vec4f res{lhs.ggrr};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ggrg)
{
    Vec4f res{lhs.ggrg};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ggrb)
{
    Vec4f res{lhs.ggrb};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ggra)
{
    Vec4f res{lhs.ggra};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gggr)
{
    Vec4f res{lhs.gggr};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gggg)
{
    Vec4f res{lhs.gggg};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gggb)
{
    Vec4f res{lhs.gggb};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ggga)
{
    Vec4f res{lhs.ggga};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ggbr)
{
    Vec4f res{lhs.ggbr};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ggbg)
{
    Vec4f res{lhs.ggbg};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ggbb)
{
    Vec4f res{lhs.ggbb};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ggba)
{
    Vec4f res{lhs.ggba};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ggar)
{
    Vec4f res{lhs.ggar};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ggag)
{
    Vec4f res{lhs.ggag};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ggab)
{
    Vec4f res{lhs.ggab};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ggaa)
{
    Vec4f res{lhs.ggaa};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbrr)
{
    Vec4f res{lhs.gbrr};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbrg)
{
    Vec4f res{lhs.gbrg};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbrb)
{
    Vec4f res{lhs.gbrb};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbra)
{
    Vec4f res{lhs.gbra};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbgr)
{
    Vec4f res{lhs.gbgr};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbgg)
{
    Vec4f res{lhs.gbgg};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbgb)
{
    Vec4f res{lhs.gbgb};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbga)
{
    Vec4f res{lhs.gbga};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbbr)
{
    Vec4f res{lhs.gbbr};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbbg)
{
    Vec4f res{lhs.gbbg};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbbb)
{
    Vec4f res{lhs.gbbb};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbba)
{
    Vec4f res{lhs.gbba};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbar)
{
    Vec4f res{lhs.gbar};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbag)
{
    Vec4f res{lhs.gbag};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbab)
{
    Vec4f res{lhs.gbab};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gbaa)
{
    Vec4f res{lhs.gbaa};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_garr)
{
    Vec4f res{lhs.garr};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_garg)
{
    Vec4f res{lhs.garg};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_garb)
{
    Vec4f res{lhs.garb};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gara)
{
    Vec4f res{lhs.gara};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gagr)
{
    Vec4f res{lhs.gagr};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gagg)
{
    Vec4f res{lhs.gagg};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gagb)
{
    Vec4f res{lhs.gagb};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gaga)
{
    Vec4f res{lhs.gaga};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gabr)
{
    Vec4f res{lhs.gabr};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gabg)
{
    Vec4f res{lhs.gabg};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gabb)
{
    Vec4f res{lhs.gabb};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gaba)
{
    Vec4f res{lhs.gaba};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gaar)
{
    Vec4f res{lhs.gaar};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gaag)
{
    Vec4f res{lhs.gaag};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gaab)
{
    Vec4f res{lhs.gaab};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_gaaa)
{
    Vec4f res{lhs.gaaa};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brrr)
{
    Vec4f res{lhs.brrr};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brrg)
{
    Vec4f res{lhs.brrg};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brrb)
{
    Vec4f res{lhs.brrb};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brra)
{
    Vec4f res{lhs.brra};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brgr)
{
    Vec4f res{lhs.brgr};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brgg)
{
    Vec4f res{lhs.brgg};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brgb)
{
    Vec4f res{lhs.brgb};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brga)
{
    Vec4f res{lhs.brga};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brbr)
{
    Vec4f res{lhs.brbr};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brbg)
{
    Vec4f res{lhs.brbg};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brbb)
{
    Vec4f res{lhs.brbb};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brba)
{
    Vec4f res{lhs.brba};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brar)
{
    Vec4f res{lhs.brar};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brag)
{
    Vec4f res{lhs.brag};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_brab)
{
    Vec4f res{lhs.brab};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_braa)
{
    Vec4f res{lhs.braa};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bgrr)
{
    Vec4f res{lhs.bgrr};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bgrg)
{
    Vec4f res{lhs.bgrg};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bgrb)
{
    Vec4f res{lhs.bgrb};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bgra)
{
    Vec4f res{lhs.bgra};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bggr)
{
    Vec4f res{lhs.bggr};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bggg)
{
    Vec4f res{lhs.bggg};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bggb)
{
    Vec4f res{lhs.bggb};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bgga)
{
    Vec4f res{lhs.bgga};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bgbr)
{
    Vec4f res{lhs.bgbr};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bgbg)
{
    Vec4f res{lhs.bgbg};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bgbb)
{
    Vec4f res{lhs.bgbb};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bgba)
{
    Vec4f res{lhs.bgba};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bgar)
{
    Vec4f res{lhs.bgar};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bgag)
{
    Vec4f res{lhs.bgag};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bgab)
{
    Vec4f res{lhs.bgab};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bgaa)
{
    Vec4f res{lhs.bgaa};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbrr)
{
    Vec4f res{lhs.bbrr};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbrg)
{
    Vec4f res{lhs.bbrg};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbrb)
{
    Vec4f res{lhs.bbrb};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbra)
{
    Vec4f res{lhs.bbra};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbgr)
{
    Vec4f res{lhs.bbgr};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbgg)
{
    Vec4f res{lhs.bbgg};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbgb)
{
    Vec4f res{lhs.bbgb};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbga)
{
    Vec4f res{lhs.bbga};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbbr)
{
    Vec4f res{lhs.bbbr};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbbg)
{
    Vec4f res{lhs.bbbg};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbbb)
{
    Vec4f res{lhs.bbbb};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbba)
{
    Vec4f res{lhs.bbba};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbar)
{
    Vec4f res{lhs.bbar};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbag)
{
    Vec4f res{lhs.bbag};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbab)
{
    Vec4f res{lhs.bbab};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bbaa)
{
    Vec4f res{lhs.bbaa};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_barr)
{
    Vec4f res{lhs.barr};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_barg)
{
    Vec4f res{lhs.barg};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_barb)
{
    Vec4f res{lhs.barb};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bara)
{
    Vec4f res{lhs.bara};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bagr)
{
    Vec4f res{lhs.bagr};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bagg)
{
    Vec4f res{lhs.bagg};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_bagb)
{
    Vec4f res{lhs.bagb};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_baga)
{
    Vec4f res{lhs.baga};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_babr)
{
    Vec4f res{lhs.babr};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_babg)
{
    Vec4f res{lhs.babg};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_babb)
{
    Vec4f res{lhs.babb};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_baba)
{
    Vec4f res{lhs.baba};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_baar)
{
    Vec4f res{lhs.baar};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_baag)
{
    Vec4f res{lhs.baag};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_baab)
{
    Vec4f res{lhs.baab};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_baaa)
{
    Vec4f res{lhs.baaa};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_arrr)
{
    Vec4f res{lhs.arrr};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_arrg)
{
    Vec4f res{lhs.arrg};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_arrb)
{
    Vec4f res{lhs.arrb};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_arra)
{
    Vec4f res{lhs.arra};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_argr)
{
    Vec4f res{lhs.argr};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_argg)
{
    Vec4f res{lhs.argg};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_argb)
{
    Vec4f res{lhs.argb};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_arga)
{
    Vec4f res{lhs.arga};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_arbr)
{
    Vec4f res{lhs.arbr};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_arbg)
{
    Vec4f res{lhs.arbg};
    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_arbb)
{
    Vec4f res{lhs.arbb};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_arba)
{
    Vec4f res{lhs.arba};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_arar)
{
    Vec4f res{lhs.arar};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_arag)
{
    Vec4f res{lhs.arag};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_arab)
{
    Vec4f res{lhs.arab};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_araa)
{
    Vec4f res{lhs.araa};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_agrr)
{
    Vec4f res{lhs.agrr};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_agrg)
{
    Vec4f res{lhs.agrg};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_agrb)
{
    Vec4f res{lhs.agrb};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_agra)
{
    Vec4f res{lhs.agra};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aggr)
{
    Vec4f res{lhs.aggr};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aggg)
{
    Vec4f res{lhs.aggg};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aggb)
{
    Vec4f res{lhs.aggb};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_agga)
{
    Vec4f res{lhs.agga};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_agbr)
{
    Vec4f res{lhs.agbr};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_agbg)
{
    Vec4f res{lhs.agbg};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_agbb)
{
    Vec4f res{lhs.agbb};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_agba)
{
    Vec4f res{lhs.agba};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_agar)
{
    Vec4f res{lhs.agar};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_agag)
{
    Vec4f res{lhs.agag};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_agab)
{
    Vec4f res{lhs.agab};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_agaa)
{
    Vec4f res{lhs.agaa};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abrr)
{
    Vec4f res{lhs.abrr};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abrg)
{
    Vec4f res{lhs.abrg};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abrb)
{
    Vec4f res{lhs.abrb};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abra)
{
    Vec4f res{lhs.abra};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abgr)
{
    Vec4f res{lhs.abgr};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abgg)
{
    Vec4f res{lhs.abgg};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abgb)
{
    Vec4f res{lhs.abgb};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abga)
{
    Vec4f res{lhs.abga};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abbr)
{
    Vec4f res{lhs.abbr};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abbg)
{
    Vec4f res{lhs.abbg};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abbb)
{
    Vec4f res{lhs.abbb};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abba)
{
    Vec4f res{lhs.abba};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abar)
{
    Vec4f res{lhs.abar};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abag)
{
    Vec4f res{lhs.abag};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abab)
{
    Vec4f res{lhs.abab};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_abaa)
{
    Vec4f res{lhs.abaa};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aarr)
{
    Vec4f res{lhs.aarr};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aarg)
{
    Vec4f res{lhs.aarg};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aarb)
{
    Vec4f res{lhs.aarb};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aara)
{
    Vec4f res{lhs.aara};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aagr)
{
    Vec4f res{lhs.aagr};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aagg)
{
    Vec4f res{lhs.aagg};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aagb)
{
    Vec4f res{lhs.aagb};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aaga)
{
    Vec4f res{lhs.aaga};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aabr)
{
    Vec4f res{lhs.aabr};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aabg)
{
    Vec4f res{lhs.aabg};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aabb)
{
    Vec4f res{lhs.aabb};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aaba)
{
    Vec4f res{lhs.aaba};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aaar)
{
    Vec4f res{lhs.aaar};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aaag)
{
    Vec4f res{lhs.aaag};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aaab)
{
    Vec4f res{lhs.aaab};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_aaaa)
{
    Vec4f res{lhs.aaaa};

    ASSERT_FLOAT_EQ(res.r, 1.0f);
    ASSERT_FLOAT_EQ(res.g, 1.0f);
    ASSERT_FLOAT_EQ(res.b, 1.0f);
    ASSERT_FLOAT_EQ(res.a, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ssss)
{
    Vec4f res{lhs.ssss};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ssst)
{
    Vec4f res{lhs.ssst};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sssp)
{
    Vec4f res{lhs.sssp};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sssq)
{
    Vec4f res{lhs.sssq};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ssts)
{
    Vec4f res{lhs.ssts};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sstt)
{
    Vec4f res{lhs.sstt};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sstp)
{
    Vec4f res{lhs.sstp};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sstq)
{
    Vec4f res{lhs.sstq};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ssps)
{
    Vec4f res{lhs.ssps};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sspt)
{
    Vec4f res{lhs.sspt};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sspp)
{
    Vec4f res{lhs.sspp};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sspq)
{
    Vec4f res{lhs.sspq};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ssqs)
{
    Vec4f res{lhs.ssqs};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ssqt)
{
    Vec4f res{lhs.ssqt};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ssqp)
{
    Vec4f res{lhs.ssqp};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ssqq)
{
    Vec4f res{lhs.ssqq};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_stss)
{
    Vec4f res{lhs.stss};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_stst)
{
    Vec4f res{lhs.stst};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_stsp)
{
    Vec4f res{lhs.stsp};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_stsq)
{
    Vec4f res{lhs.stsq};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_stts)
{
    Vec4f res{lhs.stts};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sttt)
{
    Vec4f res{lhs.sttt};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sttp)
{
    Vec4f res{lhs.sttp};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sttq)
{
    Vec4f res{lhs.sttq};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_stps)
{
    Vec4f res{lhs.stps};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_stpt)
{
    Vec4f res{lhs.stpt};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_stpp)
{
    Vec4f res{lhs.stpp};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_stpq)
{
    Vec4f res{lhs.stpq};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_stqs)
{
    Vec4f res{lhs.stqs};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_stqt)
{
    Vec4f res{lhs.stqt};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_stqp)
{
    Vec4f res{lhs.stqp};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_stqq)
{
    Vec4f res{lhs.stqq};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_spss)
{
    Vec4f res{lhs.spss};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_spst)
{
    Vec4f res{lhs.spst};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_spsp)
{
    Vec4f res{lhs.spsp};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_spsq)
{
    Vec4f res{lhs.spsq};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_spts)
{
    Vec4f res{lhs.spts};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sptt)
{
    Vec4f res{lhs.sptt};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sptp)
{
    Vec4f res{lhs.sptp};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sptq)
{
    Vec4f res{lhs.sptq};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_spps)
{
    Vec4f res{lhs.spps};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sppt)
{
    Vec4f res{lhs.sppt};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sppp)
{
    Vec4f res{lhs.sppp};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sppq)
{
    Vec4f res{lhs.sppq};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_spqs)
{
    Vec4f res{lhs.spqs};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_spqt)
{
    Vec4f res{lhs.spqt};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_spqp)
{
    Vec4f res{lhs.spqp};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_spqq)
{
    Vec4f res{lhs.spqq};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqss)
{
    Vec4f res{lhs.sqss};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqst)
{
    Vec4f res{lhs.sqst};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqsp)
{
    Vec4f res{lhs.sqsp};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqsq)
{
    Vec4f res{lhs.sqsq};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqts)
{
    Vec4f res{lhs.sqts};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqtt)
{
    Vec4f res{lhs.sqtt};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqtp)
{
    Vec4f res{lhs.sqtp};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqtq)
{
    Vec4f res{lhs.sqtq};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqps)
{
    Vec4f res{lhs.sqps};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqpt)
{
    Vec4f res{lhs.sqpt};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqpp)
{
    Vec4f res{lhs.sqpp};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqpq)
{
    Vec4f res{lhs.sqpq};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqqs)
{
    Vec4f res{lhs.sqqs};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqqt)
{
    Vec4f res{lhs.sqqt};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqqp)
{
    Vec4f res{lhs.sqqp};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_sqqq)
{
    Vec4f res{lhs.sqqq};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tsss)
{
    Vec4f res{lhs.tsss};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tsst)
{
    Vec4f res{lhs.tsst};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tssp)
{
    Vec4f res{lhs.tssp};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tssq)
{
    Vec4f res{lhs.tssq};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tsts)
{
    Vec4f res{lhs.tsts};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tstt)
{
    Vec4f res{lhs.tstt};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tstp)
{
    Vec4f res{lhs.tstp};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tstq)
{
    Vec4f res{lhs.tstq};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tsps)
{
    Vec4f res{lhs.tsps};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tspt)
{
    Vec4f res{lhs.tspt};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tspp)
{
    Vec4f res{lhs.tspp};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tspq)
{
    Vec4f res{lhs.tspq};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tsqs)
{
    Vec4f res{lhs.tsqs};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tsqt)
{
    Vec4f res{lhs.tsqt};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tsqp)
{
    Vec4f res{lhs.tsqp};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tsqq)
{
    Vec4f res{lhs.tsqq};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ttss)
{
    Vec4f res{lhs.ttss};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ttst)
{
    Vec4f res{lhs.ttst};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ttsp)
{
    Vec4f res{lhs.ttsp};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ttsq)
{
    Vec4f res{lhs.ttsq};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ttts)
{
    Vec4f res{lhs.ttts};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tttt)
{
    Vec4f res{lhs.tttt};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tttp)
{
    Vec4f res{lhs.tttp};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tttq)
{
    Vec4f res{lhs.tttq};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ttps)
{
    Vec4f res{lhs.ttps};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ttpt)
{
    Vec4f res{lhs.ttpt};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ttpp)
{
    Vec4f res{lhs.ttpp};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ttpq)
{
    Vec4f res{lhs.ttpq};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ttqs)
{
    Vec4f res{lhs.ttqs};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ttqt)
{
    Vec4f res{lhs.ttqt};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ttqp)
{
    Vec4f res{lhs.ttqp};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ttqq)
{
    Vec4f res{lhs.ttqq};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tpss)
{
    Vec4f res{lhs.tpss};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tpst)
{
    Vec4f res{lhs.tpst};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tpsp)
{
    Vec4f res{lhs.tpsp};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tpsq)
{
    Vec4f res{lhs.tpsq};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tpts)
{
    Vec4f res{lhs.tpts};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tptt)
{
    Vec4f res{lhs.tptt};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tptp)
{
    Vec4f res{lhs.tptp};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tptq)
{
    Vec4f res{lhs.tptq};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tpps)
{
    Vec4f res{lhs.tpps};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tppt)
{
    Vec4f res{lhs.tppt};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tppp)
{
    Vec4f res{lhs.tppp};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tppq)
{
    Vec4f res{lhs.tppq};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tpqs)
{
    Vec4f res{lhs.tpqs};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tpqt)
{
    Vec4f res{lhs.tpqt};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tpqp)
{
    Vec4f res{lhs.tpqp};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tpqq)
{
    Vec4f res{lhs.tpqq};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqss)
{
    Vec4f res{lhs.tqss};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqst)
{
    Vec4f res{lhs.tqst};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqsp)
{
    Vec4f res{lhs.tqsp};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqsq)
{
    Vec4f res{lhs.tqsq};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqts)
{
    Vec4f res{lhs.tqts};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqtt)
{
    Vec4f res{lhs.tqtt};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqtp)
{
    Vec4f res{lhs.tqtp};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqtq)
{
    Vec4f res{lhs.tqtq};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqps)
{
    Vec4f res{lhs.tqps};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqpt)
{
    Vec4f res{lhs.tqpt};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqpp)
{
    Vec4f res{lhs.tqpp};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqpq)
{
    Vec4f res{lhs.tqpq};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqqs)
{
    Vec4f res{lhs.tqqs};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqqt)
{
    Vec4f res{lhs.tqqt};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqqp)
{
    Vec4f res{lhs.tqqp};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_tqqq)
{
    Vec4f res{lhs.tqqq};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_psss)
{
    Vec4f res{lhs.psss};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_psst)
{
    Vec4f res{lhs.psst};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pssp)
{
    Vec4f res{lhs.pssp};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pssq)
{
    Vec4f res{lhs.pssq};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_psts)
{
    Vec4f res{lhs.psts};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pstt)
{
    Vec4f res{lhs.pstt};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pstp)
{
    Vec4f res{lhs.pstp};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pstq)
{
    Vec4f res{lhs.pstq};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_psps)
{
    Vec4f res{lhs.psps};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pspt)
{
    Vec4f res{lhs.pspt};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pspp)
{
    Vec4f res{lhs.pspp};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pspq)
{
    Vec4f res{lhs.pspq};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_psqs)
{
    Vec4f res{lhs.psqs};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_psqt)
{
    Vec4f res{lhs.psqt};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_psqp)
{
    Vec4f res{lhs.psqp};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_psqq)
{
    Vec4f res{lhs.psqq};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ptss)
{
    Vec4f res{lhs.ptss};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ptst)
{
    Vec4f res{lhs.ptst};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ptsp)
{
    Vec4f res{lhs.ptsp};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ptsq)
{
    Vec4f res{lhs.ptsq};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ptts)
{
    Vec4f res{lhs.ptts};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pttt)
{
    Vec4f res{lhs.pttt};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pttp)
{
    Vec4f res{lhs.pttp};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pttq)
{
    Vec4f res{lhs.pttq};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ptps)
{
    Vec4f res{lhs.ptps};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ptpt)
{
    Vec4f res{lhs.ptpt};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ptpp)
{
    Vec4f res{lhs.ptpp};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ptpq)
{
    Vec4f res{lhs.ptpq};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ptqs)
{
    Vec4f res{lhs.ptqs};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ptqt)
{
    Vec4f res{lhs.ptqt};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ptqp)
{
    Vec4f res{lhs.ptqp};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ptqq)
{
    Vec4f res{lhs.ptqq};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ppss)
{
    Vec4f res{lhs.ppss};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ppst)
{
    Vec4f res{lhs.ppst};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ppsp)
{
    Vec4f res{lhs.ppsp};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ppsq)
{
    Vec4f res{lhs.ppsq};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ppts)
{
    Vec4f res{lhs.ppts};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pptt)
{
    Vec4f res{lhs.pptt};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pptp)
{
    Vec4f res{lhs.pptp};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pptq)
{
    Vec4f res{lhs.pptq};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ppps)
{
    Vec4f res{lhs.ppps};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pppt)
{
    Vec4f res{lhs.pppt};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pppp)
{
    Vec4f res{lhs.pppp};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pppq)
{
    Vec4f res{lhs.pppq};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ppqs)
{
    Vec4f res{lhs.ppqs};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ppqt)
{
    Vec4f res{lhs.ppqt};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ppqp)
{
    Vec4f res{lhs.ppqp};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_ppqq)
{
    Vec4f res{lhs.ppqq};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqss)
{
    Vec4f res{lhs.pqss};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqst)
{
    Vec4f res{lhs.pqst};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqsp)
{
    Vec4f res{lhs.pqsp};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqsq)
{
    Vec4f res{lhs.pqsq};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqts)
{
    Vec4f res{lhs.pqts};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqtt)
{
    Vec4f res{lhs.pqtt};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqtp)
{
    Vec4f res{lhs.pqtp};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqtq)
{
    Vec4f res{lhs.pqtq};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqps)
{
    Vec4f res{lhs.pqps};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqpt)
{
    Vec4f res{lhs.pqpt};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqpp)
{
    Vec4f res{lhs.pqpp};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqpq)
{
    Vec4f res{lhs.pqpq};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqqs)
{
    Vec4f res{lhs.pqqs};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqqt)
{
    Vec4f res{lhs.pqqt};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqqp)
{
    Vec4f res{lhs.pqqp};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_pqqq)
{
    Vec4f res{lhs.pqqq};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qsss)
{
    Vec4f res{lhs.qsss};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qsst)
{
    Vec4f res{lhs.qsst};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qssp)
{
    Vec4f res{lhs.qssp};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qssq)
{
    Vec4f res{lhs.qssq};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qsts)
{
    Vec4f res{lhs.qsts};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qstt)
{
    Vec4f res{lhs.qstt};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qstp)
{
    Vec4f res{lhs.qstp};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qstq)
{
    Vec4f res{lhs.qstq};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qsps)
{
    Vec4f res{lhs.qsps};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qspt)
{
    Vec4f res{lhs.qspt};
    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qspp)
{
    Vec4f res{lhs.qspp};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qspq)
{
    Vec4f res{lhs.qspq};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qsqs)
{
    Vec4f res{lhs.qsqs};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qsqt)
{
    Vec4f res{lhs.qsqt};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qsqp)
{
    Vec4f res{lhs.qsqp};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qsqq)
{
    Vec4f res{lhs.qsqq};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qtss)
{
    Vec4f res{lhs.qtss};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qtst)
{
    Vec4f res{lhs.qtst};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qtsp)
{
    Vec4f res{lhs.qtsp};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qtsq)
{
    Vec4f res{lhs.qtsq};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qtts)
{
    Vec4f res{lhs.qtts};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qttt)
{
    Vec4f res{lhs.qttt};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qttp)
{
    Vec4f res{lhs.qttp};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qttq)
{
    Vec4f res{lhs.qttq};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qtps)
{
    Vec4f res{lhs.qtps};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qtpt)
{
    Vec4f res{lhs.qtpt};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qtpp)
{
    Vec4f res{lhs.qtpp};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qtpq)
{
    Vec4f res{lhs.qtpq};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qtqs)
{
    Vec4f res{lhs.qtqs};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qtqt)
{
    Vec4f res{lhs.qtqt};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qtqp)
{
    Vec4f res{lhs.qtqp};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qtqq)
{
    Vec4f res{lhs.qtqq};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qpss)
{
    Vec4f res{lhs.qpss};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qpst)
{
    Vec4f res{lhs.qpst};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qpsp)
{
    Vec4f res{lhs.qpsp};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qpsq)
{
    Vec4f res{lhs.qpsq};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qpts)
{
    Vec4f res{lhs.qpts};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qptt)
{
    Vec4f res{lhs.qptt};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qptp)
{
    Vec4f res{lhs.qptp};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qptq)
{
    Vec4f res{lhs.qptq};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qpps)
{
    Vec4f res{lhs.qpps};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qppt)
{
    Vec4f res{lhs.qppt};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qppp)
{
    Vec4f res{lhs.qppp};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qppq)
{
    Vec4f res{lhs.qppq};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qpqs)
{
    Vec4f res{lhs.qpqs};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qpqt)
{
    Vec4f res{lhs.qpqt};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qpqp)
{
    Vec4f res{lhs.qpqp};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qpqq)
{
    Vec4f res{lhs.qpqq};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqss)
{
    Vec4f res{lhs.qqss};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqst)
{
    Vec4f res{lhs.qqst};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqsp)
{
    Vec4f res{lhs.qqsp};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqsq)
{
    Vec4f res{lhs.qqsq};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqts)
{
    Vec4f res{lhs.qqts};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqtt)
{
    Vec4f res{lhs.qqtt};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqtp)
{
    Vec4f res{lhs.qqtp};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqtq)
{
    Vec4f res{lhs.qqtq};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqps)
{
    Vec4f res{lhs.qqps};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqpt)
{
    Vec4f res{lhs.qqpt};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqpp)
{
    Vec4f res{lhs.qqpp};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqpq)
{
    Vec4f res{lhs.qqpq};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqqs)
{
    Vec4f res{lhs.qqqs};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 4.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqqt)
{
    Vec4f res{lhs.qqqt};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 3.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqqp)
{
    Vec4f res{lhs.qqqp};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 2.0f);
}

TEST_F(Vec4SwizzleFixture, test_vector_creation_from_qqqq)
{
    Vec4f res{lhs.qqqq};

    ASSERT_FLOAT_EQ(res.s, 1.0f);
    ASSERT_FLOAT_EQ(res.t, 1.0f);
    ASSERT_FLOAT_EQ(res.p, 1.0f);
    ASSERT_FLOAT_EQ(res.q, 1.0f);
}

