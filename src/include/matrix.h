#ifndef HELMATH_MATRIX_H
#define HELMATH_MATRIX_H

/**
 * @file matrix.h
 * This file defines the Matrix templated classes.
 */

#include "vector.h"

namespace hm {

/**
 * @class Matrix2
 * @tparam T Can be any numeric type.
 * @brief Represents a 2x2 matrix of numeric values.
 * @details The matrix is treated as row major.
 */
template<typename T>
class Matrix2 {
private:
    T data[2][2];

public:
    /**
    * Matrix2's default constructor.
    * @details Sets the matrix to identity.
    * @return A new Matrix2 set to identity.
    */
    Matrix2<T>()
    {
        set_identity();
    }

    /**
     * Matrix2's multi-argument constructor.
     * @details Creates a Matrix2 using each value passed as an argument.
     * The notation used is [row][column].
     * @param m00 Matrix element [0][0].
     * @param m01 Matrix element [0][1].
     * @param m02 Matrix element [0][2].
     * @param m03 Matrix element [0][3].
     * @param m10 Matrix element [1][0].
     * @param m11 Matrix element [1][1].
     * @param m12 Matrix element [1][2].
     * @param m13 Matrix element [1][3].
     * @return A new Matrix2 constructed with the arguments passed.
     */
    Matrix2<T>(T m00, T m01, T m02, T m03, T m10, T m11, T m12, T m13)
    {
        data[0][0] = m00;
        data[0][1] = m01;
        data[0][2] = m02;
        data[0][3] = m03;

        data[1][0] = m10;
        data[1][1] = m11;
        data[1][2] = m12;
        data[1][3] = m13;
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
     * Sets the matrix's row vector at the specified index.
     * @param x The first value of the row.
     * @param y The second value of the row.
     * @param idx The index of the row in the matrix.
     */
    inline void set_row_vector(T x, T y, unsigned int idx)
    {
        data[idx][0] = x;
        data[idx][1] = y;
    }

    /**
    * Sets the matrix's row vector at the specified index.
    * @param vec A two dimensional vector whose values are asigned to the matrix's row.
    * @param idx The index of the row in the matrix.
    * @overload set_row_vector(const Vector2<T> &vec, unsigned int idx)
    */
    inline void set_row_vector(const Vector2<T> &vec, unsigned int idx)
    {
        for (int i = 0; i < 2; i++) {
            data[idx][i] = vec[i];
        }
    }

    /**
     * Sets the matrix's row vector at the specified index.
     * @param values An array of size 2 with whose values are asigned to the matrix's row.
     * @param idx The index of the row in the matrix.
     * @overload set_row_vector(T values[2], unsigned int idx)
     */
    inline void set_row_vector(T values[2], unsigned int idx)
    {
        for (int i = 0; i < 2; i++) {
            data[idx][i] = values[i];
        }
    }

    /**
     * Sets the matrix's column vector at the specified index.
     * @param x The first value of the column.
     * @param y The second value of the column.
     * @param idx The index of the column in the matrix.
     */
    inline void set_column_vector(T x, T y, unsigned int idx)
    {
        data[0][idx] = x;
        data[1][idx] = y;
    }

    /**
     * Sets the matrix's column vector at the specified index.
     * @param vec A two dimensional vector whose values are asigned to the matrix column.
     * @param idx The index of the column in the matrix.
     * @overload set_column_vector(const Vector2<T> &vec, unsigned int idx)
     */
    inline void set_column_vector(const Vector2<T> &vec, unsigned int idx)
    {
        for (int i = 0; i < 2; i++) {
            data[i][idx] = vec[i];
        }
    }

    /**
     * Sets the matrix's column vector at the specified index.
     * @param values An array of size 2 with whose values are asigned to the matrix's column.
     * @param idx The index of the row in the matrix.
     * @overload set_column_vector(T values[2], unsigned int idx)
     */
    inline void set_column_vector(T values[2], unsigned int idx)
    {
        for (int i = 0; i < 2; i++) {
            data[i][idx] = values[i];
        }
    }

    /**
     * Sets the matrix to identity.
     * @details The matrix main diagonal values are set to 1
     * and rest to 0.
     */
    inline void set_identity()
    {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                data[i][j] = i == j ? 1 : 0;
            }
        }
    }

    inline bool operator==(const Matrix2<T> &rhs) const
    {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                if (data[i][j] != rhs[i][j]) {
                    return false;
                }
            }
        }

        return true;
    }

    inline bool operator!=(const Matrix2<T> &rhs) const
    {
        return !(*this == rhs);
    }
};

/**
 * @typedef Mat2f
 * Defines a 2x2 matrix of floats.
 */
using Mat2f = Matrix2<float>;

/**
 * @typedef Mat2d
 * Defines a 2x2 matrix of double floats.
 */
using Mat2d = Matrix2<double>;

/**
 * @typedef Mat2c
 * Defines a 2x2 matrix of characters.
 */
using Mat2c = Matrix2<char>;

/**
 * @typedef Mat2uc
 * Defines a 2x2 matrix of unsigned characters.
 */
using Mat2uc = Matrix2<unsigned char>;

/**
 * @typedef Mat2s
 * Defines a 2x2 matrix of short integers.
 */
using Mat2s = Matrix2<short>;

/**
 * @typedef Mat2us
 * Defines a 2x2 matrix of unsigned short integers.
 */
using Mat2us = Matrix2<unsigned short>;

/**
 * @typedef Mat2i
 * Defines a 2x2 matrix of integers.
 */
using Mat2i = Matrix2<int>;

/**
 * @typedef Mat2ui
 * Defines a 2x2 matrix of unsigned integers.
 */
using Mat2ui = Matrix2<unsigned int>;

/**
 * @typedef Mat2l
 * Defines a 2x2 matrix of long integers.
 */
using Mat2l = Matrix2<long>;

/**
 * @typedef Mat2ul
 * Defines a 2x2 matrix of unsigned long integers.
 */
using Mat2ul = Matrix2<unsigned long>;

/**
 * @typedef Mat2ll
 * Defines a 2x2 matrix of long long integers.
 */
using Mat2ll = Matrix2<long long>;

/**
 * @typedef Mat2ull
 * Defines a 2x2 matrix of unsigned long long integers.
 */
using Mat2ull = Matrix2<unsigned long long>;


/**
 * @class Matrix3
 * @tparam T Can be any numeric type.
 * @brief Represents a 3x3 matrix of numeric values.
 * @details The matrix is treated as row major.
 */
template<typename T>
class Matrix3 {
private:
    T data[3][3];

public:
    /**
    * Matrix3's default constructor.
    * @details Sets the matrix to identity.
    * @return A new Matrix3 set to identity.
    */
    Matrix3<T>()
    {
        set_identity();
    }

    /**
     * Matrix3's multi-argument constructor.
     * @details Creates a Matrix3 using each value passed as an argument.
     * The notation used is [row][column].
     * @param m00 Matrix element [0][0].
     * @param m01 Matrix element [0][1].
     * @param m02 Matrix element [0][2].
     * @param m03 Matrix element [0][3].
     * @param m10 Matrix element [1][0].
     * @param m11 Matrix element [1][1].
     * @param m12 Matrix element [1][2].
     * @param m13 Matrix element [1][3].
     * @param m20 Matrix element [2][0].
     * @param m21 Matrix element [2][1].
     * @param m22 Matrix element [2][2].
     * @param m23 Matrix element [2][3].
     * @return A new Matrix3 constructed with the arguments passed.
     */
    Matrix3<T>(T m00, T m01, T m02, T m03, T m10, T m11,
               T m12, T m13, T m20, T m21, T m22, T m23)
    {
        data[0][0] = m00;
        data[0][1] = m01;
        data[0][2] = m02;
        data[0][3] = m03;

        data[1][0] = m10;
        data[1][1] = m11;
        data[1][2] = m12;
        data[1][3] = m13;

        data[2][0] = m20;
        data[2][1] = m21;
        data[2][2] = m22;
        data[2][3] = m23;
    }

    /**
     * Sets the matrix's row vector at the specified index.
     * @param x The first value of the row.
     * @param y The second value of the row.
     * @param z The third value of the row.
     * @param idx The index of the row in the matrix.
     */
    inline void set_row_vector(T x, T y, T z, unsigned int idx)
    {
        data[idx][0] = x;
        data[idx][1] = y;
        data[idx][2] = z;
    }

    /**
    * Sets the matrix's row vector at the specified index.
    * @param vec A three dimensional vector whos values are asigned to the matrix row.
    * @param idx The index of the row in the matrix.
    * @overload set_row_vector(const Vector3<T> &vec, unsigned int idx)
    */
    inline void set_row_vector(const Vector3<T> &vec, unsigned int idx)
    {
        for (int i = 0; i < 3; i++) {
            data[idx][i] = vec[i];
        }
    }

    /**
     * Sets the matrix's row vector at the specified index.
     * @param values An array of size 3 whose values are asigned to the matrix row.
     * @param idx The index of the the row in the matrix.
     * @overload set_row_vector(T values[3], unsigned int idx)
     */
    inline void set_row_vector(T values[3], unsigned int idx)
    {
        for (int i = 0; i < 3; i++) {
            data[idx][i] = values[i];
        }
    }

    /**
     * Sets the matrix's column vector at the specified index.
     * @param x The first value of the column.
     * @param y The second value of the column.
     * @param z The third value of the column.
     * @param idx The index of the column in the matrix.
     */
    inline void set_column_vector(T x, T y, T z, unsigned int idx)
    {
        data[0][idx] = x;
        data[1][idx] = y;
        data[2][idx] = z;
    }

    /**
     * Sets the matrix's column vector at the specified index.
     * @param vec A three dimensional vector whose values are asigned to the matrix's column.
     * @param idx The index of the column in the matrix.
     * @overload set_column_vector(const Vector3<T> &vec, unsigned int idx)
     */
    inline void set_column_vector(const Vector3<T> &vec, unsigned int idx)
    {
        for (int i = 0; i < 3; i++) {
            data[i][idx] = vec[i];
        }
    }

    /**
     * Sets the matrix's column vector at the specified index.
     * @param values An array of size 3 whose values are assigned to the matrix's column.
     * @param idx The index of the column in the matrix.
     * @overload set_column_vector(T values[3], unsigned int idx)
     */
    inline void set_column_vector(T values[3], unsigned int idx)
    {
        for (int i = 0; i < 3; i++) {
            data[i][idx] = values[i];
        }
    }

    /**
     * Sets the matrix to identity.
     * @details The matrix main diagonal values are set to 1
     * and rest to 0.
     */
    inline void set_identity()
    {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                data[i][j] = i == j ? 1 : 0;
            }
        }
    }

    inline T *operator[](int idx)
    {
        return data[idx];
    }

    inline const T *operator[](int idx) const
    {
        return data[idx];
    }

    inline bool operator==(const Matrix3<T> &rhs) const
    {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (data[i][j] != rhs[i][j]) {
                    return false;
                }
            }
        }

        return true;
    }

    inline bool operator!=(const Matrix3<T> &rhs) const
    {
        return !(*this == rhs);
    }
};

/**
 * @typedef Mat3f
 * Defines a 3x3 matrix of floats.
 */
using Mat3f = Matrix3<float>;

/**
 * @typedef Mat3d
 * Defines a 3x3 matrix of double floats.
 */
using Mat3d = Matrix3<double>;

/**
 * @typedef Mat3c
 * Defines a 3x3 matrix of characters.
 */
using Mat3c = Matrix3<char>;

/**
 * @typedef Mat3uc
 * Defines a 3x3 matrix of unsigned characters.
 */
using Mat3uc = Matrix3<unsigned char>;

/**
 * @typedef Mat3s
 * Defines a 3x3 matrix of short integers.
 */
using Mat3s = Matrix3<short>;

/**
 * @typedef Mat3us
 * Defines a 3x3 matrix of unsigned short integers.
 */
using Mat3us = Matrix3<unsigned short>;

/**
 * @typedef Mat3i
 * Defines a 3x3 matrix of integers.
 */
using Mat3i = Matrix3<int>;

/**
 * @typedef Mat3ui
 * Defines a 3x3 matrix of unsigned integers.
 */
using Mat3ui = Matrix3<unsigned int>;

/**
 * @typedef Mat3l
 * Defines a 3x3 matrix of long integers.
 */
using Mat3l = Matrix3<long>;

/**
 * @typedef Mat3ul
 * Defines a 3x3 matrix of unsigned long integers.
 */
using Mat3ul = Matrix3<unsigned long>;

/**
 * @typedef Mat3ll
 * Defines a 3x3 matrix of long long integers.
 */
using Mat3ll = Matrix3<long long>;

/**
 * @typedef Mat3ull
 * Defines a 3x3 matrix of unsigned long long integers.
 */
using Mat3ull = Matrix3<unsigned long long>;


/**
 * @class Matrix4
 * @tparam T Can be any numeric type.
 * @brief Represents a 4x4 matrix of numeric values.
 * @details The matrix is treated as row major.
 */
template<typename T>
class Matrix4 {
private:
    T data[4][4];

public:
    /**
     * Matrix4's default constructor.
     * @details Sets the matrix to identity.
     * @return A new Matrix4 set to identity.
     */
    Matrix4<T>()
    {
        set_identity();
    }

    /**
     * Matrix4's multi-argument constructor.
     * @details Creates a Matrix4 using each value passed as an argument.
     * The notation used is [row][column].
     * @param m00 Matrix element [0][0].
     * @param m01 Matrix element [0][1].
     * @param m02 Matrix element [0][2].
     * @param m03 Matrix element [0][3].
     * @param m10 Matrix element [1][0].
     * @param m11 Matrix element [1][1].
     * @param m12 Matrix element [1][2].
     * @param m13 Matrix element [1][3].
     * @param m20 Matrix element [2][0].
     * @param m21 Matrix element [2][1].
     * @param m22 Matrix element [2][2].
     * @param m23 Matrix element [2][3].
     * @param m30 Matrix element [3][0].
     * @param m31 Matrix element [3][1].
     * @param m32 Matrix element [3][2].
     * @param m33 Matrix element [3][3].
     * @return A new Matrix4 constructed with the arguments passed.
     */
    Matrix4<T>(T m00, T m01, T m02, T m03, T m10, T m11, T m12, T m13,
               T m20, T m21, T m22, T m23, T m30, T m31, T m32, T m33)
    {
        data[0][0] = m00;
        data[0][1] = m01;
        data[0][2] = m02;
        data[0][3] = m03;

        data[1][0] = m10;
        data[1][1] = m11;
        data[1][2] = m12;
        data[1][3] = m13;

        data[2][0] = m20;
        data[2][1] = m21;
        data[2][2] = m22;
        data[2][3] = m23;

        data[3][0] = m30;
        data[3][1] = m31;
        data[3][2] = m32;
        data[3][3] = m33;
    }

    /**
     * Sets the matrix's row vector at the specified index.
     * @param x The first value of the row.
     * @param y The second value of the row.
     * @param z The third value of the row.
     * @param w The fourth value of the row.
     * @param idx The index of the row in the matrix.
     */
    inline void set_row_vector(T x, T y, T z, T w, unsigned int idx)
    {
        data[idx][0] = x;
        data[idx][1] = y;
        data[idx][2] = z;
        data[idx][3] = w;
    }

    /**
     * Sets the matrix's column vector at the specified index.
     * @param x The first value of the column.
     * @param y The second value of the column.
     * @param z The third value of the column.
     * @param w The fourth value of the column.
     * @param idx The index of the column in the matrix.
     */
    inline void set_column_vector(T x, T y, T z, T w, unsigned int idx)
    {
        data[0][idx] = x;
        data[1][idx] = y;
        data[2][idx] = z;
        data[3][idx] = w;
    }

    /**
     * Sets the matrix's row vector at the specified index.
     * @param vec A four dimensional vector whos values are asigned to the matrix row.
     * @param idx The index of the row in the matrix.
     * @overload set_row_vector(const Vector4<T> &vec, unsigned int idx)
     */
    inline void set_row_vector(const Vector4<T> &vec, unsigned int idx)
    {
        data[idx][0] = vec.x;
        data[idx][1] = vec.y;
        data[idx][2] = vec.z;
        data[idx][3] = vec.w;
    }

    /**
     * Sets the matrix's column vector at the specified index.
     * @param vec A four dimensional vector whose values are asigned to the matrix column.
     * @param idx The index of the column in the matrix.
     * @overload set_column_vector(const Vector4<T> &vec, unsigned int idx)
     */
    inline void set_column_vector(const Vector4<T> &vec, unsigned int idx)
    {
        data[0][idx] = vec.x;
        data[1][idx] = vec.y;
        data[2][idx] = vec.z;
        data[3][idx] = vec.w;
    }

    /**
     * Sets the matrix to identity.
     * @details The matrix main diagonal values are set to 1
     * and rest to 0.
     */
    inline void set_identity()
    {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                data[i][j] = i == j ? 1 : 0;
            }
        }
    }

    inline void translate(float x, float y, float z)
    {
        Matrix4 translation_mat(1.0f, 0.0f, 0.0f, x,
                                0.0f, 1.0f, 0.0f, y,
                                0.0f, 0.0f, 1.0f, z,
                                0.0f, 0.0f, 0.0f, 1.0f);

        *this = *this * translation_mat;
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
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                data[i][j] = rhs[i][j];
            }
        }
    }

    /**
     * Performs matrix multiplication.
     * @details Mutiplies the left hand side matrix operand with the right hand
     * side matrix operand.
     * @param rhs The right hand side matrix operand.
     * @return A new Matrix4 as the result of the matrix multiplication.
     */
    inline Matrix4 operator*(const Matrix4 &rhs)
    {
        Matrix4 res;

        res.data[0][0] = data[0][0] * rhs.data[0][0] + data[0][1] * rhs.data[1][0]
                         + data[0][2] * rhs.data[2][0] + data[0][3] * rhs.data[3][0];

        res.data[0][1] = data[0][0] * rhs.data[0][1] + data[0][1] * rhs.data[1][1]
                         + data[0][2] * rhs.data[2][1] + data[0][3] * rhs.data[3][1];

        res.data[0][2] = data[0][0] * rhs.data[0][2] + data[0][1] * rhs.data[1][2]
                         + data[0][2] * rhs.data[2][2] + data[0][3] * rhs.data[3][2];

        res.data[0][3] = data[0][0] * rhs.data[0][3] + data[0][1] * rhs.data[1][3]
                         + data[0][2] * rhs.data[2][3] + data[0][3] * rhs.data[3][3];


        res.data[1][0] = data[1][0] * rhs.data[0][0] + data[1][1] * rhs.data[1][0]
                         + data[1][2] * rhs.data[2][0] + data[1][3] * rhs.data[3][0];

        res.data[1][1] = data[1][0] * rhs.data[0][1] + data[1][1] * rhs.data[1][1]
                         + data[1][2] * rhs.data[2][1] + data[1][3] * rhs.data[3][1];

        res.data[1][2] = data[1][0] * rhs.data[0][2] + data[1][1] * rhs.data[1][2]
                         + data[1][2] * rhs.data[2][2] + data[1][3] * rhs.data[3][2];

        res.data[1][3] = data[1][0] * rhs.data[0][3] + data[1][1] * rhs.data[1][3]
                         + data[1][2] * rhs.data[2][3] + data[1][3] * rhs.data[3][3];


        res.data[2][0] = data[2][0] * rhs.data[0][0] + data[2][1] * rhs.data[1][0]
                         + data[2][2] * rhs.data[2][0] + data[2][3] * rhs.data[3][0];

        res.data[2][1] = data[2][0] * rhs.data[0][1] + data[2][1] * rhs.data[1][1]
                         + data[2][2] * rhs.data[2][1] + data[2][3] * rhs.data[3][1];

        res.data[2][2] = data[2][0] * rhs.data[0][2] + data[2][1] * rhs.data[1][2]
                         + data[2][2] * rhs.data[2][2] + data[2][3] * rhs.data[3][2];

        res.data[2][3] = data[2][0] * rhs.data[0][3] + data[2][1] * rhs.data[1][3]
                         + data[2][2] * rhs.data[2][3] + data[2][3] * rhs.data[3][3];


        res.data[3][0] = data[3][0] * rhs.data[0][0] + data[3][1] * rhs.data[1][0]
                         + data[3][2] * rhs.data[2][0] + data[3][3] * rhs.data[3][0];

        res.data[3][1] = data[3][0] * rhs.data[0][1] + data[3][1] * rhs.data[1][1]
                         + data[3][2] * rhs.data[2][1] + data[3][3] * rhs.data[3][1];

        res.data[3][2] = data[3][0] * rhs.data[0][2] + data[3][1] * rhs.data[1][2]
                         + data[3][2] * rhs.data[2][2] + data[3][3] * rhs.data[3][2];

        res.data[3][3] = data[3][0] * rhs.data[0][3] + data[3][1] * rhs.data[1][3]
                         + data[3][2] * rhs.data[2][3] + data[3][3] * rhs.data[3][3];

        return res;
    }

    inline bool operator==(const Matrix2<T> &rhs) const
    {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                if (data[i][j] != rhs[i][j]) {
                    return false;
                }
            }
        }

        return true;
    }

    inline bool operator!=(const Matrix2<T> &rhs) const
    {
        return !(*this == rhs);
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
