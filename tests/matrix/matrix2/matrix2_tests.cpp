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

    void expect_matrixf_eq(const Mat2f &act, const Mat2f &exp)
    {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                EXPECT_FLOAT_EQ(act[i][j], exp[i][j]) << "Expectation indices:\n" << "row: " << i
                                                      << "\ncolumn: " << j << std::endl;
            }
        }
    }
};

//TEST_F(Matrix2Fixture, test_operator_matrix_mult_matrix)
//{
////    Mat2f res{m1 * m2};
////
////    Mat2f exp{8, 5, 20, 13};
////    float s[2]{1, 2};
////    exp.set_row_vector(s, -1);
////    EXPECT_EQ(res, exp);
//}

TEST_F(Matrix2Fixture, test_operator_assignment)
{
    m1 = m2;

    expect_matrixf_eq(m2, m1);
}
