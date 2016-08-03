#ifndef HELMATH_MATRIX_H
#define HELMATH_MATRIX_H

namespace hm {

/**
 * @class Matrix4
 * Represents an orthogonal matrix of numeric values.
 * @details The matrix is treated as row major.
 * @tparam T Can be any numeric type.
 */
template<typename T>
class Matrix4 {
private:
    T data[4][4];

public:
    /**
     * Matrix4's default constructor.
     * @details Sets the matrix to identity.
     * @return
     */
    Matrix4()
    {
        set_identity();
    }

    /**
     * Sets the matrix to identity.
     * @details The matrix main diagonal values are set to 1
     * and rest to 0.
     */
    inline void set_identity()
    {
        for(int i = 0; i < 4; i++) {
            for(int j = 0; j < 4; j++) {
                data[i][j] = i == j ? 1 : 0;
            }
        }
    }

    /**
     * Calculates the determinant of the matrix.
     * @return The calculated determinant.
     */
    inline float determinant() const
    {
        float det11 = data[1][1] * (data[2][2] * data[3][3] - data[3][2] * data[2][3]) -
                      data[1][2] * (data[2][1] * data[3][3] - data[3][1] * data[2][3]) +
                      data[1][3] * (data[2][1] * data[3][2] - data[3][1] * data[2][2]);

        float det12 = data[1][0] * (data[2][2] * data[3][3] - data[3][2] * data[2][3]) -
                      data[1][2] * (data[2][0] * data[3][3] - data[3][0] * data[2][3]) +
                      data[1][3] * (data[2][0] * data[3][2] - data[3][0] * data[2][2]);

        float det13 = data[1][0] * (data[2][1] * data[3][3] - data[3][1] * data[2][3]) -
                      data[1][1] * (data[2][0] * data[3][3] - data[3][0] * data[2][3]) +
                      data[1][3] * (data[2][0] * data[3][1] - data[3][0] * data[2][1]);

        float det14 = data[1][0] * (data[2][1] * data[3][2] - data[3][1] * data[2][2]) -
                      data[1][1] * (data[2][0] * data[3][2] - data[3][0] * data[2][2]) +
                      data[1][2] * (data[2][0] * data[3][1] - data[3][0] * data[2][1]);

        return data[0][0] * det11 - data[0][1] * det12 + data[0][2] * det13 - data[0][3] * det14;
    }

    inline T *operator[](int idx)
    {
        return data[idx];
    }

    inline const T *operator[](int idx) const
    {
        return data[idx];
    }

    /**
     * Assigns each value of the right hand side matrix operand
     * to the the left hand side matrix operand.
     * @param rhs The matrix assigned to the left hand side matrix operand.
     */
    inline void operator=(const Matrix4<T> &rhs)
    {
        for(int i = 0; i < 4; i++) {
            for(int j = 0; j < 4; j++) {
                data[i][j] = rhs[i][j];
            }
        }
    }
};

/**
 * @typedef Mat4f
 * Defines a 4x4 matrix of floats.
 */
using Mat4f = Matrix4<float>;

/**
 * @typedef Mat4d
 * Defines a 4x4 matrix of double floats.
 */
using Mat4d = Matrix4<double>;

/**
 * @typedef Mat4c
 * Defines a 4x4 matrix of characters.
 */
using Mat4c = Matrix4<char>;

/**
 * @typedef Mat4uc
 * Defines a 4x4 matrix of unsigned characters.
 */
using Mat4uc = Matrix4<unsigned char>;

/**
 * @typedef Mat4s
 * Defines a 4x4 matrix of short integers.
 */
using Mat4s = Matrix4<short>;

/**
 * @typedef Mat4us
 * Defines a 4x4 matrix of unsigned short integers.
 */
using Mat4us = Matrix4<unsigned short>;

/**
 * @typedef Mat4i
 * Defines a 4x4 matrix of integers.
 */
using Mat4i = Matrix4<int>;

/**
 * @typedef Mat4ui
 * Defines a 4x4 matrix of unsigned integers.
 */
using Mat4ui = Matrix4<unsigned int>;

/**
 * @typedef Mat4l
 * Defines a 4x4 matrix of long integers.
 */
using Mat4l = Matrix4<long>;

/**
 * @typedef Mat4ul
 * Defines a 4x4 matrix of unsigned long integers.
 */
using Mat4ul = Matrix4<unsigned long>;

/**
 * @typedef Mat4ll
 * Defines a 4x4 matrix of long long integers.
 */
using Mat4ll = Matrix4<long long>;

/**
 * @typedef Mat4ull
 * Defines a 4x4 matrix of unsigned long long integers.
 */
using Mat4ull = Matrix4<unsigned long long>;

}

#endif //HELMATH_MATRIX_H
