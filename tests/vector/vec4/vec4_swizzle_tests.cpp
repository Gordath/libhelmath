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
