#include "gtest/gtest.h"
#include "helmath.h"

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

TEST_F(Matrix3Fixture, test_set_row_vector_with_coordinate_param)
{
    m1.set_row_vector(0, 0, 0, 2);

    Mat3f exp = Mat3f{1.0f, 2.0f, 3.0f,
                      4.0f, 5.0f, 6.0f,
                      0.0f, 0.0f, 0.0f};

    expect_matrixf_eq(m1, exp);
}

TEST_F(Matrix3Fixture, test_set_row_vector_with_vector_param)
{
    m1.set_row_vector(Vec3f{0.0f, 0.0f, 0.0f}, 1);

    Mat3f exp = Mat3f{1.0f, 2.0f, 3.0f,
                      0.0f, 0.0f, 0.0f,
                      7.0f, 8.0f, 9.0f};

    expect_matrixf_eq(m1, exp);
}

TEST_F(Matrix3Fixture, test_set_row_vector_with_array_param)
{
    float arr[]{0.0f, 0.0f, 0.0f};

    m1.set_row_vector(arr, 0);

    Mat3f exp = Mat3f{0.0f, 0.0f, 0.0f,
                      4.0f, 5.0f, 6.0f,
                      7.0f, 8.0f, 9.0f};

    expect_matrixf_eq(m1, exp);
}

TEST_F(Matrix3Fixture, test_set_row_vector_with_pointer_param)
{
    float *v = new float[3];

    v[0] = 0.0f;
    v[1] = 0.0f;
    v[2] = 0.0f;

    m1.set_row_vector(v, 0);

    Mat3f exp = Mat3f{0.0f, 0.0f, 0.0f,
                      4.0f, 5.0f, 6.0f,
                      7.0f, 8.0f, 9.0f};

    expect_matrixf_eq(m1, exp);

    delete[] v;
}

TEST_F(Matrix3Fixture, test_set_column_vector_with_coordinate_param)
{
    m1.set_column_vector(0.0f, 0.0f, 0.0f, 1);

    Mat3f exp{1.0f, 0.0f, 3.0f,
              4.0f, 0.0f, 6.0f,
              7.0f, 0.0f, 9.0f};

    expect_matrixf_eq(m1, exp);
}

TEST_F(Matrix3Fixture, test_set_column_vector_with_vector_param)
{
    m1.set_column_vector(Vec3f{0.0f, 0.0f, 0.0f}, 2);

    Mat3f exp{1.0f, 2.0f, 0.0f,
              4.0f, 5.0f, 0.0f,
              7.0f, 8.0f, 0.0f};

    expect_matrixf_eq(m1, exp);
}

TEST_F(Matrix3Fixture, test_set_column_vector_with_array_param)
{
    float arr[]{0.0f, 0.0f, 0.0f};

    m1.set_column_vector(arr, 0);

    Mat3f exp{0.0, 2.0f, 3.0f,
              0.0f, 5.0f, 6.0f,
              0.0f, 8.0f, 9.0f};

    expect_matrixf_eq(m1, exp);
}

TEST_F(Matrix3Fixture, test_set_colum_vector_with_pointer_param)
{
    float *v = new float[3];

    v[0] = 0.0f;
    v[1] = 0.0f;
    v[2] = 0.0f;

    m1.set_column_vector(v, 1);

    Mat3f exp{1.0f, 0.0f, 3.0f,
              4.0f, 0.0f, 6.0f,
              7.0f, 0.0f, 9.0f};

    expect_matrixf_eq(m1, exp);

    delete[] v;
}

TEST_F(Matrix3Fixture, test_translate_with_coordinate_param)
{
    m1.translate(1.0f, 1.0f);

    Mat3f exp{1.0f, 2.0f, 6.0f,
              4.0f, 5.0f, 15.0f,
              7.0f, 8.0f, 24.0f};

    expect_matrixf_eq(m1, exp);
}

TEST_F(Matrix3Fixture, test_translate_with_vector_param)
{
    m1.translate(Vec2f{1.0f, 1.0f});

    Mat3f exp{1.0f, 2.0f, 6.0f,
              4.0f, 5.0f, 15.0f,
              7.0f, 8.0f, 24.0f};

    expect_matrixf_eq(m1, exp);
}

TEST_F(Matrix3Fixture, test_translate_with_array_param)
{
    float arr[]{1.0f, 1.0f};
    m1.translate(arr);

    Mat3f exp{1.0f, 2.0f, 6.0f,
              4.0f, 5.0f, 15.0f,
              7.0f, 8.0f, 24.0f};

    expect_matrixf_eq(m1, exp);
}

TEST_F(Matrix3Fixture, test_translate_with_pointer_param)
{
    float *v = new float[2];

    v[0] = 1.0f;
    v[1] = 1.0f;

    m1.translate(v);

    Mat3f exp{1.0f, 2.0f, 6.0f,
              4.0f, 5.0f, 15.0f,
              7.0f, 8.0f, 24.0f};

    expect_matrixf_eq(m1, exp);

    delete[] v;
}

TEST_F(Matrix3Fixture, test_translated_with_coordinate_param)
{
    Mat3f res = m1.translated(1.0f, 1.0f);

    Mat3f exp{1.0f, 2.0f, 6.0f,
              4.0f, 5.0f, 15.0f,
              7.0f, 8.0f, 24.0f};

    expect_matrixf_eq(res, exp);
}

TEST_F(Matrix3Fixture, test_tranlated_with_vector_param)
{
    Mat3f res = m1.translated(Vec2f{1.0f, 1.0f});

    Mat3f exp{1.0f, 2.0f, 6.0f,
              4.0f, 5.0f, 15.0f,
              7.0f, 8.0f, 24.0f};

    expect_matrixf_eq(res, exp);
}

TEST_F(Matrix3Fixture, test_translated_with_array_param)
{
    float arr[]{1.0f, 1.0f};
    Mat3f res = m1.translated(arr);

    Mat3f exp{1.0f, 2.0f, 6.0f,
              4.0f, 5.0f, 15.0f,
              7.0f, 8.0f, 24.0f};

    expect_matrixf_eq(res, exp);
}

TEST_F(Matrix3Fixture, test_translated_with_pointer_param)
{
    float *v = new float[2];

    v[0] = 1.0f;
    v[1] = 1.0f;

    Mat3f res = m1.translated(v);

    Mat3f exp{1.0f, 2.0f, 6.0f,
              4.0f, 5.0f, 15.0f,
              7.0f, 8.0f, 24.0f};

    expect_matrixf_eq(res, exp);

    delete[] v;
}

TEST_F(Matrix3Fixture, test_set_translation_with_coordinate_param)
{
    m1.set_translation(1.0f, 1.0f);

    Mat3f exp{1.0f, 2.0f, 1.0f,
              4.0f, 5.0f, 1.0f,
              7.0f, 8.0f, 1.0f};

    expect_matrixf_eq(m1, exp);
}

TEST_F(Matrix3Fixture, test_set_translation_with_vector_param)
{
    m1.set_translation(Vec2f{1.0f, 1.0f});

    Mat3f exp = Mat3f{1.0f, 2.0f, 1.0f,
                      4.0f, 5.0f, 1.0f,
                      7.0f, 8.0f, 1.0f};

    expect_matrixf_eq(m1, exp);
}

TEST_F(Matrix3Fixture, test_set_translation_with_array_param)
{
    float arr[]{1.0f, 1.0f};
    m1.set_translation(arr);

    Mat3f exp{1.0f, 2.0f, 1.0f,
              4.0f, 5.0f, 1.0f,
              7.0f, 8.0f, 1.0f};

    expect_matrixf_eq(m1, exp);
}

TEST_F(Matrix3Fixture, test_set_translation_with_pointer_param)
{
    float *v = new float[2];

    v[0] = 1.0f;
    v[1] = 1.0f;

    m1.set_translation(v);

    Mat3f exp{1.0f, 2.0f, 1.0f,
              4.0f, 5.0f, 1.0f,
              7.0f, 8.0f, 1.0f};

    expect_matrixf_eq(m1, exp);

    delete[] v;
}

TEST_F(Matrix3Fixture, test_rotate_with_coordinate_param)
{
    //TODO: Problem with rotation.
//    Mat3f mat;
//    mat.rotate(0, 0, 1, deg_to_radf(-90.0f));
//
//    Vec3f vec{0.0, 1.0, 0.0};
//
//    Vec3f res = mat * vec;
//
//    mat.rotate(0, 0, 1, deg_to_radf(-90.0f));
//
//    res = mat * res;

//    EXPECT_FLOAT_EQ(res.x, 0.0f);
}

TEST_F(Matrix3Fixture, test_scale_with_coordinate_param)
{
    m1.scale(2.0f, 2.0f, 2.0f);

    Mat3f exp{2.0f, 4.0f, 6.0f,
              8.0f, 10.0f, 12.0f,
              14.0f, 16.0f, 18.0f};

    expect_matrixf_eq(m1, exp);
}

TEST_F(Matrix3Fixture, test_scale_with_vector_param)
{
    m1.scale(Vec3f{2.0f, 2.0f, 2.0f});

    Mat3f exp{2.0f, 4.0f, 6.0f,
              8.0f, 10.0f, 12.0f,
              14.0f, 16.0f, 18.0f};

    expect_matrixf_eq(m1, exp);
}

TEST_F(Matrix3Fixture, test_scale_with_array_param)
{
    float arr[]{2.0f, 2.0f, 2.0f};
    m1.scale(arr);

    Mat3f exp{2.0f, 4.0f, 6.0f,
              8.0f, 10.0f, 12.0f,
              14.0f, 16.0f, 18.0f};

    expect_matrixf_eq(m1, exp);
}

TEST_F(Matrix3Fixture, test_scale_with_pointer_param)
{
    float *v = new float[3];

    v[0] = 2.0f;
    v[1] = 2.0f;
    v[2] = 2.0f;

    m1.scale(v);

    Mat3f exp{2.0f, 4.0f, 6.0f,
              8.0f, 10.0f, 12.0f,
              14.0f, 16.0f, 18.0f};

    expect_matrixf_eq(m1, exp);

    delete[] v;
}

TEST_F(Matrix3Fixture, test_scaled_with_coordinate_param)
{
    Mat3f res = m1.scaled(2.0f, 2.0f, 2.0f);

    Mat3f exp{2.0f, 4.0f, 6.0f,
              8.0f, 10.0f, 12.0f,
              14.0f, 16.0f, 18.0f};

    expect_matrixf_eq(res, exp);
}

TEST_F(Matrix3Fixture, test_scaled_with_vector_param)
{
    Mat3f res = m1.scaled(Vec3f{2.0f, 2.0f, 2.0f});

    Mat3f exp{2.0f, 4.0f, 6.0f,
              8.0f, 10.0f, 12.0f,
              14.0f, 16.0f, 18.0f};

    expect_matrixf_eq(res, exp);
}

TEST_F(Matrix3Fixture, test_scaled_with_array_param)
{
    float arr[]{2.0f, 2.0f, 2.0f};
    Mat3f res = m1.scaled(arr);

    Mat3f exp{2.0f, 4.0f, 6.0f,
              8.0f, 10.0f, 12.0f,
              14.0f, 16.0f, 18.0f};

    expect_matrixf_eq(res, exp);
}

TEST_F(Matrix3Fixture, test_scaled_with_pointer_param)
{
    float *v = new float[3];

    v[0] = 2.0f;
    v[1] = 2.0f;
    v[2] = 2.0f;

    Mat3f res = m1.scaled(v);

    Mat3f exp{2.0f, 4.0f, 6.0f,
              8.0f, 10.0f, 12.0f,
              14.0f, 16.0f, 18.0f};

    expect_matrixf_eq(res, exp);

    delete[] v;
}

TEST_F(Matrix3Fixture, test_set_scaling_with_coordinate_param)
{
    m1.set_scaling(2.0f, 2.0f, 2.0f);

    Mat3f exp{2.0f, 2.0f, 3.0f,
              4.0f, 2.0f, 6.0f,
              7.0f, 8.0f, 2.0f};

    expect_matrixf_eq(m1, exp);
}

TEST_F(Matrix3Fixture, test_set_scaling_with_vector_param)
{
    m1.set_scaling(Vec3f{2.0f, 2.0f, 2.0f});

    Mat3f exp{2.0f, 2.0f, 3.0f,
              4.0f, 2.0f, 6.0f,
              7.0f, 8.0f, 2.0f};

    expect_matrixf_eq(m1, exp);
}

TEST_F(Matrix3Fixture, test_set_scaling_with_array_param)
{
    float arr[]{2.0f, 2.0f, 2.0f};
    m1.set_scaling(arr);

    Mat3f exp{2.0f, 2.0f, 3.0f,
              4.0f, 2.0f, 6.0f,
              7.0f, 8.0f, 2.0f};

    expect_matrixf_eq(m1, exp);
}

TEST_F(Matrix3Fixture, test_set_scaling_with_pointer_param)
{
    float *v = new float[3];

    v[0] = 2.0f;
    v[1] = 2.0f;
    v[2] = 2.0f;

    m1.set_scaling(v);

    Mat3f exp{2.0f, 2.0f, 3.0f,
              4.0f, 2.0f, 6.0f,
              7.0f, 8.0f, 2.0f};

    expect_matrixf_eq(m1, exp);

    delete[] v;
}

TEST_F(Matrix3Fixture, test_transpose)
{
    m1.transpose();

    Mat3f exp{1.0f, 4.0f, 7.0f,
              2.0f, 5.0f, 8.0f,
              3.0f, 6.0f, 9.0f};

    expect_matrixf_eq(m1, exp);
}

TEST_F(Matrix3Fixture, test_transposed)
{
    Mat3f res{m1.transposed()};

    Mat3f exp{1.0f, 4.0f, 7.0f,
              2.0f, 5.0f, 8.0f,
              3.0f, 6.0f, 9.0f};

    expect_matrixf_eq(res, exp);
}

TEST_F(Matrix3Fixture, test_implicit_conversion_to_pointer)
{
    float *f = m1;

    EXPECT_FLOAT_EQ(*(f + 5), 6.0f);
}

TEST_F(Matrix3Fixture, test_subscript_operator)
{
    float f = m1[1][1];

    EXPECT_FLOAT_EQ(f, 5.0f);
}

TEST_F(Matrix3Fixture, test_operator_matrix_assignment_matrix3)
{
    Mat3f res;
    res = m1;

    expect_matrixf_eq(res, m1);
}

TEST_F(Matrix3Fixture, test_operator_matrix_assignment_matrix2)
{
    Mat2f m;

    m1 = m;

    Mat3f exp{1.0f, 0.0f, 3.0f,
              0.0f, 1.0f, 6.0f,
              7.0f, 8.0f, 9.0f};

    expect_matrixf_eq(m1, exp);
}

TEST_F(Matrix3Fixture, test_operator_matrix_plus_matrix)
{
    Mat3f res{m1 + Mat3f{1.0f, 1.0f, 1.0f,
                         1.0f, 1.0f, 1.0f,
                         1.0f, 1.0f, 1.0f}};

    Mat3f exp{2.0f, 3.0f, 4.0f,
              5.0f, 6.0f, 7.0f,
              8.0f, 9.0f, 10.0f};

    expect_matrixf_eq(res, exp);
}

TEST_F(Matrix3Fixture, test_operator_matrix_minus_matrix)
{
    Mat3f res{m1 - Mat3f{1.0f, 1.0f, 1.0f,
                         1.0f, 1.0f, 1.0f,
                         1.0f, 1.0f, 1.0f}};

    Mat3f exp{0.0f, 1.0f, 2.0f,
              3.0f, 4.0f, 5.0f,
              6.0f, 7.0f, 8.0f};

    expect_matrixf_eq(res, exp);
}

TEST_F(Matrix3Fixture, test_operator_matrix_mult_matrix)
{
    Mat3f res{m1 * m2};

    Mat3f exp{30.0f, 24.0f, 18.0f,
              84.0f, 69.0f, 54.0f,
              138.0f, 114.0f, 90.0f};

    expect_matrixf_eq(res, exp);
}

TEST_F(Matrix3Fixture, test_operator_matrix_plus_equals_matrix)
{
    m1 += Mat3f{1.0f, 1.0f, 1.0f,
                1.0f, 1.0f, 1.0f,
                1.0f, 1.0f, 1.0f};

    Mat3f exp{2.0f, 3.0f, 4.0f,
              5.0f, 6.0f, 7.0f,
              8.0f, 9.0f, 10.0f};

    expect_matrixf_eq(m1, exp);
}

TEST_F(Matrix3Fixture, test_operator_matrix_minus_equals_matrix)
{
    m1 -= Mat3f{1.0f, 1.0f, 1.0f,
                1.0f, 1.0f, 1.0f,
                1.0f, 1.0f, 1.0f};

    Mat3f exp{0.0f, 1.0f, 2.0f,
              3.0f, 4.0f, 5.0f,
              6.0f, 7.0f, 8.0f};

    expect_matrixf_eq(m1, exp);
}

TEST_F(Matrix3Fixture, test_operator_matrix_plus_scalar)
{
    Mat3f res{m1 + 1.0f};

    Mat3f exp{2.0f, 3.0f, 4.0f,
              5.0f, 6.0f, 7.0f,
              8.0f, 9.0f, 10.0f};

    expect_matrixf_eq(res, exp);
}

TEST_F(Matrix3Fixture, test_operator_matrix_minus_scalar)
{
    Mat3f res{m1 - 1.0f};

    Mat3f exp{0.0f, 1.0f, 2.0f,
              3.0f, 4.0f, 5.0f,
              6.0f, 7.0f, 8.0f};

    expect_matrixf_eq(res, exp);
}

TEST_F(Matrix3Fixture, test_operator_matrix_mult_scalar)
{
    Mat3f res{m1 * 2.0f};

    Mat3f exp{2.0f, 4.0f, 6.0f,
              8.0f, 10.0f, 12.0f,
              14.0f, 16.0f, 18.0f};

    expect_matrixf_eq(res, exp);
}

TEST_F(Matrix3Fixture, test_operator_matrix_equals_matrix)
{
    Mat3f mat;
    Mat3f exp;

    EXPECT_TRUE(mat == exp);
}

TEST_F(Matrix3Fixture, test_operator_matrix_not_equals_matrix)
{
    Mat3f mat;
    Mat3f exp;
    exp.set_row_vector(Vec3f{1, 2, 3}, 0);

    EXPECT_TRUE(mat != exp);
}

TEST_F(Matrix3Fixture, test_operator_matrix_mult_vector4)
{
    Mat3f mat;
    mat.translate(Vec2f{1, 1});

    Vec3f res{mat * Vec3f{1, 1, 1}};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
}
