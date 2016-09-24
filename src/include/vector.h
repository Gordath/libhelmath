#ifndef HELMATH_VECTOR_H
#define HELMATH_VECTOR_H

/**
 * @file vector.h
 * This file defines the Vector templated classes.
 */

#include <cmath>
#include "internal/swizzle.h"

/**
 * @namespace hm
 * This is helmath's namespace.
 * @details All of helmaths code will be inside hm to avoid name collisions.
 */
namespace hm {

template<typename T>
class Matrix2;

template<typename T>
class Matrix3;

template<typename T>
class Matrix4;

/**
 * @class Vector2
 * @tparam T Can be any numeric type.
 * @brief A class that represents a 2 dimensional vector.
 * @details Vector2 is a class that represents a 2 dimensional
 * vector. It supports accessing the vector's values in various
 * ways to accommodate different use cases:
 * @li position coordinates
 * @li texture coordinates
 * @details Swizzles are available for all data representations.
 * @note This class uses macros to generate the swizzle classes and
 * the swizzle public members. The macros used are the following:
 * @note Private classes macros:
 * @li @ref HM_SWIZZLE2_CLASSES
 * @note Swizzle public members macro:
 * @li @ref HM_VEC2_SWIZZLES
 */
template<typename T>
class Vector2 {
private:
    HM_SWIZZLE2_CLASSES(2)

public:
    /**
     * This union is used in order to be able to use
     * different vector member names depending on the vector usage
     * as well as access the vector using swizzles.
     * @details Position coordinate representation:
     * @li x
     * @li y
     * @details Texture coordinate representation:
     * @li s
     * @li t
     * @details All the cobinations for both representations are
     * available as swizzles.
     * @details e.g.:
     * @details Asume a vector v(1.0f, 2.0f). Using the xx swizzle:
     * @code
     * Vector2<float> v2 = v.xx;
     * @endcode
     * @details Then v2 values are v2(1.0f, 1.0f).
     */
    union {
        struct {
            T x;
            T y;
        };

        struct {
            T s;
            T t;
        };

        /**
         * Array representations of the vector.
         */
        T v[2];

        HM_VEC2_SWIZZLES
    };

    /**
     * Default Vector2 constructor.
     * @details Initializes Vector2's values to 0.
     * @return A new Vector2.
     */
    Vector2() : x(0), y(0)
    {}

    /**
     * Vector2's single argument constructor.
     * @details Initializes Vector2's values with the argument passed.
     * @param val The numeric value used to initialize Vector2's values.
     * @return A new Vector2.
     */
    explicit Vector2(const T val) : x(val), y(val)
    {}

    /**
     * Vector2's two argument constructor.
     * @details Initializes Vector2's values with the arguments passed.
     * @param x The x coordinate of the vector.
     * @param y The y coordinate of the vector.
     * @return A new Vector2.
     */
    Vector2(const T x, const T y) : x(x), y(y)
    {}

    /**
     * Calculates the length (magnitude) of the vector.
     * @return The vector length as a double precision floating point number.
     */
    inline double length() const
    {
        return std::sqrt(x * x + y * y);
    }

    /**
     * Calculates the length (magnitude) of the vector.
     * @return The vector length as a floating point number.
     */
    inline float lengthf() const
    {
        return sqrtf(x * x + y * y);
    }

    /**
     * Calculates the squared length (magnitude) of the vector.
     * @return The squared length of the vector as a double
     * precision floating point number.
     */
    inline double length_squared() const
    {
        return x * x + y * y;
    }

    /**
     * Calculates the squared length (magnitude) of the vector.
     * @return The squared length of the vector as a floating
     * point number.
     */
    inline float length_squaredf() const
    {
        return x * x + y * y;
    }

    /**
     * Normalizes the vector.
     * @details Divides each value of the vector by the vector's length.
     * in order for the vector to have a length (magnitude) of 1.
     */
    inline void normalize()
    {
        double len = length();

        if (!len) {
            return;
        }

        *this /= len;
    }

    /**
     * Constucts a normalized copy of the vector.
     * @details Divides each coordinate of the vector by the vector's length.
     * @return A new normalized vector.
     */
    inline Vector2<T> normalized() const
    {
        double len = length();

        if (!len) {
            return Vector2<T>{};
        }

        return Vector2<T>{static_cast<T>(x / len),
                          static_cast<T>(y / len)};
    }

    /**
     * Calculates the dot product.
     * @param v The vector with whom the dot product will be calculated.
     * @return The value of the dot product as a
     * double precision floating point number.
     */
    inline double dot(const Vector2<T> &v) const
    {
        return x * v.x + y * v.y;
    }

    /**
     * Calculates the dot product.
     * @param v The vector with whom the dot product will be calculated.
     * @return The value of the dot product as a floating point number.
     */
    inline float dotf(const Vector2<T> &v) const
    {
        return x * v.x + y * v.y;
    }

    /**
     * Calculates the reflected vector.
     * @param normal The normal vector used for the reflection calculation.
     */
    inline void reflect(const Vector2<T> normal)
    {
        *this -= normal * 2 * dot(normal);
    }

    /**
     * Calculates the reflected vector as a new vector.
     * @param normal The normal vector used for the reflection calculation.
     * @return A new reflected vector.
     */
    inline Vector2<T> reflected(const Vector2<T> normal) const
    {
        return *this - normal * 2 * dot(normal);
    }

    /**
     * Implicit conversion to pointer.
     * @return A pointer to the internal array of the vector.
     */
    inline operator T *()
    {
        return v;
    }

    /**
     * Implicit conversion to a constant pointer.
     * @return A constant pointer to the internal array of the vector.
     */
    inline operator const T *() const
    {
        return v;
    }

    /**
     * Negates the vector's values.
     * @return A new two dimensional vector with negated values.
     */
    inline Vector2<T> operator-() const
    {
        return Vector2<T>{static_cast<T>(-x),
                          static_cast<T>(-y)};
    }

    /**
     * Calculates the addition of 2 vectors.
     * @details Adds each value of the right hand side vector operand
     * to the respective value of the left hand side vector operand.
     * @param rhs The right hand side vector of the addition.
     * @return A new two dimensional vector as the result of the addition.
     */
    inline Vector2<T> operator+(const Vector2<T> &rhs) const
    {
        return Vector2<T>(x + rhs.x, y + rhs.y);
    }

    /**
     * Calculates the subtraction of 2 vectors.
     * @details Subtracts each value of the right hand side vector operand
     * from the respective value of the left hand side vector operand.
     * @param rhs The right hand side vector of the subtraction.
     * @return A new two dimensional vector as the result of the subtraction.
     */
    inline Vector2<T> operator-(const Vector2<T> &rhs) const
    {
        return Vector2<T>(x - rhs.x, y - rhs.y);
    }

    /**
     * Calculates the multiplication of 2 vectors.
     * @details Multiplies each value of the left hand side vector operand
     * with the respective value of the right hand side vector operand.
     * @param rhs The right hand side vector of the multiplication.
     * @return A new two dimensional vector as the result of the multiplication.
     */
    inline Vector2<T> operator*(const Vector2<T> &rhs) const
    {
        return Vector2<T>(x * rhs.x, y * rhs.y);
    }

    /**
     * Calculates the division of 2 two dimensional vectors.
     * @details Divides each value of the left hand side vector operand
     * by the respective value of the right hand side vector operand.
     * @param rhs The right hand side vector of the division.
     * @return A new two dimensional vector as the result of the division.
     */
    inline Vector2<T> operator/(const Vector2<T> &rhs) const
    {
        return Vector2<T>(x / rhs.x, y / rhs.y);
    }

    /**
     * Adds each value of the right hand side vector operand to the
     * respective value of the vector.
     * @param rhs The right hand side vector of the addition.
     */
    inline void operator+=(const Vector2<T> &rhs)
    {
        x += rhs.x;
        y += rhs.y;
    }

    /**
     * Subtracts each value of the right hand side vector operand
     * from the respective value of the vector.
     * @param rhs The right hand side vector of the subtraction.
     */
    inline void operator-=(const Vector2<T> &rhs)
    {
        x -= rhs.x;
        y -= rhs.y;
    }

    /**
     * Multiplies each value of the vector with the respective value
     * of the right hand side vector operand.
     * @param rhs The right hand side vector of the multiplication.
     */
    inline void operator*=(const Vector2<T> &rhs)
    {
        x *= rhs.x;
        y *= rhs.y;
    }

    /**
     * Divides each value of the vector by the respective value
     * of the right hand side vector operand.
     * @param rhs The right hand side vector of the division.
     */
    inline void operator/=(const Vector2<T> &rhs)
    {
        x /= rhs.x;
        y /= rhs.y;
    }

    /**
     * Adds a scalar to each value of the vector.
     * @param rhs The scalar added to each value of the vector.
     * @return A new two dimensional vector as the result of the addition.
     */
    inline Vector2<T> operator+(T rhs) const
    {
        return Vector2<T>(x + rhs, y + rhs);
    }

    /**
     * Subtracts a scalar from each value of the vector.
     * @param rhs The scalar subtracted from each value of the vector.
     * @return A new two dimensional vector as the result of the subtraction.
     */
    inline Vector2<T> operator-(T rhs) const
    {
        return Vector2<T>(x - rhs, y - rhs);
    }

    /**
     * Multiplies each value of the vector with a scalar.
     * @param rhs The scalar to multiply the vector with.
     * @return A new two dimensional vector as the result of the multiplication.
     */
    inline Vector2<T> operator*(T rhs) const
    {
        return Vector2<T>(x * rhs, y * rhs);
    }

    /**
     * Divides each value of the vector by a scalar.
     * @param rhs The scalar to divide each value of the vector by.
     * @return A new two dimensional vector as the result of the division.
     */
    inline Vector2<T> operator/(T rhs) const
    {
        return Vector2<T>(x / rhs, y / rhs);
    }

    /**
     * Adds a scalar to each value of the vector.
     * @param rhs The scalar to add to the vector.
     */
    inline void operator+=(T rhs)
    {
        x += rhs;
        y += rhs;
    }

    /**
     * Subtracts a scalar from each value of the vector.
     * @param rhs The scalar to subtract from each value of the vector.
     */
    inline void operator-=(T rhs)
    {
        x -= rhs;
        y -= rhs;
    }

    /**
     * Multiplies each value of the vector with a scalar.
     * @param rhs The scalar to multiply each value of the vector with.
     */
    inline void operator*=(T rhs)
    {
        x *= rhs;
        y *= rhs;
    }

    /**
     * Divides each value of the vector by a scalar.
     * @param rhs The scalar to divide each value of the vector by.
     */
    inline void operator/=(T rhs)
    {
        x /= rhs;
        y /= rhs;
    }

    /**
     * Subscript operator overload.
     * @details Implemented for convenience in order to avoid verbosity when using
     * the public array representation of the vector.
     * @param idx
     * @return The vector value at the specified array index.
     */
    inline T operator[](int idx)
    {
        return v[idx];
    }

    /**
     * Subscript operator overload.
     * @details Implemented for convenience in order to avoid verbosity when using
     * the public array representation of the vector.
     * @param idx
     * @return The vector value at the specified array index.
     */
    inline const T operator[](int idx) const
    {
        return v[idx];
    }

    /**
     * Equality operator overload.
     * @warning May not work as intended for floating point vectors.
     * @param rhs The right hand side vector operand with whom equality is tested.
     * @return True only when all values of both vectors are equal.
     */
    inline bool operator==(const Vector2<T> &rhs) const
    {
        return x == rhs.x && y == rhs.y;
    }

    /**
     * Non equality operator overload.
     * @warning May not work as intended for floating point vectors.
     * @param rhs The right hand side vector operand with whom non equality is tested.
     * @return True when one of the vector's values is not equal the the other's.
     */
    inline bool operator!=(const Vector2<T> &rhs) const
    {
        return !(*this == rhs);
    }
};

/**
 * @typedef Vec2f
 * Defines a two dimensional vector of floats.
 */
using Vec2f = Vector2<float>;

/**
 * @typedef Vec2d
 * Defines a two dimensional vector of double floats.
 */
using Vec2d = Vector2<double>;

/**
 * @typedef Vec2c
 * Defines a two dimensional vector of characters.
 */
using Vec2c = Vector2<char>;

/**
 * @typedef Vec2uc
 * Defines a two dimensional vector of unsigned characters.
 */
using Vec2uc = Vector2<unsigned char>;

/**
 * @typedef Vec2s
 * Defines a two dimensional vector of short integers.
 */
using Vec2s = Vector2<short>;

/**
 * @typedef Vec2us
 * Defines a two dimensional vector of unsigned short integers.
 */
using Vec2us = Vector2<unsigned short>;

/**
 * @typedef Vec2i
 * Defines a two dimensional vector of integers.
 */
using Vec2i = Vector2<int>;

/**
 * @typedef Vec2ui
 * Defines a two dimensional vector of unsigned integers.
 */
using Vec2ui = Vector2<unsigned int>;

/**
 * @typedef Vec2l
 * Defines a two dimensional vector of long integers.
 */
using Vec2l = Vector2<long>;

/**
 * @typedef Vec2ul
 * Defines a two dimensional vector of unsigned long integers.
 */
using Vec2ul = Vector2<unsigned long>;

/**
 * @typedef Vec2ll
 * Defines a two dimensional vector of long long integers.
 */
using Vec2ll = Vector2<long long>;

/**
 * @typedef Vec2ull
 * Defines a two dimensional vector of unsigned long long integers.
 */
using Vec2ull = Vector2<unsigned long long>;


/**
 * @class Vector3
 * @tparam T Can be any numeric type.
 * @brief A class that represents a 3 dimensional vector.
 * @details Vector3 is a class that represents a 3 dimensional
 * vector. It supports accessing the vector values with various
 * ways to accommodate various use cases:
 * @li position coordinates
 * @li texture coordinates
 * @li color values
 * @details Swizzles are available for all data representations.
 * @note This class uses macros to generate the swizzle classes and
 * the swizzle public members. The macros used are the following:
 * @note Private classes macros:
 * @li @ref HM_SWIZZLE3_CLASSES
 * @note Swizzle public members macro:
 * @li @ref HM_VEC3_SWIZZLES
 */
template<typename T>
class Vector3 {
private:
    HM_SWIZZLE3_CLASSES(3)

public:
    union {
        struct {
            T x;
            T y;
            T z;
        };

        struct {
            T r;
            T g;
            T b;
        };

        struct {
            T s;
            T t;
            T p;
        };

        T v[3];

        HM_VEC3_SWIZZLES
    };

    /**
     * Default Vector3 constructor.
     * @details Initializes Vector3's values to 0.
     * @return A new Vector3.
     */
    Vector3() : x(0), y(0), z(0)
    {}

    /**
     * Vector3's single argument constructor.
     * @details Initializes Vector3's values with the argument passed.
     * @param val The numeric value used to initialize Vector3's values.
     * @return A new Vector3.
     */
    explicit Vector3(const T val) : x(val), y(val), z(val)
    {}

    /**
     * Vector3's three argument constructor.
     * @details Initializes Vector3's values with the arguments passed.
     * @param x The x coordinate of the vector.
     * @param y The y coordinate of the vector.
     * @param z The z coordinate of the vector.
     * @return A new Vector3.
     */
    Vector3(const T x, const T y, const T z) : x(x), y(y), z(z)
    {}

    /**
     * Calculates the length (magnitude) of the vector.
     * @return The length of the vector as
     * a double precision floating point number.
     */
    inline double length() const
    {
        return std::sqrt(x * x + y * y + z * z);
    }

    /**
     * Calculates the length (magnitude) of the vector.
     * @return The length of the vector as a floating point number.
     */
    inline float lengthf() const
    {
        return sqrtf(x * x + y * y + z * z);
    }

    /**
     * Calculates the squared length (magnitude) of the vector.
     * @return The squared length of the vector as a double
     * precision floating point number.
     */
    inline double length_squared() const
    {
        return x * x + y * y + z * z;
    }

    /**
     * Calculates the squared length (magnitude) of the vector.
     * @return The squared length of the vector as a floating point
     * number.
     */
    inline float length_squaredf() const
    {
        return x * x + y * y + z * z;
    }

    /**
     * Normalizes the vector.
     * @details Divides each value of the vector by the vector's length.
     * in order for the vector to have a length (magnitude) of 1.
     */
    inline void normalize()
    {
        double len = length();

        if (!len) {
            return;
        }

        *this /= len;
    }

    /**
     * Constucts a normalized copy of the vector.
     * @details Divides each coordinate of the vector by the vector's length.
     * @return A new normalized vector.
     */
    inline Vector3<T> normalized() const
    {
        double len = length();

        if (!len) {
            return Vector3<T>{};
        }

        return Vector3<T>(x / len, y / len, z / len);
    }

    /**
     * Calculates the dot product.
     * @param v The vector with whom the dot product will be calculated.
     * @return The value of the dot product as a
     * double precision floating point number.
     */
    inline double dot(const Vector3<T> &v) const
    {
        return x * v.x + y * v.y + z * v.z;
    }

    /**
     * Calculates the dot product.
     * @param v The vector with whom the dot product will be calculated.
     * @return The value of the dot product as a floating point number.
     */
    inline float dotf(const Vector3<T> &v) const
    {
        return x * v.x + y * v.y + z * v.z;
    }

    /**
     * Calculates the cross product.
     * @param v The vector with whom the cross product will be calculated.
     * @return A three dimensional vector as the result of the cross product.
     */
    inline Vector3<T> cross(const Vector3<T> &v) const
    {
        return Vector3<T>(y * v.z - z * v.y,
                          z * v.x - x * v.z,
                          x * v.y - y * v.x);
    }

    /**
     * Calculates the reflected vector.
     * @param normal The normal vector used for the reflection calculation.
     */
    inline void reflect(const Vector3<T> normal)
    {
        *this -= normal * 2 * dot(normal);
    }

    /**
     * Calculates the reflected vector as a new vector.
     * @param normal The normal vector used for the reflection calculation.
     * @return A new reflected vector.
     */
    inline Vector3<T> reflected(const Vector3<T> normal) const
    {
        return *this - normal * 2 * dot(normal);
    }

    /**
     * Transforms the vector by a four dimensional matrix.
     * @param mat The four dimensional matrix the vector is going to be
     * transformed by.
     */
    inline void transform(const Matrix4<T> &mat)
    {
        float x = v[0];
        float y = v[1];

        for (int i = 0; i < 3; ++i) {
            v[i] = mat[i][0] * x + mat[i][1] * y + mat[i][2] * z + mat[i][3];
        }
    }

    /**
     * Transforms the vector by a four dimensional matrix.
     * @param mat The four dimensional matrix the vector is going to be
     * transformed with.
     * @return A new instance of the vector transformed by the matrix.
     */
    inline Vector3<T> transformed(const Matrix4<T> &mat)
    {
        Vector3<T> res{*this};

        for (int i = 0; i < 3; ++i) {
            res[i] = mat[i][0] * x + mat[i][1] * y + mat[i][2] * z + mat[i][3];
        }

        return res;
    }

    /**
     * Implicit conversion pointer.
     * @return A pointer to the internal array of the vector.
     */
    inline operator T *()
    {
        return v;
    }

    /**
     * Implicit conversion to a constant pointer.
     * @return A constant pointer to the internal array of the vector.
     */
    inline operator const T *() const
    {
        return v;
    }

    /**
     * Negates the vector's values.
     * @return A new three dimensional vector with negated values.
     */
    inline Vector3<T> operator-() const
    {
        return Vector3<T>(-x, -y, -z);
    }

    /**
     * Calculates the addition of 2 three dimensional vectors.
     * @details Adds each value of the right hand side vector operand
     * to the respective value of the left hand side vector operand.
     * @param rhs The right hand side vector of the addition.
     * @return A new three dimensional vector as the result of the addition.
     */
    inline Vector3<T> operator+(const Vector3<T> &rhs) const
    {
        return Vector3<T>(x + rhs.x, y + rhs.y, z + rhs.z);
    }

    /**
     * Calculates the subtraction of 2 three dimensional vectors.
     * @details Subtracts each value of the right hand side vector operand
     * from the respective value of the left hand side vector operand.
     * @param rhs The right hand side vector of the subtraction.
     * @return A new vector three dimensional vector as the result of the subtraction.
     */
    inline Vector3<T> operator-(const Vector3<T> &rhs) const
    {
        return Vector3<T>(x - rhs.x, y - rhs.y, z - rhs.z);
    }

    /**
     * Calculates the multiplication of 2 three dimensional vectors.
     * @details Multiplies each value of the right hand side vector operand
     * with the respective value of the left hand side vector operand.
     * @param rhs The right hand side vector of the multiplication.
     * @return A new three dimensional vector as the result of the multiplication.
     */
    inline Vector3<T> operator*(const Vector3<T> &rhs) const
    {
        return Vector3<T>(x * rhs.x, y * rhs.y, z * rhs.z);
    }

    /**
     * Calculates the division of 2 three dimensional vectors.
     * @details Divides each value of the right hand side vector operand
     * by the respective value of the left hand side vector operand.
     * @param rhs The right hand side vector of the division.
     * @return A new vector as the result of the division.
     */
    inline Vector3<T> operator/(const Vector3<T> &rhs) const
    {
        return Vector3<T>(x / rhs.x, y / rhs.y, z / rhs.z);
    }

    /**
     * Adds each value of the right hand side vector operand to the
     * respective value of the vector.
     * @param rhs The right hand side vector of the addition.
     */
    inline void operator+=(const Vector3<T> &rhs)
    {
        x += rhs.x;
        y += rhs.y;
        z += rhs.z;
    }

    /**
     * Subtracts each value of the right hand side vector operand from the
     * respective value of the vector.
     * @param rhs The right hand side vector of the subtraction.
     */
    inline void operator-=(const Vector3<T> &rhs)
    {
        x -= rhs.x;
        y -= rhs.y;
        z -= rhs.z;
    }

    /**
     * Multiplies each value of the right hand side vector operand with the
     * respective value of the vector.
     * @param rhs The right hand side vector of the multiplication.
     */
    inline void operator*=(const Vector3<T> &rhs)
    {
        x *= rhs.x;
        y *= rhs.y;
        z *= rhs.z;
    }

    /**
     * Divides each value of the right hand side vector operand by the
     * respective value of the vector.
     * @param rhs The right hand side vector of the division.
     */
    inline void operator/=(const Vector3<T> &rhs)
    {
        x /= rhs.x;
        y /= rhs.y;
        z /= rhs.z;
    }

    /**
     * Adds a scalar to each value of the vector.
     * @param rhs The scalar added to each value of the vector.
     * @return A new three dimensional vector as the result of the addition.
     */
    inline Vector3<T> operator+(T rhs) const
    {
        return Vector3<T>(x + rhs, y + rhs, z + rhs);
    }

    /**
     * Subtracts a scalar from each value of the vector.
     * @param rhs The scalar subtracted from each value of the vector.
     * @return A new three dimensional vector as the result of the subtraction.
     */
    inline Vector3<T> operator-(T rhs) const
    {
        return Vector3<T>(x - rhs, y - rhs, z - rhs);
    }

    /**
     * Multiplies a scalar with each value of the vector.
     * @param rhs The scalar multiplied with each value of the vector.
     * @return A new three dimensional vector as the result of the multiplication.
     */
    inline Vector3<T> operator*(T rhs) const
    {
        return Vector3<T>(x * rhs, y * rhs, z * rhs);
    }

    /**
     * Divides each value of the vector by a scalar.
     * @param rhs The scalar to divide each value of the vector by.
     * @return A new three dimensional vector as the result of the division.
     */
    inline Vector3<T> operator/(T rhs) const
    {
        return Vector3<T>(x / rhs, y / rhs, z / rhs);
    }

    /**
     * Adds a scalar to each value of the vector.
     * @param rhs The scalar to add to the vector.
     */
    inline void operator+=(T rhs)
    {
        x += rhs;
        y += rhs;
        z += rhs;
    }

    /**
     * Subtracts a scalar from each value of the vector.
     * @param rhs The scalar to subtract from each value of the vector.
     */
    inline void operator-=(T rhs)
    {
        x -= rhs;
        y -= rhs;
        z -= rhs;
    }

    /**
     * Multiplies each value of the vector with a scalar.
     * @param rhs The scalar to multiply each value of the vector with.
     */
    inline void operator*=(T rhs)
    {
        x *= rhs;
        y *= rhs;
        z *= rhs;
    }

    /**
     * Divides each value of the vector by a scalar.
     * @param rhs The scalar to divide each value of the vector by.
     */
    inline void operator/=(T rhs)
    {
        x /= rhs;
        y /= rhs;
        z /= rhs;
    }

    /**
     * Subscript operator overload.
     * @details Implemented for convenience in order to avoid verbosity when using
     * the public array representation of the vector.
     * @param idx
     * @return The vector value at the specified array index.
     */
    inline T &operator[](int idx)
    {
        return v[idx];
    }

    /**
     * Subscript operator overload.
     * @details Implemented for convenience in order to avoid verbosity when using
     * the public array representation of the vector.
     * @param idx
     * @return The vector value at the specified array index.
     */
    inline const T &operator[](int idx) const
    {
        return v[idx];
    }

    /**
     * Equality operator overload.
     * @warning May not work as intended for floating point vectors.
     * @param rhs The right hand side vector operand with whom equality is tested.
     * @return True only when all values of both vectors are equal.
     */
    inline bool operator==(const Vector3<T> &rhs) const
    {
        return x == rhs.x && y == rhs.y && z == rhs.z;
    }

    inline bool operator!=(const Vector3<T> &rhs) const
    {
        return !(*this == rhs);
    }
};

/**
 * @typedef Vec3f
 * Defines a three dimensional vector of floats.
 */
using Vec3f = Vector3<float>;

/**
 * @typedef Vec3d
 * Defines a three dimensional vector of double floats.
 */
using Vec3d = Vector3<double>;

/**
 * @typedef Vec3s
 * Defines a three dimensional vector of short integers.
 */
using Vec3s = Vector3<short>;

/**
 * @typedef Vec3us
 * Defines a three dimensional vector of unsigned short integers.
 */
using Vec3us = Vector3<unsigned short>;

/**
 * @typedef Vec3c
 * Defines a three dimensional vector of characters.
 */
using Vec3c = Vector3<char>;

/**
 * @typedef Vec3uc
 * Defines a three dimensional vector of unsigned characters.
 */
using Vec3uc = Vector3<unsigned char>;

/**
 * @typedef Vec3i
 * Defines a three dimensional vector of integers.
 */
using Vec3i = Vector3<int>;

/**
 * @typedef Vec3ui
 * Defines a three dimensional vector of unsigned integers.
 */
using Vec3ui = Vector3<unsigned int>;

/**
 * @typedef Vec3l
 * Defines a three dimensional vector of long integers.
 */
using Vec3l = Vector3<long>;

/**
 * @typedef Vec3ul
 * Defines a three dimensional vector of unsigned long integers.
 */
using Vec3ul = Vector3<unsigned long>;

/**
 * @typedef Vec3ll
 * Defines a three dimensional vector of long long integers.
 */
using Vec3ll = Vector3<long long>;

/**
 * @typedef Vec3ull
 * Defines a three dimensional vector of unsigned long long integers.
 */
using Vec3ull = Vector3<unsigned long long>;


/**
 * @class Vector4
 * @tparam T Can be any numeric type.
 * @brief A class that represents a 4 dimensional vector.
 * @details Vector4 is a class that represents a 4 dimensional
 * vector. It supports accessing the vector values with various
 * ways to accommodate various use cases:
 * @li position coordinates
 * @li texture coordinates
 * @li color values
 * @details Swizzles are available for all data representations.
 * @note This class uses macros to generate the swizzle classes and
 * the swizzle public members. The macros used are the following:
 * @note Private classes macros:
 * @li @ref HM_SWIZZLE4_CLASSES
 * @note Swizzle public members macro:
 * @li @ref HM_VEC4_SWIZZLES
 */
template<typename T>
class Vector4 {
private:
    HM_SWIZZLE4_CLASSES(4)

public:
    union {
        struct {
            T x;
            T y;
            T z;
            T w;
        };

        struct {
            T r;
            T g;
            T b;
            T a;
        };

        struct {
            T s;
            T t;
            T p;
            T q;
        };

        T v[4];

        HM_VEC4_SWIZZLES
    };

    /**
     * Default Vector4 constructor.
     * @details Initializes Vector4's values to 0.
     * @return A new Vector4.
     */
    Vector4() : x(0), y(0), z(0), w(0)
    {}

    /**
     * Vector4's single argument constructor.
     * @details Initializes Vector4's values with the argument passed.
     * @param val The numeric value used to initialize Vector4's values.
     * @return A new Vector4.
     */
    explicit Vector4(const T val) : x(val), y(val), z(val), w(val)
    {}

    /**
     * Vector4's two argument constructor.
     * @details Initializes Vector4's values with the arguments passed.
     * @param x The x coordinate of the vector.
     * @param y The y coordinate of the vector.
     * @param z The z coordinate of the vector.
     * @param w Thw w coordinate of the vector.
     * @return A new Vector4.
     */
    Vector4(const T x, const T y, const T z, const T w) : x(x), y(y), z(z), w(w)
    {}

    /**
     * Calculates the length (magnitude) of the vector.
     * @return The length of the vector as
     * a double precision floating point number.
     */
    inline double length() const
    {
        return sqrt(x * x + y * y + z * z + w * w);
    }

    /**
     * Calculates the length (magnitude) of the vector.
     * @return The length of the vector as a floating point number.
     */
    inline float lengthf() const
    {
        return sqrtf(x * x + y * y + z * z + w * w);
    }

    /**
     * Calculates the squared length (magnitude) of the vector.
     * @return The squared length of the vector as a double
     * precision floating point number.
     */
    inline double length_squared() const
    {
        return x * x + y * y + z * z + w * w;
    }

    /**
     * Calculates the squared length (magnitude) of the vector.
     * @return The squared length of the vector as a floating point number.
     */
    inline float length_squaredf() const
    {
        return x * x + y * y + z * z + w * w;
    }

    /**
     * Normalizes the vector.
     * @details Divides each value of the vector by the vector's length.
     * in order for the vector to have a length (magnitude) of 1.
     */
    inline void normalize()
    {
        double len = length();

        if (!len) {
            return;
        }

        *this /= len;
    }

    /**
     * Constucts a normalized copy of the vector.
     * @details Divides each coordinate of the vector by the vector's length.
     * @return A new normalized vector.
     */
    inline Vector4<T> normalized() const
    {
        double len = length();

        if (!len) {
            return Vector4<T>{};
        }

        return Vector4<T>(x / len, y / len, z / len, w / len);
    }

    /**
     * Calculates the dot product.
     * @param v The vector with whom the dot product will be calculated.
     * @return The value of the dot product as a
     * double precision floating point number.
     */
    inline double dot(const Vector4<T> &v) const
    {
        return x * v.x + y * v.y + z * v.z + w * v.w;
    }

    /**
     * Calculates the dot product.
     * @param v The vector with whom the dot product will be calculated.
     * @return The value of the dot product as a floating point number.
     */
    inline float dotf(const Vector4<T> &v) const
    {
        return x * v.x + y * v.y + z * v.z + w * v.w;
    }

    /**
    * Calculates the reflected vector.
    * @param normal The normal vector used for the reflection calculation.
    */
    inline void reflect(const Vector4<T> normal)
    {
        *this -= normal * 2 * dot(normal);
    }

    /**
     * Calculates the reflected vector as a new vector.
     * @param normal The normal vector used for the reflection calculation.
     * @return A new reflected vector.
     */
    inline Vector4<T> reflected(const Vector4<T> normal) const
    {
        return *this - normal * 2 * dot(normal);
    }

    /**
     * Transforms the vector by a four dimensional matrix.
     * @param mat The four dimensional matrix the vector is going to be
     * transformed by.
     */
    inline void transform(const Matrix4<T> &mat)
    {
        float x = v[0];
        float y = v[1];
        float z = v[2];

        for (int i = 0; i < 4; ++i) {
            v[i] = mat[i][0] * x + mat[i][1] * y + mat[i][2] * z + mat[i][3] * w;
        }
    }

    /**
     * Transforms the vector by a four dimensional matrix.
     * @param mat The four dimensional matrix the vector is going to be
     * transformed with.
     * @return A new instance of the vector transformed by the matrix.
     */
    inline Vector4<T> transformed(const Matrix4<T> &mat)
    {
        Vector4<T> res{*this};

        for (int i = 0; i < 4; ++i) {
            res[i] = mat[i][0] * x + mat[i][1] * y + mat[i][2] * z + mat[i][3] * w;
        }

        return res;
    }

    /**
     * Implicit conversion to pointer.
     * @return A pointer to the internal array of the vector.
     */
    inline operator T *()
    {
        return v;
    }

    /**
     * Implicit conversion to a constant pointer.
     * @return A constant pointer to the internal array of the vector.
     */
    inline operator const T *() const
    {
        return v;
    }

    /**
     * Negates the vector's values.
     * @return A new four dimensional vector with negated values.
     */
    inline Vector4<T> operator-() const
    {
        return Vector4<T>(-x, -y, -z, -w);
    }

    /**
    * Calculates the addition of 2 four dimensional vectors.
    * @details Adds each value of the right hand side vector operand
    * to the respective value of the left hand side vector operand.
    * @param rhs The right hand side vector of the addition.
    * @return A new four dimensional vector as the result of the addition.
    */
    inline Vector4<T> operator+(const Vector4<T> &rhs) const
    {
        return Vector4<T>(x + rhs.x, y + rhs.y, z + rhs.z, w + rhs.w);
    }

    /**
    * Calculates the subtraction of 2 four dimensional vectors.
    * @details Subtracts each value of the right hand side vector operand
    * from the respective value of the left hand side vector operand.
    * @param rhs The right hand side vector of the subtraction.
    * @return A new four dimensional vector as the result of the subtraction.
    */
    inline Vector4<T> operator-(const Vector4<T> &rhs) const
    {
        return Vector4<T>(x - rhs.x, y - rhs.y, z - rhs.z, w - rhs.w);
    }

    /**
    * Calculates the multiplication of 2 four dimensional vectors.
    * @details Multiplies each value of the right hand side vector operand
    * with the respective value of the left hand side vector operand.
    * @param rhs The right hand side vector of the multiplication.
    * @return A new four dimensional vector as the result of the multiplication.
    */
    inline Vector4<T> operator*(const Vector4<T> &rhs) const
    {
        return Vector4<T>(x * rhs.x, y * rhs.y, z * rhs.z, w * rhs.w);
    }

    /**
    * Calculates the division of 2 four dimensional vectors.
    * @details Divides each value of the right hand side vector operand
    * by the respective value of the left hand side vector operand.
    * @param rhs The right hand side vector of the division.
    * @return A new four dimensional vector as the result of the division.
    */
    inline Vector4<T> operator/(const Vector4<T> &rhs) const
    {
        return Vector4<T>(x / rhs.x, y / rhs.y, z / rhs.z, w / rhs.w);
    }

    /**
     * Adds each value of the right hand side vector operand to the
     * respective value of the vector.
     * @param rhs The right hand side vector of the addition.
     */
    inline void operator+=(const Vector4<T> &rhs)
    {
        x += rhs.x;
        y += rhs.y;
        z += rhs.z;
        w += rhs.w;
    }

    /**
     * Subtracts each value of the right hand side vector operand from the
     * respective value of the vector.
     * @param rhs The right hand side vector of the subtraction.
     */
    inline void operator-=(const Vector4<T> &rhs)
    {
        x -= rhs.x;
        y -= rhs.y;
        z -= rhs.z;
        w -= rhs.w;
    }

    /**
     * Multiplies each value of the right hand side vector operand with the
     * respective value of the vector.
     * @param rhs The right hand side vector of the multiplication.
     */
    inline void operator*=(const Vector4<T> &rhs)
    {
        x *= rhs.x;
        y *= rhs.y;
        z *= rhs.z;
        w *= rhs.w;
    }

    /**
     * Divides each value of the right hand side vector operand by the
     * respective value of the vector.
     * @param rhs The right hand side vector of the division.
     */
    inline void operator/=(const Vector4<T> &rhs)
    {
        x /= rhs.x;
        y /= rhs.y;
        z /= rhs.z;
        w /= rhs.w;
    }

    /**
     * Adds a scalar to each value of the vector.
     * @param rhs The scalar added to each value of the vector.
     * @return A new four dimensional vector as the result of the addition.
     */
    inline Vector4<T> operator+(T rhs) const
    {
        return Vector4<T>(x + rhs, y + rhs, z + rhs, w + rhs);
    }

    /**
    * Subtracts a scalar from each value of the vector.
    * @param rhs The scalar subtracted from each value of the vector.
    * @return A new four dimensional vector as the result of the addition.
    */
    inline Vector4<T> operator-(T rhs) const
    {
        return Vector4<T>(x - rhs, y - rhs, z - rhs, w - rhs);
    }

    /**
    * Multiplies a scalar with each value of the vector.
    * @param rhs The scalar multiplied with each value of the vector.
    * @return A new four dimensional vector as the result of the multiplication.
    */
    inline Vector4<T> operator*(T rhs) const
    {
        return Vector4<T>(x * rhs, y * rhs, z * rhs, w * rhs);
    }

    /**
     * Divides each value of the vector by a scalar.
     * @param rhs The scalar to divide each value of the vector by.
     * @return A new four dimensional vector as the result of the division.
     */
    inline Vector4<T> operator/(T rhs) const
    {
        return Vector4<T>(x / rhs, y / rhs, z / rhs, w / rhs);
    }

    /**
     * Adds a scalar to each value of the vector.
     * @param rhs The scalar to add to the vector.
     */
    inline void operator+=(T rhs)
    {
        x += rhs;
        y += rhs;
        z += rhs;
        w += rhs;
    }

    /**
     * Subtracts a scalar from each value of the vector.
     * @param rhs The scalar to subtract from each value of the vector.
     */
    inline void operator-=(T rhs)
    {
        x -= rhs;
        y -= rhs;
        z -= rhs;
        w -= rhs;
    }

    /**
     * Multiplies each value of the vector with a scalar.
     * @param rhs The scalar to multiply each value of the vector with.
     */
    inline void operator*=(T rhs)
    {
        x *= rhs;
        y *= rhs;
        z *= rhs;
        w *= rhs;
    }

    /**
     * Divides each value of the vector by a scalar.
     * @param rhs The scalar to divide each value of the vector by.
     */
    inline void operator/=(T rhs)
    {
        x /= rhs;
        y /= rhs;
        z /= rhs;
        w /= rhs;
    }

    inline T &operator[](int idx)
    {
        return v[idx];
    }

    inline const T &operator[](int idx) const
    {
        return v[idx];
    }

    inline bool operator==(const Vector4<T> &rhs)
    {
        return x == rhs.x && y == rhs.y && z == rhs.z & w == rhs.w;
    }

    inline bool operator!=(const Vector4<T> &rhs)
    {
        return !(*this == rhs);
    }
};

/**
 * @typedef Vec4f
 * Defines a four dimensional vector of floats.
 */
using Vec4f = Vector4<float>;

/**
 * @typedef Vec4d
 * Defines a four dimensional vector of doubles.
 */
using Vec4d = Vector4<double>;

/**
 * @typedef Vec4s
 * Defines a four dimensional vector of short integers.
 */
using Vec4s = Vector4<short>;

/**
 * @typedef Vec4us
 * Defines a four dimensional vector of unsigned short integers.
 */
using Vec4us = Vector4<unsigned short>;

/**
 * @typedef Vec4c
 * Defines a four dimensional vector of characters.
 */
using Vec4c = Vector4<char>;

/**
 * @typedef Vec4uc
 * Defines a four dimensional vector of unsigned characters.
 */
using Vec4uc = Vector4<unsigned char>;

/**
 * @typedef Vec4i
 * Defines a four dimensional vector of integers.
 */
using Vec4i = Vector4<int>;

/**
 * @typedef Vec4ui
 * Defines a four dimensional vector of unsigned integers.
 */
using Vec4ui = Vector4<unsigned int>;

/**
 * @typedef Vec4l
 * Defines a four dimensional vector of long integers.
 */
using Vec4l = Vector4<long>;

/**
 * @typedef Vec4ul
 * Defines a four dimensional vector of unsigned long integers.
 */
using Vec4ul = Vector4<unsigned long>;

/**
 * @typedef Vec4ll
 * Defines a four dimensional vector of long long integers.
 */
using Vec4ll = Vector4<long long>;

/**
 * @typedef Vec4ull
 * Defines a four dimensional vector of unsigned long long integers.
 */
using Vec4ull = Vector4<unsigned long long>;

/**
 * Calculates the dot product of two two dimensional vectors.
 * @tparam T Can be any numeric type.
 * @param v1 First vector argument.
 * @param v2 Second vector argument.
 * @return The result of the dot product as a double float.
 */
template<typename T>
inline double dot(const Vector2<T> &v1, const Vector2<T> &v2)
{
    return v1.x * v2.x + v1.y * v2.y;
}

/**
 * Calculates the dot product of two two dimensional vectors.
 * @tparam T Can be any numeric type.
 * @param v1 First vector argument.
 * @param v2 Second vector argument.
 * @return The result of the dot product as a float.
 */
template<typename T>
inline float dotf(const Vector2<T> &v1, const Vector2<T> &v2)
{
    return v1.x * v2.x + v1.y * v2.y;
}

/**
 * Calculates the dot product of two three dimensional vectors.
 * @tparam T Can be any numeric type.
 * @param v1 First vector argument.
 * @param v2 Second vector argument.
 * @return The result of the dot product as a double float.
 */
template<typename T>
inline double dot(const Vector3<T> &v1, const Vector3<T> &v2)
{
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

/**
 * Calculates the dot product of two three dimensional vectors.
 * @tparam T Can be any numeric type.
 * @param v1 First vector argument.
 * @param v2 Second vector argument.
 * @return The result of the dot product as a float.
 */
template<typename T>
inline float dotf(const Vector3<T> &v1, const Vector3<T> &v2)
{
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

/**
 * Calculates the dot product of two four dimensional vectors.
 * @tparam T Can be any numeric type.
 * @param v1 First vector argument.
 * @param v2 Second vector argument.
 * @return The result of the dot product as a double float.
 */
template<typename T>
inline double dot(const Vector4<T> &v1, const Vector4<T> &v2)
{
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z + v1.w * v2.w;
}

/**
 * Calculates the dot product of two four dimensional vectors.
 * @tparam T Can be any numeric type.
 * @param v1 First vector argument.
 * @param v2 Second vector argument.
 * @return The result of the dot product as a float.
 */
template<typename T>
inline float dotf(const Vector4<T> &v1, const Vector4<T> &v2)
{
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z + v1.w * v2.w;
}

/**
 * Calculates the cross product of two three dimensional vectors.
 * @tparam T Can be any numeric type.
 * @param v1 First vector argument.
 * @param v2 Second vector argument.
 * @return The resulting vector from the cross porduct.
 */
template<typename T>
inline Vector3<T> cross(const Vector3<T> &v1, const Vector3<T> &v2)
{
    return Vector3<T>{v1.y * v2.z - v1.z * v2.y,
                      v1.z * v2.x - v1.x * v2.z,
                      v1.x * v2.y - v1.y * v2.x};
}

/**
 * Calculates a reflected two dimensional vector based
 * on a two dimensional normal vector.
 * @tparam T Can be any numeric type.
 * @param v The vector to be reflected.
 * @param normal The normal vector used in the reflection calculation.
 * @return A new reflected vector.
 */
template<typename T>
inline Vector2<T> reflect(const Vector2<T> v, const Vector2<T> normal)
{
    return v - normal * 2 * dot(v, normal);
}

/**
 * Calculates a reflected three dimensional vector based
 * on a three dimensional normal vector.
 * @tparam T Can be any numeric type.
 * @param v The vector to be reflected.
 * @param normal The normal vector used in the reflection calculation.
 * @return A new reflected vector.
 */
template<typename T>
inline Vector3<T> reflect(const Vector3<T> v, const Vector3<T> normal)
{
    return v - normal * 2 * dot(v, normal);
}

/**
 * Calculates a reflected four dimensional vector based
 * on a four dimensional normal vector.
 * @tparam T Can be any numeric type.
 * @param v The vector to be reflected.
 * @param normal The normal vector used in the reflection calculation.
 * @return A new reflected vector.
 */
template<typename T>
inline Vector4<T> reflect(const Vector4<T> v, const Vector4<T> normal)
{
    return v - normal * 2 * dot(v, normal);
}

} //namespace hm

#endif //HELMATH_VECTOR_H
