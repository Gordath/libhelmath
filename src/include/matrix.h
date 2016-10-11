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
         * @param m10 Matrix element [1][0].
         * @param m11 Matrix element [1][1].
         * @return A new Matrix2 constructed with the arguments passed.
         */
        Matrix2<T>(const T m00, const T m01, const T m10, const T m11)
        {
            data[0][0] = m00;
            data[0][1] = m01;

            data[1][0] = m10;
            data[1][1] = m11;
        }

        /**
         * Sets the matrix's row vector at the specified index.
         * @param x The first value of the row.
         * @param y The second value of the row.
         * @param idx The index of the row in the matrix.
         */
        inline void set_row_vector(const T x, const T y, const unsigned int idx)
        {
            data[idx][0] = x;
            data[idx][1] = y;
        }

        /**
        * Sets the matrix's row vector at the specified index.
        * @param vec A two dimensional vector whose values are asigned to the matrix's row.
        * @param idx The index of the row in the matrix.
        * @overload set_row_vector(const Vector2<T> &vec, const unsigned int idx)
        */
        inline void set_row_vector(const Vector2<T> &vec, const unsigned int idx)
        {
            for (int i = 0; i < 2; ++i) {
                data[idx][i] = vec[i];
            }
        }

        /**
         * Sets the matrix's row vector at the specified index.
         * @param v An array of size 2 with whose values are asigned to the matrix's row.
         * @param idx The index of the row in the matrix.
         * @overload set_row_vector(const T (&v)[2], const unsigned int idx)
         */
        inline void set_row_vector(const T (&v)[2], const unsigned int idx)
        {
            for (int i = 0; i < 2; ++i) {
                data[idx][i] = v[i];
            }
        }

        /**
         * Sets the matrix's column vector at the specified index.
         * @param x The first value of the column.
         * @param y The second value of the column.
         * @param idx The index of the column in the matrix.
         */
        inline void set_column_vector(const T x, const T y, const unsigned int idx)
        {
            data[0][idx] = x;
            data[1][idx] = y;
        }

        /**
         * Sets the matrix's column vector at the specified index.
         * @param vec A two dimensional vector whose values are asigned to the matrix column.
         * @param idx The index of the column in the matrix.
         * @overload set_column_vector(const Vector2<T> &vec, const unsigned int idx)
         */
        inline void set_column_vector(const Vector2<T> &vec, const unsigned int idx)
        {
            for (int i = 0; i < 2; ++i) {
                data[i][idx] = vec[i];
            }
        }

        /**
         * Sets the matrix's column vector at the specified index.
         * @param v An array of size 2 with whose values are asigned to the matrix's column.
         * @param idx The index of the row in the matrix.
         * @overload set_column_vector(const T (&v)[2], const unsigned int idx)
         */
        inline void set_column_vector(const T (&v)[2], const unsigned int idx)
        {
            for (int i = 0; i < 2; ++i) {
                data[i][idx] = v[i];
            }
        }

        /**
         * Sets the matrix to identity.
         * @details The matrix main diagonal values are set to 1
         * and rest to 0.
         */
        inline void set_identity()
        {
            for (int i = 0; i < 2; ++i) {
                for (int j = 0; j < 2; ++j) {
                    data[i][j] = i == j ? 1 : 0;
                }
            }
        }

        /**
         * Implicit conversion to pointer.
         * @return A pointer to the internal array of the matrix.
         */
        inline operator T *()
        {
            return data[0];
        }

        /**
         * Implicit conversion to a constant pointer.
         * @return A constant pointer to the internal array of the matrix.
         */
        inline operator const T *() const
        {
            return data[0];
        }

        /**
         * Subscript operator overload.
         * @param idx The index to be accessed from the internal array of the matrix.
         * @return A pointer to the internal array.
         */
        inline T *operator[](const unsigned int idx)
        {
            return data[idx];
        }

        /**
         * Subscript operator overload.
         * @param idx The index to be accessed from the internal array of the matrix.
         * @return A pointer to the internal array.
         */
        inline const T *operator[](const unsigned int idx) const
        {
            return data[idx];
        }

        /**
         * Assigns each value of the right hand side matrix operand
         * to the the left hand side matrix operand.
         * @param rhs The matrix assigned to the left hand side matrix operand.
         */
        inline Matrix2<T> &operator=(const Matrix2<T> &rhs)
        {
            for (int i = 0; i < 2; ++i) {
                for (int j = 0; j < 2; ++j) {
                    data[i][j] = rhs[i][j];
                }
            }

            return *this;
        }

        /**
         * Performs matrix multiplication.
         * @details Mutiplies the left hand side matrix operand with the right hand
         * side matrix operand.
         * @param rhs The right hand side matrix operand.
         * @return A new Matrix2 as the result of the matrix multiplication.
         */
        inline Matrix2<T> operator*(const Matrix2<T> &rhs)
        {
            Matrix2<T> res;

            for (int i = 0; i < 2; ++i) {
                for (int j = 0; j < 2; ++j) {
                    res[i][j] = data[i][0] * rhs[0][j] + data[i][1] * rhs[1][j];
                }
            }

            return res;
        }

        /**
         * Equality operator overload.
         * @warning May not work as intended for floating point matrices.
         * @param rhs The right hand side matrix operand with whom equality is tested.
         * @return True only when all values of both matrices are equal.
         */
        inline bool operator==(const Matrix2<T> &rhs) const
        {
            for (int i = 0; i < 2; ++i) {
                for (int j = 0; j < 2; ++j) {
                    if (data[i][j] != rhs[i][j]) {
                        return false;
                    }
                }
            }

            return true;
        }

        /**
         * Non equality operator overload.
         * @warning May not work as intended for floating point matrices.
         * @param rhs The right hand side matrix operand with whom non equality is tested.
         * @return True when one of the matrix's values is not equal the the other's.
         */
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
         * @param m10 Matrix element [1][0].
         * @param m11 Matrix element [1][1].
         * @param m12 Matrix element [1][2].
         * @param m20 Matrix element [2][0].
         * @param m21 Matrix element [2][1].
         * @param m22 Matrix element [2][2].
         * @return A new Matrix3 constructed with the arguments passed.
         */
        Matrix3<T>(const T m00, const T m01, const T m02,
                   const T m10, const T m11, const T m12,
                   const T m20, const T m21, const T m22)
        {
            data[0][0] = m00;
            data[0][1] = m01;
            data[0][2] = m02;

            data[1][0] = m10;
            data[1][1] = m11;
            data[1][2] = m12;

            data[2][0] = m20;
            data[2][1] = m21;
            data[2][2] = m22;
        }

        /**
         * Matrix3's row constructor.
         * @param i_row The first row of the matrix.
         * @param j_row The second row of the matrix.
         * @param k_row The thrid row of the matrix.
         * @return A new Matrix3 constructed with the arguments passed.
         */
        Matrix3<T>(const Vector3<T> &i_row, const Vector3<T> &j_row, const Vector3<T> &k_row)
        {
            set_row_vector(i_row, 0);
            set_row_vector(j_row, 1);
            set_row_vector(k_row, 2);
        }

        /**
         * Sets the matrix's row vector at the specified index.
         * @param x The first value of the row.
         * @param y The second value of the row.
         * @param z The third value of the row.
         * @param idx The index of the row in the matrix.
         */
        inline void set_row_vector(const T x, const T y, const T z, const unsigned int idx)
        {
            data[idx][0] = x;
            data[idx][1] = y;
            data[idx][2] = z;
        }

        /**
        * Sets the matrix's row vector at the specified index.
        * @param vec A three dimensional vector whos values are asigned to the matrix row.
        * @param idx The index of the row in the matrix.
        * @overload set_row_vector(const Vector3<T> &vec, const unsigned int idx)
        */
        inline void set_row_vector(const Vector3<T> &vec, const unsigned int idx)
        {
            for (int i = 0; i < 3; ++i) {
                data[idx][i] = vec[i];
            }
        }

        /**
         * Sets the matrix's row vector at the specified index.
         * @param v An array of size 3 whose values are asigned to the matrix row.
         * @param idx The index of the the row in the matrix.
         * @overload set_row_vector(const T (&v)[3], const unsigned int idx)
         */
        inline void set_row_vector(const T (&v)[3], const unsigned int idx)
        {
            for (int i = 0; i < 3; ++i) {
                data[idx][i] = v[i];
            }
        }

        /**
         * Set's the matrix's row vector at the specified index.
         * @warning This function requires enough memory allocated for at least 3 numeric values.
         * If less memory is allocated, this function will cause the program to
         * crash with a segmentation fault.
         * @param v A pointer to the start of an array whose values are asigned to the
         * matrix row.
         * @param idx The index of the row in the matrix.
         * @overload set_row_vector(const T *v, const unsigned int idx)
         */
        inline void set_row_vector(const T *v, const unsigned int idx)
        {
            for (int i = 0; i < 3; ++i) {
                data[idx][i] = v[i];
            }
        }

        /**
         * Sets the matrix's column vector at the specified index.
         * @param x The first value of the column.
         * @param y The second value of the column.
         * @param z The third value of the column.
         * @param idx The index of the column in the matrix.
         */
        inline void set_column_vector(const T x, const T y, const T z, const unsigned int idx)
        {
            data[0][idx] = x;
            data[1][idx] = y;
            data[2][idx] = z;
        }

        /**
         * Sets the matrix's column vector at the specified index.
         * @param vec A three dimensional vector whose values are asigned to the matrix's column.
         * @param idx The index of the column in the matrix.
         * @overload set_column_vector(const Vector3<T> &vec, const unsigned int idx)
         */
        inline void set_column_vector(const Vector3<T> &vec, const unsigned int idx)
        {
            for (int i = 0; i < 3; ++i) {
                data[i][idx] = vec[i];
            }
        }

        /**
         * Sets the matrix's column vector at the specified index.
         * @param v An array of size 3 whose values are assigned to the matrix's column.
         * @param idx The index of the column in the matrix.
         * @overload set_column_vector(const T (&v)[3], const unsigned int idx)
         */
        inline void set_column_vector(const T (&v)[3], const unsigned int idx)
        {
            for (int i = 0; i < 3; ++i) {
                data[i][idx] = v[i];
            }
        }

        /**
         * Sets the matrix's column vector at the specified index.
         * @warning This function requires enough memory allocated for at least 3 numeric values.
         * If less memory is allocated, this function will cause the program to
         * crash with a segmentation fault.
         * @param v A pointer to the start of an array whose values are assigned
         * to the matrix's column.
         * @param idx The index of the column in the matrix.
         * @overload set_column_vector(const T *v, const unsigned int idx)
         */
        inline void set_column_vector(const T *v, const unsigned int idx)
        {
            for (int i = 0; i < 3; ++i) {
                data[i][idx] = v[i];
            }
        }

        /**
         * Sets the matrix to identity.
         * @details The matrix main diagonal values are set to 1
         * and rest to 0.
         */
        inline void set_identity()
        {
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    data[i][j] = i == j ? 1 : 0;
                }
            }
        }

        /**
         * Adds a translation to the matrix.
         * @details Applies a translation to the matrix
         * using matrix multiplication.
         * @param x The x coordinate.
         * @param y The y coordinate.
         */
        inline void translate(const T x, const T y)
        {
            Matrix3<T> trans_mat{1, 0, x,
                                 0, 1, y,
                                 0, 0, 1};

            *this = *this * trans_mat;
        }

        /**
         * Applies a translation to the matrix.
         * @details Applies a translation to the matrix
         * using matrix multiplication.
         * @param vec The vector whose coordinates are used
         * as a translation for the matrix.
         * @overload translate(const Vector2<T> &vec)
         */
        inline void translate(const Vector2<T> &vec)
        {
            Matrix3<T> trans_mat{1, 0, vec.x,
                                 0, 1, vec.y,
                                 0, 0, 1};

            *this = *this * trans_mat;
        }

        /**
         * Applies a translation to the matrix.
         * @details Applies a translation to the matrix
         * using matrix multiplicaiton.
         * @param v An array of size 2 whose values are used
         * to apply the translation to the matrix.
         * @overload translate(const T (&v)[2])
         */
        inline void translate(const T (&v)[2])
        {
            Matrix3<T> trans_mat{1, 0, v[0],
                                 0, 1, v[1],
                                 0, 0, 1};

            *this = *this * trans_mat;
        }

        /**
         * Applies a translation to the matrix.
         * @warning This function requires enough memory allocated for at least 2 numeric values.
         * If less memory is allocated, this function will cause the program to
         * crash with a segmentation fault.
         * @param v A pointer to the start of an array whose values are used
         * to apply the translation to the matrix.
         * @overload translate(const T *v)
         */
        inline void translate(const T *v)
        {
            Matrix3<T> trans_mat{1, 0, v[0],
                                 0, 1, v[1],
                                 0, 0, 1};

            *this = *this * trans_mat;
        }

        /**
         * Applies a translation to the matrix and returns a new matrix instance.
         * @param x The x coordinate.
         * @param y The y coordinate.
         * @return A new Matrix3 instance as a result of the translation.
         */
        inline Matrix3<T> translated(const T x, const T y) const
        {
            Matrix3<T> trans_mat{1, 0, x,
                                 0, 1, y,
                                 0, 0, 1};

            return *this * trans_mat;
        }

        /**
         * Applies a translation to the matrix and returns a new matrix instance.
         * @param vec The vector whose coordinates are used
         * as a translation for the matrix.
         * @return A new Matrix3 instance as the result of the translation.
         * @overload translated(const Vector2<T> &vec) const
         */
        inline Matrix3<T> translated(const Vector2<T> &vec) const
        {
            Matrix3<T> trans_mat{1, 0, vec.x,
                                 0, 1, vec.y,
                                 0, 0, 1};

            return *this * trans_mat;
        }

        /**
         * Applies a translation to the matrix and returns a new matrix instance.
         * @param v An array of size 2 whose values are used as
         * a translation for the matrix.
         * @return A new Matrix3 instance as the result of the translation.
         * @overload translated(const T (&v)[2]) const
         */
        inline Matrix3<T> translated(const T (&v)[2]) const
        {
            Matrix3<T> trans_mat{1, 0, v[0],
                                 0, 1, v[1],
                                 0, 0, 1};

            return *this * trans_mat;
        }

        /**
         * Applies a translation to the matrix and returns a new matrix instance.
         * @warning This function requires enough memory allocated for at least 2 numeric values.
         * If less memory is allocated, this function will cause the program to
         * crash with a segmentation fault.
         * @param v A pointer to the start of an array whose values are used as
         * a tranlsation for the matrix.
         * @return A new Matrix3 instance as the result of the translation.
         * @overload translated(const T *v) const
         */
        inline Matrix3<T> translated(const T *v) const
        {
            Matrix3<T> trans_mat{1, 0, v[0],
                                 0, 1, v[1],
                                 0, 0, 1};

            return *this * trans_mat;
        }

        /**
         * Sets a translation to the matrix.
         * @note Replaces any previous translations applied to the matrix.
         * @param x The x coordinate.
         * @param y The y coordinate.
         */
        inline void set_translation(const T x, const T y)
        {
            set_column_vector(x, y, 1, 2);
        }

        /**
         * Sets a translation to the matrix.
         * @note Replaces any previous translations applied to the matrix.
         * @param vec A two dimensional vector whose values
         * are set as the translation.
         * @overload set_translation(const Vector2<T> &vec)
         */
        inline void set_translation(const Vector2<T> &vec)
        {
            set_column_vector(vec.x, vec.y, 1, 2);
        }

        /**
         * Sets a translation to the matrix.
         * @note Replaces any previous translations applied to the matrix.
         * @param v An array of size 2 whose values are set as the translation.
         * @overload set_translation(const T (&v)[2])
         */
        inline void set_translation(const T (&v)[2])
        {
            set_column_vector(v[0], v[1], 1, 2);
        }

        /**
         * Sets a translation to the matrix.
         * @note Replaces an previous translations applied to the matrix.
         * @warning This function requires enough memory allocated for at least 2 numeric values.
         * If less memory is allocated, this function will cause the program to
         * crash with a segmentation fault.
         * @param v An array of size 2 whose values are set as the translation.
         * @overload set_translation(const T *v)
         */
        inline void set_translation(const T *v)
        {
            set_column_vector(v[0], v[1], 1, 2);
        }

        inline void rotate(T x, T y, T z, float angle)
        {
            float c = cosf(angle);
            float s = sinf(angle);

            Vector3<T> row0(c + (1 - c) * x * x,
                            (1 - c) * x * y - s * z,
                            (1 - c) * x * z + s * y);

            Vector3<T> row1((1 - c) * x * y + s * z,
                            c + (1 - c) * y * y,
                            (1 - c) * y * z - s * x);

            Vector3<T> row2((1 - c) * x * z - s * y,
                            (1 - c) * y * z + s * x,
                            c + (1 - c) * z * z);

            *this *= Matrix3<T>{row0, row1, row2};
        }

        /**
         * Applies scaling to the matrix.
         * @param x The scale on the x axis.
         * @param y The scale on the y axis.
         * @param z The scale on the z axis.
         */
        inline void scale(const T x, const T y, const T z)
        {
            Matrix3<T> scale_mat{x, 0, 0,
                                 0, y, 0,
                                 0, 0, z};

            *this = *this * scale_mat;
        }

        /**
         * Applies scaling to the matrix.
         * @param vec A three dimensional vector whose coordinates are applied as scaling
         * to the respective axis.
         * @overload scale(const Vector3<T> &vec)
         */
        inline void scale(const Vector3<T> &vec)
        {
            Matrix3<T> scale_mat{vec.x, 0, 0,
                                 0, vec.y, 0,
                                 0, 0, vec.z};

            *this = *this * scale_mat;
        }

        /**
         * Applies scaling to the matrix.
         * @param v An array of size 3 whose values are applied as scaling
         * to the respective axis.
         * @note The index order maps to the coordinates in the following way:
         * @li 0 --> x
         * @li 1 --> y
         * @li 2 --> z
         * @overload scale(const T (&v)[3])
         */
        inline void scale(const T (&v)[3])
        {
            Matrix3<T> scale_mat{v[0], 0, 0,
                                 0, v[1], 0,
                                 0, 0, v[2]};

            *this = *this * scale_mat;
        }

        /**
         * Applies scaling to the matrix.
         * @warning This function requires enough memory allocated for at least 3 numeric values.
         * If less memory is allocated, this function will cause the program to
         * crash with a segmentation fault.
         * @param v A pointer to the start of an array whose values are applied as scaling
         * to the respective axis.
         * @note The index order maps to the coordinates in the following way:
         * @li 0 --> x
         * @li 1 --> y
         * @li 2 --> z
         * @overload scale(const T *v)
         */
        inline void scale(const T *v)
        {
            Matrix3<T> scale_mat{v[0], 0, 0,
                                 0, v[1], 0,
                                 0, 0, v[2]};

            *this = *this * scale_mat;
        }

        /**
         * Applies scaling to the matrix.
         * @param x The scale on the x axis.
         * @param y The scale on the y axis.
         * @param z The scale on the z axis.
         * @return A new scaled Matrix3 instance.
         */
        inline Matrix3<T> scaled(const T x, const T y, const T z) const
        {
            Matrix3<T> scale_mat{x, 0, 0,
                                 0, y, 0,
                                 0, 0, z};

            return *this * scale_mat;
        }

        /**
         * Applies scaling to the matrix.
         * @param vec A three dimensional vector whose values are used for scaling
         * each corresponding axis.
         * @return A new scaled Matrix3 instance.
         * @overload scaled(const Vector3<T> &vec) const
         */
        inline Matrix3<T> scaled(const Vector3<T> &vec) const
        {
            Matrix3<T> scale_mat{vec.x, 0, 0,
                                 0, vec.y, 0,
                                 0, 0, vec.z};

            return *this * scale_mat;
        }

        /**
         * Applies scaling to the matrix.
         * @param v An array of size 3 whose values are used for scaling
         * each corresponding axis.
         * @return A new scaled Matrix3 instance.
         * @overload scaled(const T (&v)[3]) const
         */
        inline Matrix3<T> scaled(const T (&v)[3]) const
        {
            Matrix3<T> scale_mat{v[0], 0, 0,
                                 0, v[1], 0,
                                 0, 0, v[2]};

            return *this * scale_mat;
        }

        /**
         * Applies scaling to the matrix
         * @warning This function requires enough memory allocated for at least 3 numeric values.
         * If less memory is allocated, this function will cause the program to
         * crash with a segmentation fault.
         * @param v A pointer to the start of an array whose values are used
         * for scaling each corresponding axis.
         * @return A new scaled Matrix3 instance.
         * @overload scaled(const T *v) const
         */
        inline Matrix3<T> scaled(const T *v) const
        {
            Matrix3<T> scale_mat{v[0], 0, 0,
                                 0, v[1], 0,
                                 0, 0, v[2]};

            return *this * scale_mat;
        }

        /**
         * Sets scaling to the matrix.
         * @note Replaces any previous scaling applied to the matrix.
         * @param x The scale on the x axis.
         * @param y The scale on the y axis.
         * @param z The scale on the z axis.
         */
        inline void set_scaling(const T x, const T y, const T z)
        {
            data[0][0] = x;
            data[1][1] = y;
            data[2][2] = z;
        }

        /**
         * Sets scaling to the matrix.
         * @note Replaces any previous scaling applied to the matrix.
         * @param vec A three dimensional vector whose values are set as scaling.
         * @overload set_scaling(const Vector3<T> &vec)
         */
        inline void set_scaling(const Vector3<T> &vec)
        {
            data[0][0] = vec.x;
            data[1][1] = vec.y;
            data[2][2] = vec.z;
        }

        /**
         * Sets scaling to the matrix.
         * @note Replaces any previous scaling applied to the matrix.
         * @param v An array of size 3 whose values are set as scaling.
         * @overload set_scaling(const T (&v)[3])
         */
        inline void set_scaling(const T (&v)[3])
        {
            data[0][0] = v[0];
            data[1][1] = v[1];
            data[2][2] = v[2];
        }

        /**
         * Sets scaling to the matrix
         * @note Replaces any previous scaling applied to the matrix.
         * @warning This function requires enough memory allocated for at least 3 numeric values.
         * If less memory is allocated, this function will cause the program to
         * crash with a segmentation fault.
         * @param v A pointer to the start of an array.
         * @overload set_scaling(const T *v)
         */
        inline void set_scaling(const T *v)
        {
            data[0][0] = v[0];
            data[1][1] = v[1];
            data[2][2] = v[2];
        }

        /**
         * Calculates the matrix transpose.
         */
        inline void transpose()
        {
            Matrix3<T> mat = *this;

            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    data[i][j] = mat[j][i];
                }
            }
        }

        /**
         * Calculates the matrix transpose.
         * @return A new transposed Matrix3 instance.
         */
        inline Matrix3<T> transposed() const
        {
            Matrix3<T> res;

            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    res[i][j] = (*this)[j][i];
                }
            }

            return res;
        }

        /**
         * Implicit conversion to pointer.
         * @return A pointer to the internal array of the matrix.
         */
        inline operator T *()
        {
            return data[0];
        }

        /**
         * Implicit conversion to a constant pointer.
         * @return A constant pointer to the internal array of the matrix.
         */
        inline operator const T *() const
        {
            return data[0];
        }

        /**
         * Subscript operator overload.
         * @param idx The index to be accessed from the internal array of the matrix.
         * @return A pointer to the internal array.
         */
        inline T *operator[](const unsigned int idx)
        {
            return data[idx];
        }

        /**
         * Subscript operator overload.
         * @param idx The index to be accessed from the internal array of the matrix.
         * @return A pointer to the internal array.
         */
        inline const T *operator[](const unsigned int idx) const
        {
            return data[idx];
        }

        /**
         * Assigns each value of the right hand side matrix operand
         * to the the left hand side matrix operand.
         * @param rhs The matrix assigned to the left hand side matrix operand.
         */
        inline void operator=(const Matrix3<T> &rhs)
        {
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    data[i][j] = rhs[i][j];
                }
            }
        }

        /**
         * Assigns each value of the Matrix2 to the upper 2x2 section
         * of the Matrix3.
         * @param rhs The 2x2 Matrix assigned to the upper 2x2 section of
         * the 3x3 matrix.
         */
        inline void operator=(const Matrix2<T> &rhs)
        {
            for (int i = 0; i < 2; ++i) {
                for (int j = 0; j < 2; ++j) {
                    data[i][j] = rhs[i][j];
                }
            }
        }

        /**
         * Performs index based addition of two three dimensional matrices.
         * @param rhs The matrix whose values will be added
         * to the left hand side operand.
         * @return A new Matrix3 instance resulting from the addition.
         */
        inline Matrix3<T> operator+(const Matrix3<T> &rhs) const
        {
            Matrix3<T> res;

            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    res[i][j] = data[i][j] + rhs[i][j];
                }
            }

            return res;
        }

        /**
         * Performs index based subtraction of two three dimensional matrices.
         * @param rhs The matrix whose values will be subtracted
         * from the left hand side operand.
         * @return A new Matrix3 instance resulting from the subtraction.
         */
        inline Matrix3<T> operator-(const Matrix3<T> &rhs) const
        {
            Matrix3<T> res;

            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    res[i][j] = data[i][j] - rhs[i][j];
                }
            }

            return res;
        }


        /**
         * Performs matrix multiplication.
         * @details Mutiplies the left hand side matrix operand with the right hand
         * side matrix operand.
         * @param rhs The right hand side matrix operand.
         * @return A new Matrix3 as the result of the matrix multiplication.
         */
        inline Matrix3<T> operator*(const Matrix3<T> &rhs) const
        {
            Matrix3<T> res;

            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    res[i][j] = data[i][0] * rhs[0][j] + data[i][1] * rhs[1][j]
                                + data[i][2] * rhs[2][j];
                }
            }

            return res;
        }

        /**
         * Performs index based addition between two four dimensional matrices.
         * @param rhs The matrix whose values will be added
         * to the left hand side operand.
         */
        inline void operator+=(const Matrix3<T> &rhs)
        {
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    data[i][j] += rhs[i][j];
                }
            }
        }

        /**
         * Performs index based subtraction between two four dimensional matrices.
         * @param rhs The matrix whose values will be subtracted
         * from the left hand side operand.
         */
        inline void operator-=(const Matrix3<T> &rhs)
        {
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    data[i][j] -= rhs[i][j];
                }
            }
        }

        /**
         * Performs matrix multiplication.
         * @details Mutiplies the left hand side matrix operand with the right hand
         * side matrix operand.
         * @param rhs The right hand side matrix operand.
         */
        inline void operator*=(const Matrix3<T> &rhs)
        {
            *this = *this * rhs;
        }

        /**
         * Performs index based addition between a three dimensional matrix and a scalar.
         * @param rhs The scalar to be added to each value of the matrix.
         * @return A new Matrix3 instance resulting from the addition.
         */
        inline Matrix3<T> operator+(const T rhs) const
        {
            Matrix3<T> res;

            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    res[i][j] = data[i][j] + rhs;
                }
            }

            return res;
        }

        /**
         * Performs index based subtraction between a three dimensional matrix and a scalar.
         * @param rhs The scalar to be subtracted from each value of the matrix.
         * @return A new Matrix3 instance resulting from the subtraction.
         */
        inline Matrix3<T> operator-(const T rhs) const
        {
            Matrix3<T> res;

            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    res[i][j] = data[i][j] - rhs;
                }
            }

            return res;
        }

        /**
         * Perform index based multiplication between a three dimensional matrix and a scalar.
         * @param rhs The scalar to be multiplied with each value of the matrix.
         * @return A new Matrix3 instance resulting from the multiplication.
         */
        inline Matrix3<T> operator*(const T rhs) const
        {
            Matrix3<T> res;

            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    res[i][j] = data[i][j] * rhs;
                }
            }

            return res;
        }

        /**
         * Performs index based division between a three dimensional matrix and a scalar.
         * @param rhs The scalar to divide each value of the matrix by.
         * @return A new Matrix3 instance resulting from the multiplicaiton.
         */
        inline Matrix3<T> operator/(const T rhs) const
        {
            Matrix3<T> res;

            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    res[i][j] = data[i][j] / rhs;
                }
            }

            return res;
        }

        /**
         * Performs index based addition between a three dimensional matrix and a scalar.
         * @param rhs The scalar to be added to each value of the matrix.
         */
        inline void operator+=(const T rhs)
        {
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    data[i][j] += rhs;
                }
            }
        }

        /**
         * Performs index based subtraction between a three dimensional matrix and a scalar.
         * @param rhs The scalar to be subtracted from each value of the matrix.
         */
        inline void operator-=(const T rhs)
        {
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    data[i][j] -= rhs;
                }
            }
        }

        /**
         * Performs index based multiplication between a three dimensional matrix and a scalar.
         * @param rhs The scalar to be multiplied with each value of the matrix.
         */
        inline void operator*=(const T rhs)
        {
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    data[i][j] *= rhs;
                }
            }
        }

        /**
         * Performs index based division between a three dimensional matrix and a scalar.
         * @param rhs The scalar to divide each value of the matrix by.
         */
        inline void operator/=(const T rhs)
        {
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    data[i][j] /= rhs;
                }
            }
        }

        /**
         * Equality operator overload.
         * @warning May not work as intended for floating point matrices.
         * @param rhs The right hand side matrix operand with whom equality is tested.
         * @return True only when all values of both matrices are equal.
         */
        inline bool operator==(const Matrix3<T> &rhs) const
        {
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    if (data[i][j] != rhs[i][j]) {
                        return false;
                    }
                }
            }

            return true;
        }

        /**
         * Non equality operator overload.
         * @warning May not work as intended for floating point matrices.
         * @param rhs The right hand side matrix operand with whom non equality is tested.
         * @return True when one of the matrix's values is not equal the the other's.
         */
        inline bool operator!=(const Matrix3<T> &rhs) const
        {
            return !(*this == rhs);
        }
    };

    /**
      * Performs multiplication between the matrix and the vector.
      * @param vec The three dimensional vector to be multiplied with the matrix.
      * @return A new Vector3 instance as the result of the multiplication.
      */
    template<typename T>
    inline Vector3<T> operator*(const Matrix3<T> &lhs, const Vector3<T> &rhs)
    {
        Vector3<T> res;

        for (int i = 0; i < 3; ++i) {
            res[i] = lhs[i][0] * rhs.x + lhs[i][1] * rhs.y
                     + lhs[i][2] * rhs.z;
        }

        return res;
    }

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
        Matrix4<T>(const T m00, const T m01, const T m02, const T m03,
                   const T m10, const T m11, const T m12, const T m13,
                   const T m20, const T m21, const T m22, const T m23,
                   const T m30, const T m31, const T m32, const T m33)
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
         * Matrix4's row constructor.
         * @param i_row The first row of the matrix.
         * @param j_row The second row of the matrix.
         * @param k_row The third row of the matrix.
         * @param l_row The fourth row of the matrix.
         * @return A new Matrix4 constructed with the arguments passed.
         */
        Matrix4<T>(const Vector4<T> &i_row, const Vector4<T> &j_row,
                   const Vector4<T> &k_row, const Vector4<T> &l_row)
        {
            set_row_vector(i_row, 0);
            set_row_vector(j_row, 1);
            set_row_vector(k_row, 2);
            set_row_vector(l_row, 3);
        }

        /**
         * Matrix4's constructor from a Matrix3.
         * @param mat The 3x3 matrix.
         * @return A new Matrix4 constructed from a Matrix3.
         */
        Matrix4<T>(const Matrix3<T> &mat)
        {
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    data[i][j] = mat[i][j];
                }
            }
        }

        /**
         * Sets the matrix's row vector at the specified index.
         * @param x The first value of the row.
         * @param y The second value of the row.
         * @param z The third value of the row.
         * @param w The fourth value of the row.
         * @param idx The index of the row in the matrix.
         */
        inline void set_row_vector(const T x, const T y, const T z, const T w, const unsigned int idx)
        {
            data[idx][0] = x;
            data[idx][1] = y;
            data[idx][2] = z;
            data[idx][3] = w;
        }

        /**
         * Sets the matrix's row vector at the specified index.
         * @param vec A four dimensional vector whos values are assigned to the matrix row.
         * @param idx The index of the row in the matrix.
         * @overload set_row_vector(const Vector4<T> &vec, const unsigned int idx)
         */
        inline void set_row_vector(const Vector4<T> &vec, const unsigned int idx)
        {
            for (int i = 0; i < 4; ++i) {
                data[idx][i] = vec[i];
            }
        }

        /**
         * Sets the matrix's row vector at the specified index.
         * @param v An array of size 4 whose values are assigned to the matrix row.
         * @param idx The index of the row in the matrix.
         * @overload set_row_vector(const T (&v)[4], const unsigned int idx)
         */
        inline void set_row_vector(const T (&v)[4], const unsigned int idx)
        {
            for (int i = 0; i < 4; ++i) {
                data[idx][i] = v[i];
            }
        }

        /**
         * Sets the matrix's row vector at the specified index.
         * @warning This function requires enough memory allocated for at least 4 numeric values.
         * If less memory is allocated, this function will cause the program to
         * crash with a segmentation fault.
         * @param v A pointer to the start of an array whose values are assigned to
         * the matrix row.
         * @param idx The index of the row in the matrix.
         * @overload set_row_vector(const T *v, const unsigned int idx)
         */
        inline void set_row_vector(const T *v, const unsigned int idx)
        {
            for (int i = 0; i < 4; ++i) {
                data[idx][i] = v[i];
            }
        }

        /**
         * Sets the matrix's column vector at the specified index.
         * @param x The first value of the column.
         * @param y The second value of the column.
         * @param z The third value of the column.
         * @param w The fourth value of the column.
         * @param idx The index of the column in the matrix.
         */
        inline void set_column_vector(const T x, const T y, const T z, const T w, const unsigned int idx)
        {
            data[0][idx] = x;
            data[1][idx] = y;
            data[2][idx] = z;
            data[3][idx] = w;
        }

        /**
         * Sets the matrix's column vector at the specified index.
         * @param vec A four dimensional vector whose values are assigned to the matrix column.
         * @param idx The index of the column in the matrix.
         * @overload set_column_vector(const Vector4<T> &vec, const unsigned int idx)
         */
        inline void set_column_vector(const Vector4<T> &vec, const unsigned int idx)
        {
            for (int i = 0; i < 4; ++i) {
                data[i][idx] = vec[i];
            }
        }

        /**
         * Sets the matrix's column vector at the specified index.
         * @param v An array of size 4 whose values are assigned to the matrix column.
         * @param idx The index of the column in the matrix.
         * @overload set_column_vector(const T (&v)[4], const unsigned int idx)
         */
        inline void set_column_vector(const T (&v)[4], const unsigned int idx)
        {
            for (int i = 0; i < 4; ++i) {
                data[i][idx] = v[i];
            }
        }

        /**
         * Sets the matrix's column vector at the specified index.
         * @warning This function requires enough memory allocated for at least 4 numeric values.
         * If less memory is allocated, this function will cause the program to
         * crash with a segmentation fault.
         * @param v A pointer to the start of an array whose values are assigned
         * to the matrix column.
         * @param idx The index of the column in the matrix.
         * @overload set_column_vector(const T *v, const unsigned int idx)
         */
        inline void set_column_vector(const T *v, const unsigned int idx)
        {
            for (int i = 0; i < 4; ++i) {
                data[i][idx] = v[i];
            }
        }

        /**
         * Sets the matrix to identity.
         * @details The matrix main diagonal values are set to 1
         * and rest to 0.
         */
        inline void set_identity()
        {
            for (int i = 0; i < 4; ++i) {
                for (int j = 0; j < 4; ++j) {
                    data[i][j] = i == j ? 1 : 0;
                }
            }
        }

        /**
         * Adds a translation to the matrix.
         * @details Applies a translation to the matrix
         * using matrix multiplication.
         * @param x The x coordinate.
         * @param y The y coordinate.
         * @param z The z coordinate.
         */
        inline void translate(const T x, const T y, const T z)
        {
            Matrix4<T> trans_mat{1, 0, 0, x,
                                 0, 1, 0, y,
                                 0, 0, 1, z,
                                 0, 0, 0, 1};

            *this = *this * trans_mat;
        }

        /**
         * Applies a translation to the matrix.
         * @details Applies a translation to the matrix
         * using matrix multiplication.
         * @param vec The vector whose coordinates are used
         * as a translation for the matrix.
         * @overload translate(const Vector3<T> &vec)
         */
        inline void translate(const Vector3<T> &vec)
        {
            Matrix4<T> trans_mat{1, 0, 0, vec.x,
                                 0, 1, 0, vec.y,
                                 0, 0, 1, vec.z,
                                 0, 0, 0, 1};

            *this = *this * trans_mat;
        }

        /**
         * Applies a translation to the matrix.
         * @details Applies a translation to the matrix
         * using matrix multiplicaiton.
         * @param v An array of size 3 whose values are used
         * to apply the translation to the matrix.
         * @overload translate(const T (&v)[3])
         */
        inline void translate(const T (&v)[3])
        {
            Matrix4<T> trans_mat{1, 0, 0, v[0],
                                 0, 1, 0, v[1],
                                 0, 0, 1, v[2],
                                 0, 0, 0, 1};

            *this = *this * trans_mat;
        }

        /**
         * Applies a translation to the matrix.
         * @details Applies a translation to the matrix
         * using matrix multiplication.
         * @warning This function requires enough memory allocated for at least 3 numeric values.
         * If less memory is allocated, this function will cause the program to
         * crash with a segmentation fault.
         * @param v A pointer to the start of an array whose values are used
         * to apply the translation to the matrix.
         * @overload translate(const T *v)
         */
        inline void translate(const T *v)
        {
            Matrix4<T> trans_mat{1, 0, 0, v[0],
                                 0, 1, 0, v[1],
                                 0, 0, 1, v[2],
                                 0, 0, 0, 1};

            *this = *this * trans_mat;
        }

        /**
         * Applies a translation to the matrix and returns a new matrix instance.
         * @param x The x coordinate.
         * @param y The y coordinate.
         * @param z The z coordinate.
         * @return A new Matrix4 instance as a result of the translation.
         */
        inline Matrix4<T> translated(const T x, const T y, const T z) const
        {
            Matrix4<T> trans_mat{1, 0, 0, x,
                                 0, 1, 0, y,
                                 0, 0, 1, z,
                                 0, 0, 0, 1};

            return *this * trans_mat;
        }

        /**
         * Applies a translation to the matrix and returns a new matrix instance.
         * @param vec The vector whose coordinates are used
         * as a translation for the matrix.
         * @return A new Matrix4 instance as the result of the translation.
         * @overload translated(const Vector3<T> &vec) const
         */
        inline Matrix4<T> translated(const Vector3<T> &vec) const
        {
            Matrix4<T> trans_mat{1, 0, 0, vec.x,
                                 0, 1, 0, vec.y,
                                 0, 0, 1, vec.z,
                                 0, 0, 0, 1};

            return *this * trans_mat;
        }

        /**
         * Applies a translation to the matrix and returns a new matrix instance.
         * @param v An array of size 3 whose values are used as
         * a translation for the matrix.
         * @return A new Matrix4 instance as the result of the translation.
         * @overload translated(const T (&v)[3]) const
         */
        inline Matrix4<T> translated(const T (&v)[3]) const
        {
            Matrix4<T> trans_mat{1, 0, 0, v[0],
                                 0, 1, 0, v[1],
                                 0, 0, 1, v[2],
                                 0, 0, 0, 1};

            return *this * trans_mat;
        }

        /**
         * Applies a translation to the matrix and returns a new matrix instance.
         * @warning This function requires enough memory allocated for at least 3 numeric values.
         * If less memory is allocated, this function will cause the program to
         * crash with a segmentation fault.
         * @param v A pointer to the start of an array whose values are used as
         * a translation for the matrix.
         * @return A new Matrix4 instance as the result of the translation.
         * @overload translated(const T *v) const
         */
        inline Matrix4<T> translated(const T *v) const
        {
            Matrix4<T> trans_mat{1, 0, 0, v[0],
                                 0, 1, 0, v[1],
                                 0, 0, 1, v[2],
                                 0, 0, 0, 1};

            return *this * trans_mat;
        }

        /**
         * Sets a translation to the matrix.
         * @note Replaces any previous translations applied to the matrix.
         * @param x The x coordinate.
         * @param y The y coordinate.
         * @param z The z coordinate.
         */
        inline void set_translation(const T x, const T y, const T z)
        {
            set_column_vector(x, y, z, 1, 3);
        }

        /**
         * Sets a translation to the matrix.
         * @note Replaces any previous translations applied to the matrix.
         * @param vec A three dimensional vector whose values
         * are set as the translation.
         * @overload set_translation(const Vector3<T> &vec)
         */
        inline void set_translation(const Vector3<T> &vec)
        {
            set_column_vector(vec.x, vec.y, vec.z, 1, 3);
        }

        /**
         * Sets a translation to the matrix.
         * @note Replaces any previous translations applied to the matrix.
         * @param v An array of size 3 whose values are set as the translation.
         * @overload set_translation(const T (&v)[3])
         */
        inline void set_translation(const T (&v)[3])
        {
            set_column_vector(v[0], v[1], v[2], 1, 3);
        }

        /**
         * Sets a translation to the matrix.
         * @note Replaces any previous translations applied to the matrix.
         * @warning This function requires enough memory allocated for at least 3 numeric values.
         * If less memory is allocated, this function will cause the program to
         * crash with a segmentation fault.
         * @param v A pointer to the start of an array whose values are set as
         * the translation.
         * @overload set_translation(const T *v)
         */
        inline void set_translation(const T *v)
        {
            set_column_vector(v[0], v[1], v[2], 1, 3);
        }

        /**
         * Applies scaling to the matrix.
         * @param x The scale on the x axis.
         * @param y The scale on the y axis.
         * @param z The scale on the z axis.
         * @param w The scale on the w axis.
         */
        inline void scale(const T x, const T y, const T z, const T w)
        {
            Matrix4<T> scale_mat{x, 0, 0, 0,
                                 0, y, 0, 0,
                                 0, 0, z, 0,
                                 0, 0, 0, w};

            *this = *this * scale_mat;
        }

        /**
         * Applies scaling to the matrix.
         * @param vec A four dimensional vector whose coordinates are applied as scaling
         * to the respective axis.
         * @overload scale(const Vector4<T> &vec)
         */
        inline void scale(const Vector4<T> &vec)
        {
            Matrix4<T> scale_mat{vec.x, 0, 0, 0,
                                 0, vec.y, 0, 0,
                                 0, 0, vec.z, 0,
                                 0, 0, 0, vec.w};

            *this = *this * scale_mat;
        }

        /**
         * Applies scaling to the matrix.
         * @param v An array of size 4 whose values are applied as scaling
         * to the respective axis.
         * @note The idex order maps to the coordinates in the following way:
         * @li 0 --> x
         * @li 1 --> y
         * @li 2 --> z
         * @li 3 --> w
         * @overload scale(const T (&v)[4])
         */
        inline void scale(const T (&v)[4])
        {
            Matrix4<T> scale_mat{v[0], 0, 0, 0,
                                 0, v[1], 0, 0,
                                 0, 0, v[2], 0,
                                 0, 0, 0, v[3]};

            *this *= scale_mat;
        }

        /**
         * Applies scaling to the matrix.
         * @warning This function requires enough memory allocated for at least 4 numeric values.
         * If less memory is allocated, this function will cause the program to
         * crash with a segmentation fault.
         * @param v A pointer to the start of an array whose values are
         * applied as scaling to the respective axis.
         * @note The idex order maps to the coordinates in the following way:
         * @li 0 --> x
         * @li 1 --> y
         * @li 2 --> z
         * @li 3 --> w
         * @overload scale(const T *v)
         */
        inline void scale(const T *v)
        {
            Matrix4<T> scale_mat{v[0], 0, 0, 0,
                                 0, v[1], 0, 0,
                                 0, 0, v[2], 0,
                                 0, 0, 0, v[3]};

            *this *= scale_mat;
        }

        /**
         * Applies scaling to the matrix.
         * @param x The scale on the x axis.
         * @param y The scale on the y axis.
         * @param z The scale on the z axis.
         * @param w The scale on the w axis.
         * @return A new scaled Matrix4 instance.
         */
        inline Matrix4<T> scaled(const T x, const T y, const T z, const T w) const
        {
            Matrix4<T> scale_mat{x, 0, 0, 0,
                                 0, y, 0, 0,
                                 0, 0, z, 0,
                                 0, 0, 0, w};

            return *this * scale_mat;
        }

        /**
         * Applies scaling to the matrix.
         * @param vec A four dimensional vector whose values are used for scaling
         * each corresponding axis.
         * @return A new scaled Matrix4 instance.
         * @overload scaled(const Vector4<T> &vec) const
         */
        inline Matrix4<T> scaled(const Vector4<T> &vec) const
        {
            Matrix4<T> scale_mat{vec.x, 0, 0, 0,
                                 0, vec.y, 0, 0,
                                 0, 0, vec.z, 0,
                                 0, 0, 0, vec.w};

            return *this * scale_mat;
        }

        /**
         * Applies scaling to the matrix.
         * @param v An array of size 4 whose values are used for scaling each
         * corresponding axis.
         * @return A new scaled Matrix4 instance.
         * @overload scaled(const T (&v)[4]) const
         */
        inline Matrix4<T> scaled(const T (&v)[4]) const
        {
            Matrix4<T> scale_mat{v[0], 0, 0, 0,
                                 0, v[1], 0, 0,
                                 0, 0, v[2], 0,
                                 0, 0, 0, v[3]};

            return *this * scale_mat;
        }

        /**
         * Applies scaling to the matrix.
         * @warning This function requires enough memory allocated for at least 4 numeric values.
         * If less memory is allocated, this function will cause the program to
         * crash with a segmentation fault.
         * @param v A pointer to the start of an array whose values are used
         * for scaling each corresponding axis.
         * @return A new scaled Matrix4 instance.
         * @overload scaled(const T *v) const
         */
        inline Matrix4<T> scaled(const T *v) const
        {
            Matrix4<T> scale_mat{v[0], 0, 0, 0,
                                 0, v[1], 0, 0,
                                 0, 0, v[2], 0,
                                 0, 0, 0, v[3]};

            return *this * scale_mat;
        }

        /**
         * Sets scaling to the matrix.
         * @note Replaces any previous scaling applied to the matrix.
         * @param x The scale on the x axis.
         * @param y The scale on the y axis.
         * @param z The scale on the z axis.
         * @param w The scale on the w axis.
         */
        inline void set_scaling(const T x, const T y, const T z, const T w)
        {
            data[0][0] = x;
            data[1][1] = y;
            data[2][2] = z;
            data[3][3] = w;
        }

        /**
         * Sets scaling to the matrix.
         * @note Replaces any previous scaling applied to the matrix.
         * @param vec A four dimensional vector whose values are set as scaling.
         * @overload set_scaling(const Vector4<T> &vec)
         */
        inline void set_scaling(const Vector4<T> &vec)
        {
            for (int i = 0; i < 4; ++i) {
                data[i][i] = vec[i];
            }
        }

        /**
         * Sets scaling to the matrix.
         * @note Replaces any previous scaling applied to the matrix.
         * @param v An array of size 4 whose values are set as scaling.
         * @overload set_scaling(const T (&v)[4])
         */
        inline void set_scaling(const T (&v)[4])
        {
            for (int i = 0; i < 4; ++i) {
                data[i][i] = v[i];
            }
        }

        /**
         * Sets scaling to the matrix.
         * @note Replaces any previous scaling applied to the matrix.
         * @warning This function requires enough memory allocated for at least 4 numeric values.
         * If less memory is allocated, this function will cause the program to
         * crash with a segmentation fault.
         * @param v A pointer to the start of an array whose values are
         * set as scaling.
         * @overload set_scaling(const T *v)
         */
        inline void set_scaling(const T *v)
        {
            for (int i = 0; i < 4; ++i) {
                data[i][i] = v[i];
            }
        }

        /**
         * Calculates the determinant of the matrix.
         * @return The calculated determinant as a double precision
         * floating point number.
         */
        inline double determinant() const
        {
            double det11 = data[1][1] * (data[2][2] * data[3][3] - data[3][2] * data[2][3]) -
                           data[1][2] * (data[2][1] * data[3][3] - data[3][1] * data[2][3]) +
                           data[1][3] * (data[2][1] * data[3][2] - data[3][1] * data[2][2]);

            double det12 = data[1][0] * (data[2][2] * data[3][3] - data[3][2] * data[2][3]) -
                           data[1][2] * (data[2][0] * data[3][3] - data[3][0] * data[2][3]) +
                           data[1][3] * (data[2][0] * data[3][2] - data[3][0] * data[2][2]);

            double det13 = data[1][0] * (data[2][1] * data[3][3] - data[3][1] * data[2][3]) -
                           data[1][1] * (data[2][0] * data[3][3] - data[3][0] * data[2][3]) +
                           data[1][3] * (data[2][0] * data[3][1] - data[3][0] * data[2][1]);

            double det14 = data[1][0] * (data[2][1] * data[3][2] - data[3][1] * data[2][2]) -
                           data[1][1] * (data[2][0] * data[3][2] - data[3][0] * data[2][2]) +
                           data[1][2] * (data[2][0] * data[3][1] - data[3][0] * data[2][1]);

            return data[0][0] * det11 - data[0][1] * det12 + data[0][2] * det13 - data[0][3] * det14;
        }

        /**
         * Calculates the determinant of the matrix.
         * @return The calculated determinant as a floating point number.
         */
        inline float determinantf() const
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

        /**
         * Calculates the matrix transpose.
         */
        inline void transpose()
        {
            Matrix4<T> mat{*this};

            for (int i = 0; i < 4; ++i) {
                for (int j = 0; j < 4; ++j) {
                    data[i][j] = mat[j][i];
                }
            }
        }

        /**
         * Calculates the matrix transpose.
         * @return A new transposed Matrix4 instance.
         */
        inline Matrix4<T> transposed() const
        {
            Matrix4<T> res;

            for (int i = 0; i < 4; ++i) {
                for (int j = 0; j < 4; ++j) {
                    res[i][j] = (*this)[j][i];
                }
            }

            return res;
        }

        /**
         * Implicit conversion to pointer.
         * @return A pointer to the internal array of the matrix.
         */
        inline operator T *()
        {
            return data[0];
        }

        /**
         * Implicit conversion to a constant pointer.
         * @return A constant pointer to the internal array of the matrix.
         */
        inline operator const T *() const
        {
            return data[0];
        }

        /**
         * Subscript operator overload.
         * @param idx The index to be accessed from the internal array of the matrix.
         * @return A pointer to the internal array.
         */
        inline T *operator[](const unsigned int idx)
        {
            return data[idx];
        }

        /**
         * Subscript operator overload.
         * @param idx The to be accessed from the internal array of the matrix.
         * @return A constant pointer to the internal array.
         */
        inline const T *operator[](const unsigned int idx) const
        {
            return data[idx];
        }

        /**
         * Assigns each value of the Matrix3 to the upper 3x3 section
         * of the Matrix4.
         * @param rhs The 3x3 Matrix assigned to the upper 3x3 section of
         * the 4x4 matrix.
         */
        inline Matrix4<T> &operator=(const Matrix3<T> &rhs)
        {
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    data[i][j] = rhs[i][j];
                }
            }

            return *this;
        }



        /**
         * Performs index based addition between two four dimensional matrices.
         * @param rhs The matrix whose values will be added
         * to the left hand side operand.
         */
        inline Matrix4<T> &operator+=(const Matrix4<T> &rhs)
        {
            for (int i = 0; i < 4; ++i) {
                for (int j = 0; j < 4; ++j) {
                    data[i][j] += rhs[i][j];
                }
            }

            return *this;
        }

        /**
         * Performs index based subtraction between two four dimensional matrices.
         * @param rhs The matrix whose values will be subtracted
         * from the left hand side operand.
         */
        inline Matrix4<T> &operator-=(const Matrix4<T> &rhs)
        {
            for (int i = 0; i < 4; ++i) {
                for (int j = 0; j < 4; ++j) {
                    data[i][j] -= rhs[i][j];
                }
            }

            return *this;
        }

        /**
         * Performs matrix multiplication.
         * @details Mutiplies the left hand side matrix operand with the right hand
         * side matrix operand.
         * @param rhs The right hand side matrix operand.
         */
        inline Matrix4<T> &operator*=(const Matrix4<T> &rhs)
        {
            Matrix4<T> res;

            for (int i = 0; i < 4; ++i) {
                for (int j = 0; j < 4; ++j) {
                    res[i][j] = data[i][0] * rhs[0][j] + data[i][1] * rhs[1][j]
                                + data[i][2] * rhs[2][j] + data[i][3] * rhs[3][j];
                }
            }

            *this = res;

            return *this;
        }

        /**
         * Performs index based addition between a four dimensional matrix and a scalar.
         * @param rhs The scalar to be added to each value of the matrix.
         */
        inline Matrix4<T> &operator+=(const T rhs)
        {
            for (int i = 0; i < 4; ++i) {
                for (int j = 0; j < 4; ++j) {
                    data[i][j] += rhs;
                }
            }

            return *this;
        }

        /**
         * Performs index based subtraction between a four dimensional matrix and a scalar.
         * @param rhs The scalar to be subtracted from each value of the matrix.
         */
        inline Matrix4<T> &operator-=(const T rhs)
        {
            for (int i = 0; i < 4; ++i) {
                for (int j = 0; j < 4; ++j) {
                    data[i][j] -= rhs;
                }
            }

            return *this;
        }

        /**
         * Performs index based multiplication between a four dimensional matrix and a scalar.
         * @param rhs The scalar to be multiplied with each value of the matrix.
         */
        inline Matrix4<T> &operator*=(const T rhs)
        {
            for (int i = 0; i < 4; ++i) {
                for (int j = 0; j < 4; ++j) {
                    data[i][j] *= rhs;
                }
            }

            return *this;
        }

        /**
         * Performs index based division between a four dimensional matrix and a scalar.
         * @param rhs The scalar to divide each value of the matrix by.
         */
        inline Matrix4<T> &operator/=(const T rhs)
        {
            for (int i = 0; i < 4; ++i) {
                for (int j = 0; j < 4; ++j) {
                    data[i][j] /= rhs;
                }
            }

            return *this;
        }
    };

    /**
      * Performs index based addition of two four dimensional matrices.
      * @param rhs The matrix whose values will be added
      * to the left hand side operand.
      * @return A new Matrix4 instance resulting from the addition.
      */
    template<typename T>
    inline Matrix4<T> operator+(Matrix4<T> lhs, const Matrix4<T> &rhs)
    {
        lhs += rhs;

        return lhs;
    }

    /**
     * Performs index based subtraction of two four dimensional matrices.
     * @param rhs The matrix whose values will be subtracted
     * from the left hand side operand.
     * @return A new Matrix4 instance resulting from the subtraction.
     */
    template<typename T>
    inline Matrix4<T> operator-(Matrix4<T> lhs, const Matrix4<T> &rhs)
    {
        lhs -= rhs;

        return lhs;
    }

    /**
     * Performs matrix multiplication.
     * @details Mutiplies the left hand side matrix operand with the right hand
     * side matrix operand.
     * @param rhs The right hand side matrix operand.
     * @return A new Matrix4 as the result of the matrix multiplication.
     */
    template<typename T>
    inline Matrix4<T> operator*(Matrix4<T> lhs, const Matrix4<T> &rhs)
    {
        lhs *= rhs;

        return lhs;
    }

    /**
      * Performs index based addition between a four dimensional matrix and a scalar.
      * @param rhs The scalar to be added to each value of the matrix.
      * @return A new Matrix4 instance resulting from the addition.
      */
    template<typename T>
    inline Matrix4<T> operator+(Matrix4<T> lhs, const T rhs)
    {
        lhs += rhs;

        return lhs;
    }

    template<typename T>
    inline Matrix4<T> operator+(const T lhs, Matrix4<T> rhs)
    {
        //TODO: Test this.
        return rhs + lhs;
    }

    /**
     * Performs index based subtraction between a four dimensional matrix and a scalar.
     * @param rhs The scalar to be subtracted from each value of the matrix.
     * @return A new Matrix4 instance resulting from the subtraction.
     */
    template<typename T>
    inline Matrix4<T> operator-(Matrix4<T> lhs, const T rhs)
    {
        lhs -= rhs;

        return lhs;
    }

    template<typename T>
    inline Matrix4<T> operator-(const T lhs, Matrix4<T> rhs)
    {
        //TODO: Test this.
        return rhs - lhs;
    }

    /**
     * Perform index based multiplication between a four dimensional matrix and a scalar.
     * @param rhs The scalar to be multiplied with each value of the matrix.
     * @return A new Matrix4 instance resulting from the multiplication.
     */
    template<typename T>
    inline Matrix4<T> operator*(Matrix4<T> lhs, const T rhs)
    {
        lhs *= rhs;

        return lhs;
    }

    template<typename T>
    inline Matrix4<T> operator*(const T lhs, Matrix4<T> rhs)
    {
        //TODO: Test this.
        return rhs * lhs;
    }

    /**
     * Performs index based division between a four dimensional matrix and a scalar.
     * @param rhs The scalar to divide each value of the matrix by.
     * @return A new Matrix4 instance resulting from the multiplicaiton.
     */
    template<typename T>
    inline Matrix4<T> operator/(Matrix4<T> lhs, const T rhs)
    {
        lhs /= rhs;

        return lhs;
    }

    template<typename T>
    inline Matrix4<T> operator/(const T lhs, Matrix4<T> rhs)
    {
        //TODO: Test this.
        return rhs / lhs;
    }

    /**
      * Performs multiplication between the matrix and the vector.
      * @param vec The four dimensional vector to be multiplied with the matrix.
      * @return A new Vector4 instance as the result of the multiplication.
      */
    template<typename T>
    inline Vector4<T> operator*(const Matrix4<T> &lhs, const Vector4<T> &vec)
    {
        Vector4<T> res;

        for (int i = 0; i < 4; ++i) {
            res[i] = lhs[i][0] * vec.x + lhs[i][1] * vec.y
                     + lhs[i][2] * vec.z + lhs[i][3] * vec.w;
        }

        return res;
    }

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

} //namespace hm

#endif //HELMATH_MATRIX_H
