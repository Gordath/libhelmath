#include "gtest/gtest.h"
#include "matrix.h"

using namespace hm;

class Matrix2Fixture : public ::testing::Test {
protected:
    Mat2f m1;
    Mat2f m2;

    void SetUp() override
    {
        m1 = Mat2f{1, 2,
                   3, 4};

        m2 = Mat2f{4, 3,
                   2, 1};
    }
};

TEST_F(Matrix2Fixture, test_operator_matrix_mult_matrix)
{
//    Mat2f res{m1 * m2};
//
//    Mat2f exp{8, 5, 20, 13};
//    float s[2]{1, 2};
//    exp.set_row_vector(s, -1);
//    EXPECT_EQ(res, exp);
}
