#include "gtest/gtest.h"
#include "matrix.h"

using namespace hm;

class Matrix3Fixture : public ::testing::Test {
protected:
    Mat3f m1;
    Mat3f m2;

    void SetUp() override
    {
        m1 = Mat3f{1, 2, 3,
                   4, 5, 6,
                   7, 8, 9};

        m2 = Mat3f{9, 8, 7,
                   6, 5, 4,
                   3, 2, 1};
    }

    void expect_matrixf_eq(const Mat3f &act, const Mat3f &exp)
    {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                EXPECT_FLOAT_EQ(act[i][j], exp[i][j]) << "Expectation indices:\n" << "row: " << i
                                                      << "\ncolumn: " << j << std::endl;
            }
        }
    }
};

TEST_F(Matrix3Fixture, test_operator_matrix_mult_matrix)
{
    Mat3f res{m1 * m2};

    Mat3f exp{30,  24,  18,
              84,  69,  54,
              138, 114, 90};

    expect_matrixf_eq(res, exp);
}
