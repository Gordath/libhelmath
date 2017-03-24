#include "gtest/gtest.h"
#include "matrix.h"

using namespace hm;

class Matrix4Fixture : public ::testing::Test {
protected:
    Mat4f m1;
    Mat4f m2;

    void SetUp() override
    {
        m1 = Mat4f{1.0f, 2.0f, 3.0f, 4.0f,
                   5.0f, 6.0f, 7.0f, 8.0f,
                   9.0f, 10.0f, 11.0f, 12.0f,
                   13.0f, 14.0f, 15.0f, 16.0f};

        m2 = Mat4f{16.0f, 15.0f, 14.0f, 13.0f,
                   12.0f, 11.0f, 10.0f, 9.0f,
                   8.0f, 7.0f, 6.0f, 5.0f,
                   4.0f, 3.0f, 2.0f, 1.0f};
    }

    void expect_matrix4f_eq(const Mat4f &act, const Mat4f &exp)
    {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                EXPECT_FLOAT_EQ(act[i][j], exp[i][j]) << "Expectation indices:\n" << "row: " << i
                                                      << "\ncolumn: " << j << std::endl;
            }
        }
    }

    void expect_matrix3f_eq(const Mat3f &act, const Mat3f &exp)
    {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                EXPECT_FLOAT_EQ(act[i][j], exp[i][j]) << "Expectation indices:\n" << "row: " << i
                                                      << "\ncolumn: " << j << std::endl;
            }
        }
    }
};

TEST_F(Matrix4Fixture, test_set_row_vector_with_coordinate_param)
{
    m1.set_row_vector(0.0f, 0.0f, 0.0f, 0.0f, 1);

    Mat4f exp{1.0f, 2.0f, 3.0f, 4.0f,
              0.0f, 0.0f, 0.0f, 0.0f,
              9.0f, 10.0f, 11.0f, 12.0f,
              13.0f, 14.0f, 15.0f, 16.0f};

    expect_matrix4f_eq(m1, exp);
}

TEST_F(Matrix4Fixture, test_set_row_vector_with_vector_param)
{
    m1.set_row_vector(Vec4f{}, 0);

    Mat4f exp{0.0f, 0.0f, 0.0f, 0.0f,
              5.0f, 6.0f, 7.0f, 8.0f,
              9.0f, 10.0f, 11.0f, 12.0f,
              13.0f, 14.0f, 15.0f, 16.0f};

    expect_matrix4f_eq(m1, exp);
}

TEST_F(Matrix4Fixture, test_set_row_vector_with_array_param)
{
    float arr[]{0.0f, 0.0f, 0.0f, 0.0f};

    m1.set_row_vector(arr, 3);

    Mat4f exp{1.0f, 2.0f, 3.0f, 4.0f,
              5.0f, 6.0f, 7.0f, 8.0f,
              9.0f, 10.0f, 11.0f, 12.0f,
              0.0f, 0.0f, 0.0f, 0.0f};

    expect_matrix4f_eq(m1, exp);
}

TEST_F(Matrix4Fixture, test_set_row_vector_with_pointer_param)
{
    float *v = new float[4];

    v[0] = 0.0f;
    v[1] = 0.0f;
    v[2] = 0.0f;
    v[3] = 0.0f;

    m1.set_row_vector(v, 0);

    Mat4f exp{0.0f, 0.0f, 0.0f, 0.0f,
              5.0f, 6.0f, 7.0f, 8.0f,
              9.0f, 10.0f, 11.0f, 12.0f,
              13.0f, 14.0f, 15.0f, 16.0f};

    expect_matrix4f_eq(m1, exp);

    delete[] v;
}

TEST_F(Matrix4Fixture, test_set_column_vector_with_coordinate_param)
{
    m1.set_column_vector(0.0f, 0.0f, 0.0f, 0.0f, 2);

    Mat4f exp{1.0f, 2.0f, 0.0f, 4.0f,
              5.0f, 6.0f, 0.0f, 8.0f,
              9.0f, 10.0f, 0.0f, 12.0f,
              13.0f, 14.0f, 0.0f, 16.0f};

    expect_matrix4f_eq(m1, exp);
}

TEST_F(Matrix4Fixture, test_set_column_vector_with_vector_param)
{
    m1.set_column_vector(Vec4f{0.0f, 0.0f, 0.0f, 0.0f}, 1);

    Mat4f exp{1.0f, 0.0f, 3.0f, 4.0f,
              5.0f, 0.0f, 7.0f, 8.0f,
              9.0f, 0.0f, 11.0f, 12.0f,
              13.0f, 0.0f, 15.0f, 16.0f};

    expect_matrix4f_eq(m1, exp);
}

TEST_F(Matrix4Fixture, test_set_column_vector_with_array_param)
{
    float arr[]{0.0f, 0.0f, 0.0f, 0.0f};

    m1.set_column_vector(arr, 0);

    Mat4f exp{0.0f, 2.0f, 3.0f, 4.0f,
              0.0f, 6.0f, 7.0f, 8.0f,
              0.0f, 10.0f, 11.0f, 12.0f,
              0.0f, 14.0f, 15.0f, 16.0f};
}

TEST_F(Matrix4Fixture, test_set_column_vector_with_pointer_param)
{
    float *v = new float[4];

    v[0] = 0.0f;
    v[1] = 0.0f;
    v[2] = 0.0f;
    v[3] = 0.0f;

    m1.set_column_vector(v, 3);

    Mat4f exp{1.0f, 2.0f, 3.0f, 0.0f,
              5.0f, 6.0f, 7.0f, 0.0f,
              9.0f, 10.0f, 11.0f, 0.0f,
              13.0f, 14.0f, 15.0f, 0.0f};

    expect_matrix4f_eq(m1, exp);

    delete[] v;
}

TEST_F(Matrix4Fixture, test_translate_with_coordinate_param)
{
    m1.translate(1.0f, 1.0f, 1.0f);

    Mat4f exp{1.0f, 2.0f, 3.0f, 10.0f,
              5.0f, 6.0f, 7.0f, 26.0f,
              9.0f, 10.0f, 11.0f, 42.0f,
              13.0f, 14.0f, 15.0f, 58.0f};

    expect_matrix4f_eq(m1, exp);
}

TEST_F(Matrix4Fixture, test_translate_with_vector_param)
{
    m1.translate(Vec3f{1.0f, 1.0f, 1.0f});

    Mat4f exp{1.0f, 2.0f, 3.0f, 10.0f,
              5.0f, 6.0f, 7.0f, 26.0f,
              9.0f, 10.0f, 11.0f, 42.0f,
              13.0f, 14.0f, 15.0f, 58.0f};

    expect_matrix4f_eq(m1, exp);
}

TEST_F(Matrix4Fixture, test_translate_with_array_param)
{
    float arr[]{1.0f, 1.0f, 1.0};
    m1.translate(arr);

    Mat4f exp{1.0f, 2.0f, 3.0f, 10.0f,
              5.0f, 6.0f, 7.0f, 26.0f,
              9.0f, 10.0f, 11.0f, 42.0f,
              13.0f, 14.0f, 15.0f, 58.0f};

    expect_matrix4f_eq(m1, exp);
}

TEST_F(Matrix4Fixture, test_translate_with_pointer_param)
{
    float *v = new float[3];

    v[0] = 1.0f;
    v[1] = 1.0f;
    v[2] = 1.0f;

    m1.translate(v);

    Mat4f exp{1.0f, 2.0f, 3.0f, 10.0f,
              5.0f, 6.0f, 7.0f, 26.0f,
              9.0f, 10.0f, 11.0f, 42.0f,
              13.0f, 14.0f, 15.0f, 58.0f};

    expect_matrix4f_eq(m1, exp);

    delete[] v;
}

TEST_F(Matrix4Fixture, test_translated_with_coordinate_param)
{
    Mat4f res = m1.translated(1.0f, 1.0f, 1.0f);

    Mat4f exp{1.0f, 2.0f, 3.0f, 10.0f,
              5.0f, 6.0f, 7.0f, 26.0f,
              9.0f, 10.0f, 11.0f, 42.0f,
              13.0f, 14.0f, 15.0f, 58.0f};

    expect_matrix4f_eq(res, exp);
}

TEST_F(Matrix4Fixture, test_tranlated_with_vector_param)
{
    Mat4f res = m1.translated(Vec3f{1.0f, 1.0f, 1.0f});

    Mat4f exp{1.0f, 2.0f, 3.0f, 10.0f,
              5.0f, 6.0f, 7.0f, 26.0f,
              9.0f, 10.0f, 11.0f, 42.0f,
              13.0f, 14.0f, 15.0f, 58.0f};

    expect_matrix4f_eq(res, exp);
}

TEST_F(Matrix4Fixture, test_translated_with_array_param)
{
    float arr[]{1.0f, 1.0f, 1.0f};
    Mat4f res = m1.translated(arr);

    Mat4f exp{1.0f, 2.0f, 3.0f, 10.0f,
              5.0f, 6.0f, 7.0f, 26.0f,
              9.0f, 10.0f, 11.0f, 42.0f,
              13.0f, 14.0f, 15.0f, 58.0f};

    expect_matrix4f_eq(res, exp);
}

TEST_F(Matrix4Fixture, test_translated_with_pointer_param)
{
    float *v = new float[3];

    v[0] = 1.0f;
    v[1] = 1.0f;
    v[2] = 1.0f;

    Mat4f res = m1.translated(v);

    Mat4f exp{1.0f, 2.0f, 3.0f, 10.0f,
              5.0f, 6.0f, 7.0f, 26.0f,
              9.0f, 10.0f, 11.0f, 42.0f,
              13.0f, 14.0f, 15.0f, 58.0f};

    expect_matrix4f_eq(res, exp);

    delete[] v;
}

TEST_F(Matrix4Fixture, test_set_translation_with_coordinate_param)
{
    m1.set_translation(1.0f, 1.0f, 1.0f);

    Mat4f exp{1.0f, 2.0f, 3.0f, 1.0f,
              5.0f, 6.0f, 7.0f, 1.0f,
              9.0f, 10.0f, 11.0f, 1.0f,
              13.0f, 14.0f, 15.0f, 1.0f};

    expect_matrix4f_eq(m1, exp);
}

TEST_F(Matrix4Fixture, test_set_translation_with_vector_param)
{
    m1.set_translation(Vec3f{1.0f, 1.0f, 1.0f});

    Mat4f exp{1.0f, 2.0f, 3.0f, 1.0f,
              5.0f, 6.0f, 7.0f, 1.0f,
              9.0f, 10.0f, 11.0f, 1.0f,
              13.0f, 14.0f, 15.0f, 1.0f};

    expect_matrix4f_eq(m1, exp);
}

TEST_F(Matrix4Fixture, test_set_translation_with_array_param)
{
    float arr[]{1.0f, 1.0f, 1.0f};
    m1.set_translation(arr);

    Mat4f exp{1.0f, 2.0f, 3.0f, 1.0f,
              5.0f, 6.0f, 7.0f, 1.0f,
              9.0f, 10.0f, 11.0f, 1.0f,
              13.0f, 14.0f, 15.0f, 1.0f};

    expect_matrix4f_eq(m1, exp);
}

TEST_F(Matrix4Fixture, test_set_translation_with_pointer_param)
{
    float *v = new float[3];

    v[0] = 1.0f;
    v[1] = 1.0f;
    v[2] = 1.0f;

    m1.set_translation(v);

    Mat4f exp{1.0f, 2.0f, 3.0f, 1.0f,
              5.0f, 6.0f, 7.0f, 1.0f,
              9.0f, 10.0f, 11.0f, 1.0f,
              13.0f, 14.0f, 15.0f, 1.0f};

    expect_matrix4f_eq(m1, exp);

    delete[] v;
}

TEST_F(Matrix4Fixture, test_scale_with_coordinate_param)
{
    m1.scale(2.0f, 2.0f, 2.0f, 2.0f);

    Mat4f exp{2.0f, 4.0f, 6.0f, 8.0f,
              10.0f, 12.0f, 14.0f, 16.0f,
              18.0f, 20.0f, 22.0f, 24.0f,
              26.0f, 28.0f, 30.0f, 32.0f};

    expect_matrix4f_eq(m1, exp);
}

TEST_F(Matrix4Fixture, test_scale_with_vector_param)
{
    m1.scale(Vec4f{2.0f, 2.0f, 2.0f, 2.0f});

    Mat4f exp{2.0f, 4.0f, 6.0f, 8.0f,
              10.0f, 12.0f, 14.0f, 16.0f,
              18.0f, 20.0f, 22.0f, 24.0f,
              26.0f, 28.0f, 30.0f, 32.0f};

    expect_matrix4f_eq(m1, exp);
}

TEST_F(Matrix4Fixture, test_scale_with_array_param)
{
    float arr[]{2.0f, 2.0f, 2.0f, 2.0f};
    m1.scale(arr);

    Mat4f exp{2.0f, 4.0f, 6.0f, 8.0f,
              10.0f, 12.0f, 14.0f, 16.0f,
              18.0f, 20.0f, 22.0f, 24.0f,
              26.0f, 28.0f, 30.0f, 32.0f};

    expect_matrix4f_eq(m1, exp);
}

TEST_F(Matrix4Fixture, test_scale_with_pointer_param)
{
    float *v = new float[4];

    v[0] = 2.0f;
    v[1] = 2.0f;
    v[2] = 2.0f;
    v[3] = 2.0f;

    m1.scale(v);

    Mat4f exp{2.0f, 4.0f, 6.0f, 8.0f,
              10.0f, 12.0f, 14.0f, 16.0f,
              18.0f, 20.0f, 22.0f, 24.0f,
              26.0f, 28.0f, 30.0f, 32.0f};

    expect_matrix4f_eq(m1, exp);

    delete[] v;
}

TEST_F(Matrix4Fixture, test_scaled_with_coordinate_param)
{
    Mat4f res = m1.scaled(2.0f, 2.0f, 2.0f, 2.0f);

    Mat4f exp{2.0f, 4.0f, 6.0f, 8.0f,
              10.0f, 12.0f, 14.0f, 16.0f,
              18.0f, 20.0f, 22.0f, 24.0f,
              26.0f, 28.0f, 30.0f, 32.0f};

    expect_matrix4f_eq(res, exp);
}

TEST_F(Matrix4Fixture, test_scaled_with_vector_param)
{
    Mat4f res = m1.scaled(Vec4f{2.0f, 2.0f, 2.0f, 2.0f});

    Mat4f exp{2.0f, 4.0f, 6.0f, 8.0f,
              10.0f, 12.0f, 14.0f, 16.0f,
              18.0f, 20.0f, 22.0f, 24.0f,
              26.0f, 28.0f, 30.0f, 32.0f};

    expect_matrix4f_eq(res, exp);
}

TEST_F(Matrix4Fixture, test_scaled_with_array_param)
{
    float arr[]{2.0f, 2.0f, 2.0f, 2.0f};
    Mat4f res = m1.scaled(arr);

    Mat4f exp{2.0f, 4.0f, 6.0f, 8.0f,
              10.0f, 12.0f, 14.0f, 16.0f,
              18.0f, 20.0f, 22.0f, 24.0f,
              26.0f, 28.0f, 30.0f, 32.0f};

    expect_matrix4f_eq(res, exp);
}

TEST_F(Matrix4Fixture, test_scaled_with_pointer_param)
{
    float *v = new float[4];

    v[0] = 2.0f;
    v[1] = 2.0f;
    v[2] = 2.0f;
    v[3] = 2.0f;

    Mat4f res = m1.scaled(v);

    Mat4f exp{2.0f, 4.0f, 6.0f, 8.0f,
              10.0f, 12.0f, 14.0f, 16.0f,
              18.0f, 20.0f, 22.0f, 24.0f,
              26.0f, 28.0f, 30.0f, 32.0f};

    expect_matrix4f_eq(res, exp);

    delete[] v;
}

TEST_F(Matrix4Fixture, test_set_scaling_with_coordinate_param)
{
    m1.set_scaling(2.0f, 2.0f, 2.0f, 2.0f);

    Mat4f exp{2.0f, 2.0f, 3.0f, 4.0f,
              5.0f, 2.0f, 7.0f, 8.0f,
              9.0f, 10.0f, 2.0f, 12.0f,
              13.0f, 14.0f, 15.0f, 2.0f};

    expect_matrix4f_eq(m1, exp);
}

TEST_F(Matrix4Fixture, test_set_scaling_with_vector_param)
{
    m1.set_scaling(Vec4f{2.0f, 2.0f, 2.0f, 2.0f});

    Mat4f exp{2.0f, 2.0f, 3.0f, 4.0f,
              5.0f, 2.0f, 7.0f, 8.0f,
              9.0f, 10.0f, 2.0f, 12.0f,
              13.0f, 14.0f, 15.0f, 2.0f};

    expect_matrix4f_eq(m1, exp);
}

TEST_F(Matrix4Fixture, test_set_scaling_with_array_param)
{
    float arr[]{2.0f, 2.0f, 2.0f, 2.0f};
    m1.set_scaling(arr);

    Mat4f exp = Mat4f{2.0f, 2.0f, 3.0f, 4.0f,
                      5.0f, 2.0f, 7.0f, 8.0f,
                      9.0f, 10.0f, 2.0f, 12.0f,
                      13.0f, 14.0f, 15.0f, 2.0f};

    expect_matrix4f_eq(m1, exp);
}

TEST_F(Matrix4Fixture, test_set_scaling_with_pointer_param)
{
    float *v = new float[4];

    v[0] = 2.0f;
    v[1] = 2.0f;
    v[2] = 2.0f;
    v[3] = 2.0f;

    m1.set_scaling(v);

    Mat4f exp = Mat4f{2.0f, 2.0f, 3.0f, 4.0f,
                      5.0f, 2.0f, 7.0f, 8.0f,
                      9.0f, 10.0f, 2.0f, 12.0f,
                      13.0f, 14.0f, 15.0f, 2.0f};

    expect_matrix4f_eq(m1, exp);

    delete[] v;
}

TEST_F(Matrix4Fixture, test_submatrix)
{
    Mat3f res{m1.submatrix(1, 2)};

    Mat3f exp{1.0f, 2.0f, 4.0f,
              9.0f, 10.0f, 12.0f,
              13.0f, 14.0f, 16.0f};

    expect_matrix3f_eq(res, exp);
}

TEST_F(Matrix4Fixture, test_determinant)
{
    Mat4f mat{1.0f, 3.0f, 5.0f, 9.0f,
              1.0f, 3.0f, 1.0f, 7.0f,
              4.0f, 3.0f, 9.0f, 7.0f,
              5.0f, 2.0f, 0.0f, 9.0f};

    float res{mat.determinant()};

    EXPECT_FLOAT_EQ(res, -376.0f);
}

TEST_F(Matrix4Fixture, test_transpose)
{
    m1.transpose();

    Mat4f exp{1.0f, 5.0f, 9.0f, 13.0f,
              2.0f, 6.0f, 10.0f, 14.0f,
              3.0f, 7.0f, 11.0f, 15.0f,
              4.0f, 8.0f, 12.0f, 16.0f};

    expect_matrix4f_eq(m1, exp);
}

TEST_F(Matrix4Fixture, test_transposed)
{
    Mat4f res{m1.transposed()};

    Mat4f exp{1.0f, 5.0f, 9.0f, 13.0f,
              2.0f, 6.0f, 10.0f, 14.0f,
              3.0f, 7.0f, 11.0f, 15.0f,
              4.0f, 8.0f, 12.0f, 16.0f};

    expect_matrix4f_eq(res, exp);
}

TEST_F(Matrix4Fixture, test_implicit_conversion_to_pointer)
{
    float *f = m1;

    EXPECT_FLOAT_EQ(*(f + 5), 6.0f);
}

TEST_F(Matrix4Fixture, test_subscript_operator)
{
    float f = m1[1][1];

    EXPECT_FLOAT_EQ(f, 6.0f);
}

TEST_F(Matrix4Fixture, test_operator_matrix_assignment_matrix4)
{
    Mat4f res;
    res = m1;

    expect_matrix4f_eq(res, m1);
}

TEST_F(Matrix4Fixture, test_operator_matrix_assignment_matrix3)
{
    Mat3f m;

    m1 = m;

    Mat4f exp{1.0f, 0.0f, 0.0f, 4.0f,
              0.0f, 1.0f, 0.0f, 8.0f,
              0.0f, 0.0f, 1.0f, 12.0f,
              13.0f, 14.0f, 15.0f, 16.0f};

    expect_matrix4f_eq(m1, exp);
}

TEST_F(Matrix4Fixture, test_operator_matrix_plus_matrix)
{
    Mat4f res{m1 + Mat4f{1.0f, 1.0f, 1.0f, 1.0f,
                         1.0f, 1.0f, 1.0f, 1.0f,
                         1.0f, 1.0f, 1.0f, 1.0f,
                         1.0f, 1.0f, 1.0f, 1.0f}};

    Mat4f exp{2.0f, 3.0f, 4.0f, 5.0f,
              6.0f, 7.0f, 8.0f, 9.0f,
              10.0f, 11.0f, 12.0f, 13.0f,
              14.0f, 15.0f, 16.0f, 17.0f};

    expect_matrix4f_eq(res, exp);
}

TEST_F(Matrix4Fixture, test_operator_matrix_minus_matrix)
{
    Mat4f res{m1 - Mat4f{1.0f, 1.0f, 1.0f, 1.0f,
                         1.0f, 1.0f, 1.0f, 1.0f,
                         1.0f, 1.0f, 1.0f, 1.0f,
                         1.0f, 1.0f, 1.0f, 1.0f}};

    Mat4f exp{0.0f, 1.0f, 2.0f, 3.0f,
              4.0f, 5.0f, 6.0f, 7.0f,
              8.0f, 9.0f, 10.0f, 11.0f,
              12.0f, 13.0f, 14.0f, 15.0f};

    expect_matrix4f_eq(res, exp);
}

TEST_F(Matrix4Fixture, test_operator_matrix_mult_matrix)
{
    Mat4f res{m1 * m2};

    Mat4f exp{80.0f, 70.0f, 60.0f, 50.0f,
              240.0f, 214.0f, 188.0f, 162.0f,
              400.0f, 358.0f, 316.0f, 274.0f,
              560.0f, 502.0f, 444.0f, 386.0f};

    expect_matrix4f_eq(res, exp);
}

TEST_F(Matrix4Fixture, test_operator_matrix_plus_equals_matrix)
{
    m1 += Mat4f{1.0f, 1.0f, 1.0f, 1.0f,
                1.0f, 1.0f, 1.0f, 1.0f,
                1.0f, 1.0f, 1.0f, 1.0f,
                1.0f, 1.0f, 1.0f, 1.0f};

    Mat4f exp{2.0f, 3.0f, 4.0f, 5.0f,
              6.0f, 7.0f, 8.0f, 9.0f,
              10.0f, 11.0f, 12.0f, 13.0f,
              14.0f, 15.0f, 16.0f, 17.0f};

    expect_matrix4f_eq(m1, exp);
}

TEST_F(Matrix4Fixture, test_operator_matrix_minus_equals_matrix)
{
    m1 -= Mat4f{1.0f, 1.0f, 1.0f, 1.0f,
                1.0f, 1.0f, 1.0f, 1.0f,
                1.0f, 1.0f, 1.0f, 1.0f,
                1.0f, 1.0f, 1.0f, 1.0f};

    Mat4f exp{0.0f, 1.0f, 2.0f, 3.0f,
              4.0f, 5.0f, 6.0f, 7.0f,
              8.0f, 9.0f, 10.0f, 11.0f,
              12.0f, 13.0f, 14.0f, 15.0f};

    expect_matrix4f_eq(m1, exp);
}

TEST_F(Matrix4Fixture, test_operator_matrix_plus_scalar)
{
    Mat4f res{m1 + 1.0f};

    Mat4f exp{2.0f, 3.0f, 4.0f, 5.0f,
              6.0f, 7.0f, 8.0f, 9.0f,
              10.0f, 11.0f, 12.0f, 13.0f,
              14.0f, 15.0f, 16.0f, 17.0f};

    expect_matrix4f_eq(res, exp);
}

TEST_F(Matrix4Fixture, test_operator_scalar_plus_matrix)
{
    Mat4f res{1.0f + m1};

    Mat4f exp{2.0f, 3.0f, 4.0f, 5.0f,
              6.0f, 7.0f, 8.0f, 9.0f,
              10.0f, 11.0f, 12.0f, 13.0f,
              14.0f, 15.0f, 16.0f, 17.0f};

    expect_matrix4f_eq(res, exp);
}

TEST_F(Matrix4Fixture, test_operator_matrix_minus_scalar)
{
    Mat4f res{m1 - 1.0f};

    Mat4f exp{0.0f, 1.0f, 2.0f, 3.0f,
              4.0f, 5.0f, 6.0f, 7.0f,
              8.0f, 9.0f, 10.0f, 11.0f,
              12.0f, 13.0f, 14.0f, 15.0f};

    expect_matrix4f_eq(res, exp);
}

TEST_F(Matrix4Fixture, test_operator_scalar_minus_matrix)
{
    Mat4f res{1.0f - m1};

    Mat4f exp{0.0f, 1.0f, 2.0f, 3.0f,
              4.0f, 5.0f, 6.0f, 7.0f,
              8.0f, 9.0f, 10.0f, 11.0f,
              12.0f, 13.0f, 14.0f, 15.0f};

    expect_matrix4f_eq(res, exp);
}

TEST_F(Matrix4Fixture, test_operator_matrix_mult_scalar)
{
    Mat4f res{m1 * 2.0f};

    Mat4f exp{2.0f, 4.0f, 6.0f, 8.0f,
              10.0f, 12.0f, 14.0f, 16.0f,
              18.0f, 20.0f, 22.0f, 24.0f,
              26.0f, 28.0f, 30.0f, 32.0f};

    expect_matrix4f_eq(res, exp);
}

TEST_F(Matrix4Fixture, test_operator_scalar_mult_matrix)
{
    Mat4f res{2.0f * m1};

    Mat4f exp{2.0f, 4.0f, 6.0f, 8.0f,
              10.0f, 12.0f, 14.0f, 16.0f,
              18.0f, 20.0f, 22.0f, 24.0f,
              26.0f, 28.0f, 30.0f, 32.0f};

    expect_matrix4f_eq(res, exp);
}

TEST_F(Matrix4Fixture, test_operator_matrix_div_scalar)
{
    Mat4f res{m1 / 2.0f};

    Mat4f exp{0.5f, 1.0f, 1.5, 2.0f,
              2.5f, 3.0f, 3.5f, 4.0f,
              4.5f, 5.0f, 5.5f, 6.0f,
              6.5f, 7.0f, 7.5f, 8.0f};

    expect_matrix4f_eq(res, exp);
}

TEST_F(Matrix4Fixture, test_operator_scalar_div_matrix)
{
    Mat4f res{2.0f / m1};

    Mat4f exp{0.5f, 1.0f, 1.5, 2.0f,
              2.5f, 3.0f, 3.5f, 4.0f,
              4.5f, 5.0f, 5.5f, 6.0f,
              6.5f, 7.0f, 7.5f, 8.0f};

    expect_matrix4f_eq(res, exp);
}

TEST_F(Matrix4Fixture, test_operator_matrix_mult_vector4)
{
    Mat4f mat;
    mat.translate(Vec3f{1.0f, 1.0f, 1.0f});

    Vec4f res{mat * Vec4f{1.0f, 1.0f, 1.0f, 1.0f}};

    EXPECT_FLOAT_EQ(res.x, 2.0f);
    EXPECT_FLOAT_EQ(res.y, 2.0f);
    EXPECT_FLOAT_EQ(res.z, 2.0f);
    EXPECT_FLOAT_EQ(res.w, 1.0f);
}

TEST_F(Matrix4Fixture, test_operator_ostream)
{
    Mat4f mat;
    mat.translate(Vec3f{10.0f, 20.0f, 30.0f});

    std::cout << mat;
}
