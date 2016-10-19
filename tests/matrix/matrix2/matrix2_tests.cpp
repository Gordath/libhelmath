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

    void expect_matrix2f_eq(const Mat2f &act, const Mat2f &exp)
    {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                EXPECT_FLOAT_EQ(act[i][j], exp[i][j]) << "Expectation indices:\n" << "row: " << i
                                                      << "\ncolumn: " << j << std::endl;
            }
        }
    }
};

TEST_F(Matrix2Fixture, test_determinant)
{
    float res{m1.determinant()};

    EXPECT_FLOAT_EQ(res, -2.0f);
}

TEST_F(Matrix2Fixture, test_operator_matrix_plus_equals_matrix)
{
    m1 += m2;

    Mat2f exp{5, 5,
              5, 5};

    expect_matrix2f_eq(m1, exp);
}

TEST_F(Matrix2Fixture, test_operator_matrix_minus_equal_matrix)
{
    m1 -= m2;

    Mat2f exp{-3, -1,
              1, 3};

    expect_matrix2f_eq(m1, exp);
}

TEST_F(Matrix2Fixture, test_operator_matrix_mult_equals_matrix)
{
    m1 *= m2;

    Mat2f exp{8, 5,
              20, 13};

    expect_matrix2f_eq(m1, exp);
}

TEST_F(Matrix2Fixture, test_operator_matrix_plus_equals_scalar)
{
    m1 += 2.0f;

    Mat2f exp{3.0f, 4.0f,
              5.0f, 6.0f};

    expect_matrix2f_eq(m1, exp);
}

TEST_F(Matrix2Fixture, test_operator_matrix_minus_equals_scalar)
{
    m1 -= 2.0f;

    Mat2f exp{-1.0f, 0.0f,
              1.0f, 2.0f};

    expect_matrix2f_eq(m1, exp);
}

TEST_F(Matrix2Fixture, test_operator_matrix_mult_equals_scalar)
{
    m1 *= 2.0f;

    Mat2f exp{2.0f, 4.0f,
              6.0f, 8.0f};

    expect_matrix2f_eq(m1, exp);
}

TEST_F(Matrix2Fixture, test_operator_matrix_div_equals_scalar)
{
    m1 /= 2.0f;

    Mat2f exp{0.5, 1.0f,
              1.5f, 2.0f};

    expect_matrix2f_eq(m1, exp);
}

TEST_F(Matrix2Fixture, test_operator_matrix_plus_matrix)
{
    Mat2f res{m1 + m2};

    Mat2f exp{5.0f, 5.0f,
              5.0f, 5.0f};

    expect_matrix2f_eq(res, exp);
}

TEST_F(Matrix2Fixture, test_operator_matrix_minus_matrix)
{
    Mat2f res{m2 - m1};

    Mat2f exp{3.0f, 1.0f,
              -1.0f, -3.0f};

    expect_matrix2f_eq(res, exp);
}

TEST_F(Matrix2Fixture, test_operator_matrix_mult_matrix)
{
    Mat2f res{m1 * m2};

    Mat2f exp{8, 5,
              20, 13};

    expect_matrix2f_eq(res, exp);
}

TEST_F(Matrix2Fixture, test_operator_matrix_plus_scalar)
{
    Mat2f res{m1 + 2.0f};

    Mat2f exp{3.0f, 4.0f,
              5.0f, 6.0f};

    expect_matrix2f_eq(res, exp);
}

TEST_F(Matrix2Fixture, test_operator_scalar_plus_matrix)
{
    Mat2f res{2.0f + m1};

    Mat2f exp{3.0f, 4.0f,
              5.0f, 6.0f};

    expect_matrix2f_eq(res, exp);
}

TEST_F(Matrix2Fixture, test_operator_matrix_minus_scalar)
{
    Mat2f res{m1 - 2.0f};

    Mat2f exp{-1.0f, 0.0f,
              1.0f, 2.0f};

    expect_matrix2f_eq(res, exp);
}

TEST_F(Matrix2Fixture, test_operator_scalar_minus_matrix)
{
    Mat2f res{2.0f - m1};

    Mat2f exp{-1.0f, 0.0f,
              1.0f, 2.0f};

    expect_matrix2f_eq(res, exp);
}

TEST_F(Matrix2Fixture, test_operator_matrix_mult_scalar)
{
    Mat2f res{m1 * 2.0f};

    Mat2f exp{2.0f, 4.0f,
              6.0f, 8.0f};

    expect_matrix2f_eq(res, exp);
}

TEST_F(Matrix2Fixture, test_operator_scalar_mult_matrix)
{
    Mat2f res{2.0f * m1};

    Mat2f exp{2.0f, 4.0f,
              6.0f, 8.0f};

    expect_matrix2f_eq(res, exp);
}

TEST_F(Matrix2Fixture, test_operator_matrix_div_scalar)
{
    Mat2f res{m1 / 2.0f};

    Mat2f exp{0.5, 1.0f,
              1.5f, 2.0f};

    expect_matrix2f_eq(res, exp);
}

TEST_F(Matrix2Fixture, test_operator_scalar_div_matrix)
{
    Mat2f res{2.0f / m1};

    Mat2f exp{0.5, 1.0f,
              1.5f, 2.0f};

    expect_matrix2f_eq(res, exp);
}
