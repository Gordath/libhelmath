#ifndef HELMATH_VECTOR_H
#define HELMATH_VECTOR_H

#include <cmath>

/**
 * @namespace hm
 * This is helmath's namespace.
 * @details All of helmaths code will be inside hm to avoid name collisions.
 */
namespace hm {

/**
 * @class Vec2
 * @tparam T Can be any numeric value.
 * @brief A class that represents a 2 dimensional vector.
 * @details Vec2 is a class that represents a 2 dimensional
 * vector. It supports accessing the vector values with various
 * ways to accommodate various use cases:
 * @li position coordinates
 * @li texture coordinates
 * @details Swizzles are available for all data representations.
 */
template<typename T>
class Vec2 {
private:
    template<int A, int B>
    class _Swizzle {
    private:
        T v[2];

    public:
        inline Vec2<T> &operator=(const Vec2<T> &rhs)
        {
            v[A] = rhs.x;
            v[B] = rhs.y;

            return *(Vec2<T> *) this;
        }

        inline operator Vec2()
        {
            return Vec2<T>{v[A], v[B]};
        }

        inline Vec2<T> &operator()()
        {
            return *(Vec2<T> *) this;
        }

        inline Vec2<T> operator+(const Vec2<T> &rhs)
        {
            return Vec2<T>{v[A] + rhs.x, v[B] + rhs.y};
        }

        inline Vec2<T> operator-(const Vec2<T> &rhs)
        {
            return Vec2<T>{v[A] - rhs.x, v[B] - rhs.y};
        }

        inline Vec2<T> operator*(const Vec2<T> &rhs)
        {
            return Vec2<T>{v[A] * rhs.x, v[B] * rhs.y};
        }

        inline Vec2<T> operator/(const Vec2<T> &rhs)
        {
            return Vec2<T>{v[A] / rhs.x, v[B] / rhs.y};
        }

        inline Vec2<T> &operator+=(const Vec2<T> &rhs)
        {
            v[A] += rhs.x;
            v[B] += rhs.y;

            return *(Vec2<T> *) this;
        }

        inline Vec2<T> &operator-=(const Vec2<T> &rhs)
        {
            v[A] -= rhs.x;
            v[B] -= rhs.y;

            return *(Vec2<T> *) this;
        }

        inline Vec2<T> &operator*=(const Vec2<T> &rhs)
        {
            v[A] *= rhs.x;
            v[B] *= rhs.y;

            return *(Vec2<T> *) this;
        }

        inline Vec2<T> &operator/=(const Vec2<T> &rhs)
        {
            v[A] /= rhs.x;
            v[B] /= rhs.y;

            return *(Vec2<T> *) this;
        }

        inline Vec2<T> operator+(T rhs)
        {
            return Vec2<T>{v[A] + rhs, v[B] + rhs};
        }

        inline Vec2<T> operator-(T rhs)
        {
            return Vec2<T>{v[A] - rhs, v[B] - rhs};
        }

        inline Vec2<T> operator*(T rhs)
        {
            return Vec2<T>{v[A] * rhs, v[B] * rhs};
        }

        inline Vec2<T> operator/(T rhs)
        {
            return Vec2<T>{v[A] / rhs, v[B] / rhs};
        }

        inline Vec2<T> &operator+=(T rhs)
        {
            v[A] += rhs;
            v[B] += rhs;

            return *(Vec2<T> *) this;
        }

        inline Vec2<T> &operator-=(T rhs)
        {
            v[A] -= rhs;
            v[B] -= rhs;

            return *(Vec2<T> *) this;
        }

        inline Vec2<T> &operator*=(T rhs)
        {
            v[A] *= rhs;
            v[B] *= rhs;

            return *(Vec2<T> *) this;
        }

        inline Vec2<T> &operator/=(T rhs)
        {
            v[A] /= rhs;
            v[B] /= rhs;

            return *(Vec2<T> *) this;
        }
    };

    template<int A>
    class _Swizzle<A, A> {
    private:
        T v[2];

    public:
        operator Vec2()
        {
            return Vec2<T>{v[A]};
        }

        inline Vec2<T> &operator()() const
        {
            return *(Vec2<T> *) this;
        }

        inline Vec2<T> operator+(const Vec2<T> &rhs)
        {
            return Vec2<T>{v[A] + rhs.x, v[A] + rhs.y};
        }

        inline Vec2<T> operator-(const Vec2<T> &rhs)
        {
            return Vec2<T>{v[A] - rhs.x, v[A] - rhs.y};
        }

        inline Vec2<T> operator*(const Vec2<T> &rhs)
        {
            return Vec2<T>{v[A] * rhs.x, v[A] * rhs.y};
        }

        inline Vec2<T> operator/(const Vec2<T> &rhs)
        {
            return Vec2<T>{v[A] / rhs.x, v[A] / rhs.y};
        }

        inline Vec2<T> operator+(T rhs)
        {
            return Vec2<T>{v[A] + rhs, v[A] + rhs};
        }

        inline Vec2<T> operator-(T rhs)
        {
            return Vec2<T>{v[A] - rhs, v[A] - rhs};
        }

        inline Vec2<T> operator*(T rhs)
        {
            return Vec2<T>{v[A] * rhs, v[A] * rhs};
        }

        inline Vec2<T> operator/(T rhs)
        {
            return Vec2<T>{v[A] / rhs, v[A] / rhs};
        }
    };

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
     * Vec2<float> v2 = v.xx;
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

        /**
         * Represents a vector with coordinates (x, x).
         */
        _Swizzle<0, 0> xx;

        /**
         * Represents a vector with coordinates (x, y).
         */
        _Swizzle<0, 1> xy;

        /**
         * Represents a vector with coordinates (y, x).
         */
        _Swizzle<1, 0> yx;

        /**
         * Represents a vector with coordinates (y, y).
         */
        _Swizzle<1, 1> yy;


        /**
         * Represents a vector with coordinates (s, s).
         */
        _Swizzle<0, 0> ss;

        /**
         * Represents a vector with coordinates (s, t).
         */
        _Swizzle<0, 1> st;

        /**
         * Represents a vector with coordinates (t, s).
         */
        _Swizzle<1, 0> ts;

        /**
         * Represents a vector with coordinates (t, t).
         */
        _Swizzle<1, 1> tt;
    };

    /**
     * Default Vec2 constructor.
     * @details Initializes Vec2's values to 0.
     * @return A new Vec2.
     */
    Vec2() : x(0), y(0)
    { }

    /**
     * Vec2 single argument constructor.
     * @details Initializes Vec2's values with the argument passed.
     * @param val The numeric value used to initialize Vec2's values.
     * @return A new Vec2.
     */
    Vec2(T val) : x(val), y(val)
    { }

    /**
     * Vec2 double argument constructor.
     * @details Initializes Vec2's values with the arguments passed.
     * @param x The x coordinate of the vector.
     * @param y The y coordinate of the vector.
     * @return A new Vec2.
     */
    Vec2(T x, T y) : x(x), y(y)
    { }

    /**
     * Calculates the length (magnitude) of the vector.
     * @return The vector length as a double precision floating point number.
     */
    inline double length()
    {
        return std::sqrt(x * x + y * y);
    }

    /**
     * Calculates the length (magnitude) of the vector.
     * @return The vector length as a floating point number.
     */
    inline float lengthf()
    {
        return sqrtf(x * x + y * y);
    }

    /**
     * Normalizes the vector.
     * @details Divides each coordinate of the vector by the vector length
     * in order for the vector to have a length (magnitude) of 1.
     */
    inline void normalize()
    {
        double len = length();

        if(!len) {
            return;
        }

        *this /= len;
    }

    /**
     * Constucts a normalized copy of the vector.
     * @return A normalized copy of the vector.
     */
    inline Vec2<T> normalized() const
    {
        double len = length();

        if(!len) {
            return Vec2<T>{};
        }

        return Vec2<T>{static_cast<T>(x / len),
                       static_cast<T>(y / len)};
    }

    /**
     * Calculates the dot product.
     * @param v The vector with whom the dot product will be calculated.
     * @return The value of the dot product as a
     * double precision floating point number.
     */
    inline double dot(const Vec2<T> &v)
    {
        return x * v.x + y * v.y;
    }

    /**
     * Calculates the dot product.
     * @param v The vector with whom the dot product will be calculated.
     * @return The value of the dot product as a floating point number.
     */
    inline float dotf(const Vec2<T> &v)
    {
        return x * v.x + y * v.y;
    }

    /**
     * Negates the vector coordinates.
     * @return A negated copy of the vector.
     */
    inline Vec2<T> operator-()
    {
        return Vec2<T>{-x, -y};
    }

    /**
     * Calculates the addition of 2 vectors.
     * @param rhs The right hand side vector of the addition.
     * @return A new vector as the result of the addition.
     */
    inline Vec2<T> operator+(const Vec2<T> &rhs)
    {
        return Vec2<T>{x + rhs.x, y + rhs.y};
    }

    /**
     * Calculates the subtraction of 2 vectors.
     * @param rhs The right hand side vector of the subtraction.
     * @return A new vector as the result of the subtraction.
     */
    inline Vec2<T> operator-(const Vec2<T> &rhs)
    {
        return Vec2<T>{x - rhs.x, y - rhs.y};
    }

    /**
     * Calculates the multiplication of 2 vectors.
     * @param rhs The right hand side vector of the multiplication.
     * @return A new vector as the result of the multiplication.
     */
    inline Vec2<T> operator*(const Vec2<T> &rhs)
    {
        return Vec2<T>{x * rhs.x, y * rhs.y};
    }

    /**
     * Calculates the division of 2 vectors.
     * @param rhs The right hand side vector of the division.
     * @return A new vector as the result of the division.
     */
    inline Vec2<T> operator/(const Vec2<T> &rhs)
    {
        return Vec2<T>{x / rhs.x, y / rhs.y};
    }

    /**
     * Adds a vector to the left hand side operand.
     * @param rhs The right hand side vector of the addition.
     */
    inline void operator+=(const Vec2<T> &rhs)
    {
        x /= rhs.x;
        y /= rhs.y;
    }

    /**
     * Subtracts a vector from the left hand side operand.
     * @param rhs The right hand side vector of the subtraction.
     */
    inline void operator-=(const Vec2<T> &rhs)
    {
        x -= rhs.x;
        y -= rhs.y;
    }

    /**
     * Multiplies the left hand side operand with a vector.
     * @param rhs The right hand side vector of the multiplication.
     */
    inline void operator*=(const Vec2<T> &rhs)
    {
        x *= rhs.x;
        y *= rhs.x;
    }

    /**
     * Divides the left hand side operand by a vector.
     * @param rhs The right hand side vector of the division.
     */
    inline void operator/=(const Vec2<T> &rhs)
    {
        x /= rhs.x;
        y /= rhs.y;
    }

    inline Vec2<T> operator+(T rhs)
    {
        return Vec2<T>{x + rhs, y + rhs};
    }

    inline Vec2<T> operator-(T rhs)
    {
        return Vec2<T>{x - rhs, y - rhs};
    }

    inline Vec2<T> operator*(T rhs)
    {
        return Vec2<T>{x * rhs, y * rhs};
    }

    inline Vec2<T> operator/(T rhs)
    {
        return Vec2<T>{x / rhs, y / rhs};
    }

    inline void operator+=(T rhs)
    {
        x += rhs;
        y += rhs;
    }

    inline void operator-=(T rhs)
    {
        x -= rhs;
        y -= rhs;
    }

    inline void operator*=(T rhs)
    {
        x *= rhs;
        y *= rhs;
    }

    inline void operator/=(T rhs)
    {
        x /= rhs;
        y /= rhs;
    }
};

/**
 * @typedef Vec2f
 * Defines a two dimensional vector of floats.
 */
using Vec2f = Vec2<float>;

/**
 * @typedef Vec2d
 * Defines a two dimensional vector of double floats.
 */
using Vec2d = Vec2<double>;

/**
 * @typedef Vec2c
 * Defines a two dimensional vector of characters.
 */
using Vec2c = Vec2<char>;

/**
 * @typedef Vec2uc
 * Defines a two dimensional vector of unsigned characters.
 */
using Vec2uc = Vec2<unsigned char>;

/**
 * @typedef Vec2s
 * Defines a two dimensional vector of short integers.
 */
using Vec2s = Vec2<short>;

/**
 * @typedef Vec2us
 * Defines a two dimensional vector of unsigned short integers.
 */
using Vec2us = Vec2<unsigned short>;

/**
 * @typedef Vec2i
 * Defines a two dimensional vector of integers.
 */
using Vec2i = Vec2<int>;

/**
 * @typedef Vec2ui
 * Defines a two dimensional vector of unsigned integers.
 */
using Vec2ui = Vec2<unsigned int>;

/**
 * @typedef Vec2l
 * Defines a two dimensional vector of long integers.
 */
using Vec2l = Vec2<long>;

/**
 * @typedef Vec2ul
 * Defines a two dimensional vector of unsigned long integers.
 */
using Vec2ul = Vec2<unsigned long>;

/**
 * @typedef Vec2ll
 * Defines a two dimensional vector of long long integers.
 */
using Vec2ll = Vec2<long long>;

/**
 * @typedef Vec2ull
 * Defines a two dimensional vector of unsigned long long integers.
 */
using Vec2ull = Vec2<unsigned long long>;


/**
 * @class Vec3
 * @tparam T Can be any numeric value.
 * @brief A class that represents a 3 dimensional vector.
 * @details Vec3 is a class that represents a 3 dimensional
 * vector. It supports accessing the vector values with various
 * ways to accommodate various use cases:
 * @li position coordinates
 * @li texture coordinates
 * @li color values
 * @details Swizzles are available for all data representations.
 */
template<typename T>
class Vec3 {
private:
    template<int A, int B, int C>
    class _Swizzle {
    private:
        T v[3];

    public:
        inline Vec3<T> &operator=(const Vec3<T> &rhs)
        {
            v[A] = rhs.x;
            v[B] = rhs.y;
            v[C] = rhs.z;

            return *(Vec3<T> *) this;
        }

        inline operator Vec3() const
        {
            return Vec3<T>{v[A], v[B], v[C]};
        }

        inline Vec3<T> &operator()() const
        {
            return *(Vec3<T> *) this;
        }

        inline Vec3<T> operator+(const Vec3<T> &rhs) const
        {
            return Vec3<T>{v[A] + rhs.x, v[B] + rhs.y, v[C] + rhs.z};
        }

        inline Vec3<T> operator-(const Vec3<T> &rhs) const
        {
            return Vec3<T>{v[A] - rhs.x, v[B] - rhs.y, v[C] - rhs.z};
        }

        inline Vec3<T> operator*(const Vec3<T> &rhs) const
        {
            return Vec3<T>{v[A] * rhs.x, v[B] * rhs.y, v[C] * rhs.z};
        }

        inline Vec3<T> operator/(const Vec3<T> &rhs) const
        {
            return Vec3<T>{v[A] / rhs.x, v[B] / rhs.y, v[C] / rhs.z};
        }

        inline Vec3<T> &operator+=(const Vec3<T> &rhs)
        {
            v[A] += rhs.x;
            v[B] += rhs.y;
            v[C] += rhs.z;

            return *(Vec3<T> *) this;
        }

        inline Vec3<T> &operator-=(const Vec3<T> &rhs)
        {
            v[A] -= rhs.x;
            v[B] -= rhs.y;
            v[C] -= rhs.z;

            return *(Vec3<T> *) this;
        }

        inline Vec3<T> &operator*=(const Vec3<T> &rhs)
        {
            v[A] *= rhs.x;
            v[B] *= rhs.y;
            v[C] *= rhs.z;

            return *(Vec3<T> *) this;
        }

        inline Vec3<T> &operator/=(const Vec3<T> &rhs)
        {
            v[A] /= rhs.x;
            v[B] /= rhs.y;
            v[C] /= rhs.z;

            return *(Vec3<T> *) this;
        }

        inline Vec3<T> operator+(T rhs) const
        {
            return Vec3<T>{v[A] + rhs, v[B] + rhs, v[C] + rhs};
        }

        inline Vec3<T> operator-(T rhs) const
        {
            return Vec3<T>{v[A] - rhs, v[B] - rhs, v[C] - rhs};
        }

        inline Vec3<T> operator*(T rhs) const
        {
            return Vec3<T>{v[A] * rhs, v[B] * rhs, v[C] * rhs};
        }

        inline Vec3<T> operator/(T rhs) const
        {
            return Vec3<T>{v[A] / rhs, v[B] / rhs, v[C] / rhs};
        }

        inline Vec3<T> &operator+=(T rhs)
        {
            v[A] += rhs;
            v[B] += rhs;
            v[C] += rhs;

            return *(Vec3<T> *) this;
        }

        inline Vec3<T> &operator-=(T rhs)
        {
            v[A] -= rhs;
            v[B] -= rhs;
            v[C] -= rhs;

            return *(Vec3<T> *) this;
        }

        inline Vec3<T> &operator*=(T rhs)
        {
            v[A] *= rhs;
            v[B] *= rhs;
            v[C] *= rhs;

            return *(Vec3<T> *) this;
        }

        inline Vec3<T> &operator/=(T rhs)
        {
            v[A] /= rhs;
            v[B] /= rhs;
            v[C] /= rhs;

            return *(Vec3<T> *) this;
        }
    };

    template<int A>
    class _Swizzle<A, A, A> {
    private:
        T v[3];

    public:
        inline operator Vec3() const
        {
            return Vec3<T>{v[A]};
        }

        inline Vec3<T> operator+(const Vec3<T> &rhs) const
        {
            return Vec3<T>{v[A] + rhs.x, v[A] + rhs.y, v[A] + rhs.z};
        }

        inline Vec3<T> operator-(const Vec3<T> &rhs) const
        {
            return Vec3<T>{v[A] - rhs.x, v[A] - rhs.y, v[A] - rhs.z};
        }

        inline Vec3<T> operator*(const Vec3<T> &rhs) const
        {
            return Vec3<T>{v[A] * rhs.x, v[A] * rhs.y, v[A] * rhs.z};
        }

        inline Vec3<T> operator/(const Vec3<T> &rhs) const
        {
            return Vec3<T>{v[A] / rhs.x, v[A] / rhs.y, v[A] / rhs.z};
        }

        inline Vec3<T> operator+(T rhs) const
        {
            return Vec3<T>{v[A] + rhs, v[A] + rhs, v[A] + rhs};
        }

        inline Vec3<T> operator-(T rhs) const
        {
            return Vec3<T>{v[A] - rhs, v[A] - rhs, v[A] - rhs};
        }

        inline Vec3<T> operator*(T rhs) const
        {
            return Vec3<T>{v[A] * rhs, v[A] * rhs, v[A] * rhs};
        }

        inline Vec3<T> operator/(T rhs) const
        {
            return Vec3<T>{v[A] / rhs, v[A] / rhs, v[A] / rhs};
        }
    };

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

        _Swizzle<0, 0, 0> xxx;
        _Swizzle<0, 0, 1> xxy;
        _Swizzle<0, 0, 2> xxz;
        _Swizzle<0, 1, 0> xyx;
        _Swizzle<0, 1, 1> xyy;
        _Swizzle<0, 1, 2> xyz;
        _Swizzle<0, 2, 0> xzx;
        _Swizzle<0, 2, 1> xzy;
        _Swizzle<0, 2, 2> xzz;
        _Swizzle<1, 0, 0> yxx;
        _Swizzle<1, 0, 1> yxy;
        _Swizzle<1, 0, 2> yxz;
        _Swizzle<1, 1, 0> yyx;
        _Swizzle<1, 1, 1> yyy;
        _Swizzle<1, 1, 2> yyz;
        _Swizzle<1, 2, 0> yzx;
        _Swizzle<1, 2, 1> yzy;
        _Swizzle<1, 2, 2> yzz;
        _Swizzle<2, 0, 0> zxx;
        _Swizzle<2, 0, 1> zxy;
        _Swizzle<2, 0, 2> zxz;
        _Swizzle<2, 1, 0> zyx;
        _Swizzle<2, 1, 1> zyy;
        _Swizzle<2, 1, 2> zyz;
        _Swizzle<2, 2, 0> zzx;
        _Swizzle<2, 2, 1> zzy;
        _Swizzle<2, 2, 2> zzz;

        _Swizzle<0, 0, 0> rrr;
        _Swizzle<0, 0, 1> rrg;
        _Swizzle<0, 0, 2> rrb;
        _Swizzle<0, 1, 0> rgr;
        _Swizzle<0, 1, 1> rgg;
        _Swizzle<0, 1, 2> rgb;
        _Swizzle<0, 2, 0> rbr;
        _Swizzle<0, 2, 1> rbg;
        _Swizzle<0, 2, 2> rbb;
        _Swizzle<1, 0, 0> grr;
        _Swizzle<1, 0, 1> grg;
        _Swizzle<1, 0, 2> grb;
        _Swizzle<1, 1, 0> ggr;
        _Swizzle<1, 1, 1> ggg;
        _Swizzle<1, 1, 2> ggb;
        _Swizzle<1, 2, 0> gbr;
        _Swizzle<1, 2, 1> gbg;
        _Swizzle<1, 2, 2> gbb;
        _Swizzle<2, 0, 0> brr;
        _Swizzle<2, 0, 1> brg;
        _Swizzle<2, 0, 2> brb;
        _Swizzle<2, 1, 0> bgr;
        _Swizzle<2, 1, 1> bgg;
        _Swizzle<2, 1, 2> bgb;
        _Swizzle<2, 2, 0> bbr;
        _Swizzle<2, 2, 1> bbg;
        _Swizzle<2, 2, 2> bbb;

        _Swizzle<0, 0, 0> sss;
        _Swizzle<0, 0, 1> sst;
        _Swizzle<0, 0, 2> ssp;
        _Swizzle<0, 1, 0> sts;
        _Swizzle<0, 1, 1> stt;
        _Swizzle<0, 1, 2> stp;
        _Swizzle<0, 2, 0> sps;
        _Swizzle<0, 2, 1> spt;
        _Swizzle<0, 2, 2> spp;
        _Swizzle<1, 0, 0> tss;
        _Swizzle<1, 0, 1> tst;
        _Swizzle<1, 0, 2> tsp;
        _Swizzle<1, 1, 0> tts;
        _Swizzle<1, 1, 1> ttt;
        _Swizzle<1, 1, 2> ttp;
        _Swizzle<1, 2, 0> tps;
        _Swizzle<1, 2, 1> tpt;
        _Swizzle<1, 2, 2> tpp;
        _Swizzle<2, 0, 0> pss;
        _Swizzle<2, 0, 1> pst;
        _Swizzle<2, 0, 2> psp;
        _Swizzle<2, 1, 0> pts;
        _Swizzle<2, 1, 1> ptt;
        _Swizzle<2, 1, 2> ptp;
        _Swizzle<2, 2, 0> pps;
        _Swizzle<2, 2, 1> ppt;
        _Swizzle<2, 2, 2> ppp;
    };

    Vec3() : x(0), y(0), z(0)
    { }

    Vec3(T val) : x(val), y(val), z(val)
    { }

    Vec3(T x, T y, T z) : x(x), y(y), z(z)
    { }

    inline double length() const
    {
        return std::sqrt(x * x + y * y + z * z);
    }

    inline float lengthf() const
    {
        return sqrtf(x * x + y * y + z * z);
    }

    inline void normalize()
    {
        double len = length();

        if (!len) {
            return;
        }

        *this /= len;
    }

    inline Vec3<T> normalized() const
    {
        double len = length();

        if (!len) {
            return Vec3<T>{};
        }

        return Vec3<T>{static_cast<T>(x / len),
                       static_cast<T>(y / len),
                       static_cast<T>(z / len)};
    }

    inline double dot(const Vec3<T> &v) const
    {
        return x * v.x + y * v.y + z * v.z;
    }

    inline float dotf(const Vec3<T> &v) const
    {
        return x * v.x + y * v.y + z * v.z;
    }

    inline Vec3<T> cross(const Vec3<T> &v) const
    {
        return Vec3<T>{y * v.z - z * v.y,
                       z * v.x - x * v.z,
                       x * v.y - y * v.x};
    }

    inline void reflect(const Vec3<T> normal)
    {
        *this -= normal * 2 * dot(normal);
    }

    inline Vec3<T> reflected(const Vec3<T> normal) const
    {
        return *this - normal * 2 * dot(normal);
    }

    inline Vec3<T> operator-() const
    {
        return Vec3<T>{-x, -y, -z};
    }

    inline Vec3<T> operator+(const Vec3<T> &rhs) const
    {
        return Vec3<T>{x + rhs.x, y + rhs.y, z + rhs.z};
    }

    inline Vec3<T> operator-(const Vec3<T> &rhs) const
    {
        return Vec3<T>{x - rhs.x, y - rhs.y, z - rhs.z};
    }

    inline Vec3<T> operator*(const Vec3<T> &rhs) const
    {
        return Vec3<T>{x * rhs.x, y * rhs.y, z * rhs.z};
    }

    inline Vec3<T> operator/(const Vec3<T> &rhs)
    {
        return Vec3<T>{x / rhs.x, y / rhs.y, z / rhs.z};
    }

    inline void operator+=(const Vec3<T> &rhs)
    {
        x += rhs.x;
        y += rhs.y;
        z += rhs.z;
    }

    inline void operator-=(const Vec3<T> &rhs)
    {
        x -= rhs.x;
        y -= rhs.y;
        z -= rhs.z;
    }

    inline void operator*=(const Vec3<T> &rhs)
    {
        x *= rhs.x;
        y *= rhs.y;
        z *= rhs.z;
    }

    inline void operator/=(const Vec3<T> &rhs)
    {
        x /= rhs.x;
        y /= rhs.y;
        z /= rhs.z;
    }

    inline Vec3<T> operator+(T rhs) const
    {
        return Vec3<T>{x + rhs, y + rhs, z + rhs};
    }

    inline Vec3<T> operator-(T rhs) const
    {
        return Vec3<T>{x - rhs, y - rhs, z - rhs};
    }

    inline Vec3<T> operator*(T rhs) const
    {
        return Vec3<T>{x * rhs, y * rhs, z * rhs};
    }

    inline Vec3<T> operator/(T rhs) const
    {
        return Vec3<T>{x / rhs, y / rhs, z / rhs};
    }

    inline void operator+=(T rhs)
    {
        x += rhs;
        y += rhs;
        z += rhs;
    }

    inline void operator-=(T rhs)
    {
        x -= rhs;
        y -= rhs;
        z -= rhs;
    }

    inline void operator*=(T rhs)
    {
        x *= rhs;
        y *= rhs;
        z *= rhs;
    }

    inline void operator/=(T rhs)
    {
        x /= rhs;
        y /= rhs;
        z /= rhs;
    }
};

/**
 * @typedef Vec3f
 * Defines a three dimensional vector of floats.
 */
using Vec3f = Vec3<float>;

/**
 * @typedef Vec3d
 * Defines a three dimensional vector of double floats.
 */
using Vec3d = Vec3<double>;

/**
 * @typedef Vec3s
 * Defines a three dimensional vector of short integers.
 */
using Vec3s = Vec3<short>;

/**
 * @typedef Vec3us
 * Defines a three dimensional vector of unsigned short integers.
 */
using Vec3us = Vec3<unsigned short>;

/**
 * @typedef Vec3c
 * Defines a three dimensional vector of characters.
 */
using Vec3c = Vec3<char>;

/**
 * @typedef Vec3uc
 * Defines a three dimensional vector of unsigned characters.
 */
using Vec3uc = Vec3<unsigned char>;

/**
 * @typedef Vec3i
 * Defines a three dimensional vector of integers.
 */
using Vec3i = Vec3<int>;

/**
 * @typedef Vec3ui
 * Defines a three dimensional vector of unsigned integers.
 */
using Vec3ui = Vec3<unsigned int>;

/**
 * @typedef Vec3l
 * Defines a three dimensional vector of long integers.
 */
using Vec3l = Vec3<long>;

/**
 * @typedef Vec3ul
 * Defines a three dimensional vector of unsigned long integers.
 */
using Vec3ul = Vec3<unsigned long>;

/**
 * @typedef Vec3ll
 * Defines a three dimensional vector of long long integers.
 */
using Vec3ll = Vec3<long long>;

/**
 * @typedef Vec3ull
 * Defines a three dimensional vector of unsigned long long integers.
 */
using Vec3ull = Vec3<unsigned long long>;


/**
 * @class Vec4
 * @tparam T Can be any numeric value.
 * @brief A class that represents a 4 dimensional vector.
 * @details Vec4 is a class that represents a 4 dimensional
 * vector. It supports accessing the vector values with various
 * ways to accommodate various use cases:
 * @li position coordinates
 * @li texture coordinates
 * @li color values
 * @details Swizzles are available for all data representations.
 */
template<typename T>
class Vec4 {
private:
    template<int A, int B, int C, int D>
    class _Swizzle {
    private:
        T v[4];

    public:
        inline Vec4<T> &operator=(const Vec4<T> &rhs)
        {
            v[A] = rhs.x;
            v[B] = rhs.y;
            v[C] = rhs.z;
            v[D] = rhs.w;

            return *(Vec4<T> *) this;
        }

        inline operator Vec4() const
        {
            return Vec4<T>{v[A], v[B], v[C], v[D]};
        }

        inline Vec4<T> operator+(const Vec4<T> &rhs) const
        {
            return Vec4<T>{v[A] + rhs.x, v[B] + rhs.y, v[C] + rhs.z, v[D] + rhs.w};
        }

        inline Vec4<T> operator-(const Vec4<T> &rhs) const
        {
            return Vec4<T>{v[A] - rhs.x, v[B] - rhs.y, v[C] - rhs.z, v[D] - rhs.w};
        }

        inline Vec4<T> operator*(const Vec4<T> &rhs) const
        {
            return Vec4<T>{v[A] * rhs.x, v[B] * rhs.y, v[C] * rhs.z, v[D] * rhs.w};
        }

        inline Vec4<T> operator/(const Vec4<T> &rhs) const
        {
            return Vec4<T>{v[A] / rhs.x, v[B] / rhs.y, v[C] / rhs.z, v[D] / rhs.w};
        }

        inline Vec4<T> &operator+=(const Vec4<T> &rhs)
        {
            v[A] += rhs.x;
            v[B] += rhs.y;
            v[C] += rhs.z;
            v[D] += rhs.w;

            return *(Vec4<T> *) this;
        }

        inline Vec4<T> &operator-=(const Vec4<T> &rhs)
        {
            v[A] -= rhs.x;
            v[B] -= rhs.y;
            v[C] -= rhs.z;
            v[D] -= rhs.w;

            return *(Vec4<T> *) this;
        }

        inline Vec4<T> &operator*=(const Vec4<T> &rhs)
        {
            v[A] *= rhs.x;
            v[B] *= rhs.y;
            v[C] *= rhs.z;
            v[D] *= rhs.w;

            return *(Vec4<T> *) this;
        }

        inline Vec4<T> &operator/=(const Vec4<T> &rhs)
        {
            v[A] /= rhs.x;
            v[B] /= rhs.y;
            v[C] /= rhs.z;
            v[D] /= rhs.w;

            return *(Vec4<T> *) this;
        }

        inline Vec4<T> operator+(T rhs) const
        {
            return Vec4<T>{v[A] + rhs, v[B] + rhs, v[C] + rhs, v[D] + rhs};
        }

        inline Vec4<T> operator-(T rhs) const
        {
            return Vec4<T>{v[A] - rhs, v[B] - rhs, v[C] - rhs, v[D] - rhs};
        }

        inline Vec4<T> operator*(T rhs) const
        {
            return Vec4<T>{v[A] * rhs, v[B] * rhs, v[C] * rhs, v[D] * rhs};
        }

        inline Vec4<T> operator/(T rhs) const
        {
            return Vec4<T>{v[A] / rhs, v[B] / rhs, v[C] / rhs, v[D] / rhs};
        }

        inline Vec4<T> &operator+=(T rhs)
        {
            v[A] += rhs;
            v[B] += rhs;
            v[C] += rhs;
            v[D] += rhs;

            return *(Vec4<T> *) this;
        }

        inline Vec4<T> &operator-=(T rhs)
        {
            v[A] -= rhs;
            v[B] -= rhs;
            v[C] -= rhs;
            v[D] -= rhs;

            return *(Vec4<T> *) this;
        }

        inline Vec4<T> &operator*=(T rhs)
        {
            v[A] *= rhs;
            v[B] *= rhs;
            v[C] *= rhs;
            v[D] *= rhs;

            return *(Vec4<T> *) this;
        }

        inline Vec4<T> &operator/=(T rhs)
        {
            v[A] /= rhs;
            v[B] /= rhs;
            v[C] /= rhs;
            v[D] /= rhs;

            return *(Vec4<T> *) this;
        }
    };

    template<int A>
    class _Swizzle<A, A, A, A> {
    private:
        T v[4];

    public:
        operator Vec4() const
        {
            return Vec4<T>{v[A]};
        }

        inline Vec4<T> operator+(const Vec4<T> &rhs) const
        {
            return Vec4<T>{v[A] + rhs.x, v[A] + rhs.y, v[A] + rhs.z, v[A] + rhs.w};
        }

        inline Vec4<T> operator-(const Vec4<T> &rhs) const
        {
            return Vec4<T>{v[A] - rhs.x, v[A] - rhs.y, v[A] - rhs.z, v[A] - rhs.w};
        }

        inline Vec4<T> operator*(const Vec4<T> &rhs) const
        {
            return Vec4<T>{v[A] * rhs.x, v[A] * rhs.y, v[A] * rhs.z, v[A] * rhs.w};
        }

        inline Vec4<T> operator/(const Vec4<T> &rhs) const
        {
            return Vec4<T>{v[A] / rhs.x, v[A] / rhs.y, v[A] / rhs.z, v[A] / rhs.w};
        }

        inline Vec4<T> operator+(T rhs) const
        {
            return Vec4<T>{v[A] + rhs, v[A] + rhs, v[A] + rhs, v[A] + rhs};
        }

        inline Vec4<T> operator-(T rhs) const
        {
            return Vec4<T>{v[A] - rhs, v[A] - rhs, v[A] - rhs, v[A] - rhs};
        }

        inline Vec4<T> operator*(T rhs) const
        {
            return Vec4<T>{v[A] * rhs, v[A] * rhs, v[A] * rhs, v[A] * rhs};
        }

        inline Vec4<T> operator/(T rhs) const
        {
            return Vec4<T>{v[A] / rhs, v[A] / rhs, v[A] / rhs, v[A] / rhs};
        }
    };

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

        _Swizzle<0, 0, 0, 0> xxxx;
        _Swizzle<0, 0, 0, 1> xxxy;
        _Swizzle<0, 0, 0, 2> xxxz;
        _Swizzle<0, 0, 0, 3> xxxw;
        _Swizzle<0, 0, 1, 0> xxyx;
        _Swizzle<0, 0, 1, 1> xxyy;
        _Swizzle<0, 0, 1, 2> xxyz;
        _Swizzle<0, 0, 1, 3> xxyw;
        _Swizzle<0, 0, 2, 0> xxzx;
        _Swizzle<0, 0, 2, 1> xxzy;
        _Swizzle<0, 0, 2, 2> xxzz;
        _Swizzle<0, 0, 2, 3> xxzw;
        _Swizzle<0, 0, 3, 0> xxwx;
        _Swizzle<0, 0, 3, 1> xxwy;
        _Swizzle<0, 0, 3, 2> xxwz;
        _Swizzle<0, 0, 3, 3> xxww;
        _Swizzle<0, 1, 0, 0> xyxx;
        _Swizzle<0, 1, 0, 1> xyxy;
        _Swizzle<0, 1, 0, 2> xyxz;
        _Swizzle<0, 1, 0, 3> xyxw;
        _Swizzle<0, 1, 1, 0> xyyx;
        _Swizzle<0, 1, 1, 1> xyyy;
        _Swizzle<0, 1, 1, 2> xyyz;
        _Swizzle<0, 1, 1, 3> xyyw;
        _Swizzle<0, 1, 2, 0> xyzx;
        _Swizzle<0, 1, 2, 1> xyzy;
        _Swizzle<0, 1, 2, 2> xyzz;
        _Swizzle<0, 1, 2, 3> xyzw;
        _Swizzle<0, 1, 3, 0> xywx;
        _Swizzle<0, 1, 3, 1> xywy;
        _Swizzle<0, 1, 3, 2> xywz;
        _Swizzle<0, 1, 3, 3> xyww;
        _Swizzle<0, 2, 0, 0> xzxx;
        _Swizzle<0, 2, 0, 1> xzxy;
        _Swizzle<0, 2, 0, 2> xzxz;
        _Swizzle<0, 2, 0, 3> xzxw;
        _Swizzle<0, 2, 1, 0> xzyx;
        _Swizzle<0, 2, 1, 1> xzyy;
        _Swizzle<0, 2, 1, 2> xzyz;
        _Swizzle<0, 2, 1, 3> xzyw;
        _Swizzle<0, 2, 2, 0> xzzx;
        _Swizzle<0, 2, 2, 1> xzzy;
        _Swizzle<0, 2, 2, 2> xzzz;
        _Swizzle<0, 2, 2, 3> xzzw;
        _Swizzle<0, 2, 3, 0> xzwx;
        _Swizzle<0, 2, 3, 1> xzwy;
        _Swizzle<0, 2, 3, 2> xzwz;
        _Swizzle<0, 2, 3, 3> xzww;
        _Swizzle<0, 3, 0, 0> xwxx;
        _Swizzle<0, 3, 0, 1> xwxy;
        _Swizzle<0, 3, 0, 2> xwxz;
        _Swizzle<0, 3, 0, 3> xwxw;
        _Swizzle<0, 3, 1, 0> xwyx;
        _Swizzle<0, 3, 1, 1> xwyy;
        _Swizzle<0, 3, 1, 2> xwyz;
        _Swizzle<0, 3, 1, 3> xwyw;
        _Swizzle<0, 3, 2, 0> xwzx;
        _Swizzle<0, 3, 2, 1> xwzy;
        _Swizzle<0, 3, 2, 2> xwzz;
        _Swizzle<0, 3, 2, 3> xwzw;
        _Swizzle<0, 3, 3, 0> xwwx;
        _Swizzle<0, 3, 3, 1> xwwy;
        _Swizzle<0, 3, 3, 2> xwwz;
        _Swizzle<0, 3, 3, 3> xwww;
        _Swizzle<1, 0, 0, 0> yxxx;
        _Swizzle<1, 0, 0, 1> yxxy;
        _Swizzle<1, 0, 0, 2> yxxz;
        _Swizzle<1, 0, 0, 3> yxxw;
        _Swizzle<1, 0, 1, 0> yxyx;
        _Swizzle<1, 0, 1, 1> yxyy;
        _Swizzle<1, 0, 1, 2> yxyz;
        _Swizzle<1, 0, 1, 3> yxyw;
        _Swizzle<1, 0, 2, 0> yxzx;
        _Swizzle<1, 0, 2, 1> yxzy;
        _Swizzle<1, 0, 2, 2> yxzz;
        _Swizzle<1, 0, 2, 3> yxzw;
        _Swizzle<1, 0, 3, 0> yxwx;
        _Swizzle<1, 0, 3, 1> yxwy;
        _Swizzle<1, 0, 3, 2> yxwz;
        _Swizzle<1, 0, 3, 3> yxww;
        _Swizzle<1, 1, 0, 0> yyxx;
        _Swizzle<1, 1, 0, 1> yyxy;
        _Swizzle<1, 1, 0, 2> yyxz;
        _Swizzle<1, 1, 0, 3> yyxw;
        _Swizzle<1, 1, 1, 0> yyyx;
        _Swizzle<1, 1, 1, 1> yyyy;
        _Swizzle<1, 1, 1, 2> yyyz;
        _Swizzle<1, 1, 1, 3> yyyw;
        _Swizzle<1, 1, 2, 0> yyzx;
        _Swizzle<1, 1, 2, 1> yyzy;
        _Swizzle<1, 1, 2, 2> yyzz;
        _Swizzle<1, 1, 2, 3> yyzw;
        _Swizzle<1, 1, 3, 0> yywx;
        _Swizzle<1, 1, 3, 1> yywy;
        _Swizzle<1, 1, 3, 2> yywz;
        _Swizzle<1, 1, 3, 3> yyww;
        _Swizzle<1, 2, 0, 0> yzxx;
        _Swizzle<1, 2, 0, 1> yzxy;
        _Swizzle<1, 2, 0, 2> yzxz;
        _Swizzle<1, 2, 0, 3> yzxw;
        _Swizzle<1, 2, 1, 0> yzyx;
        _Swizzle<1, 2, 1, 1> yzyy;
        _Swizzle<1, 2, 1, 2> yzyz;
        _Swizzle<1, 2, 1, 3> yzyw;
        _Swizzle<1, 2, 2, 0> yzzx;
        _Swizzle<1, 2, 2, 1> yzzy;
        _Swizzle<1, 2, 2, 2> yzzz;
        _Swizzle<1, 2, 2, 3> yzzw;
        _Swizzle<1, 2, 3, 0> yzwx;
        _Swizzle<1, 2, 3, 1> yzwy;
        _Swizzle<1, 2, 3, 2> yzwz;
        _Swizzle<1, 2, 3, 3> yzww;
        _Swizzle<1, 3, 0, 0> ywxx;
        _Swizzle<1, 3, 0, 1> ywxy;
        _Swizzle<1, 3, 0, 2> ywxz;
        _Swizzle<1, 3, 0, 3> ywxw;
        _Swizzle<1, 3, 1, 0> ywyx;
        _Swizzle<1, 3, 1, 1> ywyy;
        _Swizzle<1, 3, 1, 2> ywyz;
        _Swizzle<1, 3, 1, 3> ywyw;
        _Swizzle<1, 3, 2, 0> ywzx;
        _Swizzle<1, 3, 2, 1> ywzy;
        _Swizzle<1, 3, 2, 2> ywzz;
        _Swizzle<1, 3, 2, 3> ywzw;
        _Swizzle<1, 3, 3, 0> ywwx;
        _Swizzle<1, 3, 3, 1> ywwy;
        _Swizzle<1, 3, 3, 2> ywwz;
        _Swizzle<1, 3, 3, 3> ywww;
        _Swizzle<2, 0, 0, 0> zxxx;
        _Swizzle<2, 0, 0, 1> zxxy;
        _Swizzle<2, 0, 0, 2> zxxz;
        _Swizzle<2, 0, 0, 3> zxxw;
        _Swizzle<2, 0, 1, 0> zxyx;
        _Swizzle<2, 0, 1, 1> zxyy;
        _Swizzle<2, 0, 1, 2> zxyz;
        _Swizzle<2, 0, 1, 3> zxyw;
        _Swizzle<2, 0, 2, 0> zxzx;
        _Swizzle<2, 0, 2, 1> zxzy;
        _Swizzle<2, 0, 2, 2> zxzz;
        _Swizzle<2, 0, 2, 3> zxzw;
        _Swizzle<2, 0, 3, 0> zxwx;
        _Swizzle<2, 0, 3, 1> zxwy;
        _Swizzle<2, 0, 3, 2> zxwz;
        _Swizzle<2, 0, 3, 3> zxww;
        _Swizzle<2, 1, 0, 0> zyxx;
        _Swizzle<2, 1, 0, 1> zyxy;
        _Swizzle<2, 1, 0, 2> zyxz;
        _Swizzle<2, 1, 0, 3> zyxw;
        _Swizzle<2, 1, 1, 0> zyyx;
        _Swizzle<2, 1, 1, 1> zyyy;
        _Swizzle<2, 1, 1, 2> zyyz;
        _Swizzle<2, 1, 1, 3> zyyw;
        _Swizzle<2, 1, 2, 0> zyzx;
        _Swizzle<2, 1, 2, 1> zyzy;
        _Swizzle<2, 1, 2, 2> zyzz;
        _Swizzle<2, 1, 2, 3> zyzw;
        _Swizzle<2, 1, 3, 0> zywx;
        _Swizzle<2, 1, 3, 1> zywy;
        _Swizzle<2, 1, 3, 2> zywz;
        _Swizzle<2, 1, 3, 3> zyww;
        _Swizzle<2, 2, 0, 0> zzxx;
        _Swizzle<2, 2, 0, 1> zzxy;
        _Swizzle<2, 2, 0, 2> zzxz;
        _Swizzle<2, 2, 0, 3> zzxw;
        _Swizzle<2, 2, 1, 0> zzyx;
        _Swizzle<2, 2, 1, 1> zzyy;
        _Swizzle<2, 2, 1, 2> zzyz;
        _Swizzle<2, 2, 1, 3> zzyw;
        _Swizzle<2, 2, 2, 0> zzzx;
        _Swizzle<2, 2, 2, 1> zzzy;
        _Swizzle<2, 2, 2, 2> zzzz;
        _Swizzle<2, 2, 2, 3> zzzw;
        _Swizzle<2, 2, 3, 0> zzwx;
        _Swizzle<2, 2, 3, 1> zzwy;
        _Swizzle<2, 2, 3, 2> zzwz;
        _Swizzle<2, 2, 3, 3> zzww;
        _Swizzle<2, 3, 0, 0> zwxx;
        _Swizzle<2, 3, 0, 1> zwxy;
        _Swizzle<2, 3, 0, 2> zwxz;
        _Swizzle<2, 3, 0, 3> zwxw;
        _Swizzle<2, 3, 1, 0> zwyx;
        _Swizzle<2, 3, 1, 1> zwyy;
        _Swizzle<2, 3, 1, 2> zwyz;
        _Swizzle<2, 3, 1, 3> zwyw;
        _Swizzle<2, 3, 2, 0> zwzx;
        _Swizzle<2, 3, 2, 1> zwzy;
        _Swizzle<2, 3, 2, 2> zwzz;
        _Swizzle<2, 3, 2, 3> zwzw;
        _Swizzle<2, 3, 3, 0> zwwx;
        _Swizzle<2, 3, 3, 1> zwwy;
        _Swizzle<2, 3, 3, 2> zwwz;
        _Swizzle<2, 3, 3, 3> zwww;
        _Swizzle<3, 0, 0, 0> wxxx;
        _Swizzle<3, 0, 0, 1> wxxy;
        _Swizzle<3, 0, 0, 2> wxxz;
        _Swizzle<3, 0, 0, 3> wxxw;
        _Swizzle<3, 0, 1, 0> wxyx;
        _Swizzle<3, 0, 1, 1> wxyy;
        _Swizzle<3, 0, 1, 2> wxyz;
        _Swizzle<3, 0, 1, 3> wxyw;
        _Swizzle<3, 0, 2, 0> wxzx;
        _Swizzle<3, 0, 2, 1> wxzy;
        _Swizzle<3, 0, 2, 2> wxzz;
        _Swizzle<3, 0, 2, 3> wxzw;
        _Swizzle<3, 0, 3, 0> wxwx;
        _Swizzle<3, 0, 3, 1> wxwy;
        _Swizzle<3, 0, 3, 2> wxwz;
        _Swizzle<3, 0, 3, 3> wxww;
        _Swizzle<3, 1, 0, 0> wyxx;
        _Swizzle<3, 1, 0, 1> wyxy;
        _Swizzle<3, 1, 0, 2> wyxz;
        _Swizzle<3, 1, 0, 3> wyxw;
        _Swizzle<3, 1, 1, 0> wyyx;
        _Swizzle<3, 1, 1, 1> wyyy;
        _Swizzle<3, 1, 1, 2> wyyz;
        _Swizzle<3, 1, 1, 3> wyyw;
        _Swizzle<3, 1, 2, 0> wyzx;
        _Swizzle<3, 1, 2, 1> wyzy;
        _Swizzle<3, 1, 2, 2> wyzz;
        _Swizzle<3, 1, 2, 3> wyzw;
        _Swizzle<3, 1, 3, 0> wywx;
        _Swizzle<3, 1, 3, 1> wywy;
        _Swizzle<3, 1, 3, 2> wywz;
        _Swizzle<3, 1, 3, 3> wyww;
        _Swizzle<3, 2, 0, 0> wzxx;
        _Swizzle<3, 2, 0, 1> wzxy;
        _Swizzle<3, 2, 0, 2> wzxz;
        _Swizzle<3, 2, 0, 3> wzxw;
        _Swizzle<3, 2, 1, 0> wzyx;
        _Swizzle<3, 2, 1, 1> wzyy;
        _Swizzle<3, 2, 1, 2> wzyz;
        _Swizzle<3, 2, 1, 3> wzyw;
        _Swizzle<3, 2, 2, 0> wzzx;
        _Swizzle<3, 2, 2, 1> wzzy;
        _Swizzle<3, 2, 2, 2> wzzz;
        _Swizzle<3, 2, 2, 3> wzzw;
        _Swizzle<3, 2, 3, 0> wzwx;
        _Swizzle<3, 2, 3, 1> wzwy;
        _Swizzle<3, 2, 3, 2> wzwz;
        _Swizzle<3, 2, 3, 3> wzww;
        _Swizzle<3, 3, 0, 0> wwxx;
        _Swizzle<3, 3, 0, 1> wwxy;
        _Swizzle<3, 3, 0, 2> wwxz;
        _Swizzle<3, 3, 0, 3> wwxw;
        _Swizzle<3, 3, 1, 0> wwyx;
        _Swizzle<3, 3, 1, 1> wwyy;
        _Swizzle<3, 3, 1, 2> wwyz;
        _Swizzle<3, 3, 1, 3> wwyw;
        _Swizzle<3, 3, 2, 0> wwzx;
        _Swizzle<3, 3, 2, 1> wwzy;
        _Swizzle<3, 3, 2, 2> wwzz;
        _Swizzle<3, 3, 2, 3> wwzw;
        _Swizzle<3, 3, 3, 0> wwwx;
        _Swizzle<3, 3, 3, 1> wwwy;
        _Swizzle<3, 3, 3, 2> wwwz;
        _Swizzle<3, 3, 3, 3> wwww;

        _Swizzle<0, 0, 0, 0> rrrr;
        _Swizzle<0, 0, 0, 1> rrrg;
        _Swizzle<0, 0, 0, 2> rrrb;
        _Swizzle<0, 0, 0, 3> rrra;
        _Swizzle<0, 0, 1, 0> rrgr;
        _Swizzle<0, 0, 1, 1> rrgg;
        _Swizzle<0, 0, 1, 2> rrgb;
        _Swizzle<0, 0, 1, 3> rrga;
        _Swizzle<0, 0, 2, 0> rrbr;
        _Swizzle<0, 0, 2, 1> rrbg;
        _Swizzle<0, 0, 2, 2> rrbb;
        _Swizzle<0, 0, 2, 3> rrba;
        _Swizzle<0, 0, 3, 0> rrar;
        _Swizzle<0, 0, 3, 1> rrag;
        _Swizzle<0, 0, 3, 2> rrab;
        _Swizzle<0, 0, 3, 3> rraa;
        _Swizzle<0, 1, 0, 0> rgrr;
        _Swizzle<0, 1, 0, 1> rgrg;
        _Swizzle<0, 1, 0, 2> rgrb;
        _Swizzle<0, 1, 0, 3> rgra;
        _Swizzle<0, 1, 1, 0> rggr;
        _Swizzle<0, 1, 1, 1> rggg;
        _Swizzle<0, 1, 1, 2> rggb;
        _Swizzle<0, 1, 1, 3> rgga;
        _Swizzle<0, 1, 2, 0> rgbr;
        _Swizzle<0, 1, 2, 1> rgbg;
        _Swizzle<0, 1, 2, 2> rgbb;
        _Swizzle<0, 1, 2, 3> rgba;
        _Swizzle<0, 1, 3, 0> rgar;
        _Swizzle<0, 1, 3, 1> rgag;
        _Swizzle<0, 1, 3, 2> rgab;
        _Swizzle<0, 1, 3, 3> rgaa;
        _Swizzle<0, 2, 0, 0> rbrr;
        _Swizzle<0, 2, 0, 1> rbrg;
        _Swizzle<0, 2, 0, 2> rbrb;
        _Swizzle<0, 2, 0, 3> rbra;
        _Swizzle<0, 2, 1, 0> rbgr;
        _Swizzle<0, 2, 1, 1> rbgg;
        _Swizzle<0, 2, 1, 2> rbgb;
        _Swizzle<0, 2, 1, 3> rbga;
        _Swizzle<0, 2, 2, 0> rbbr;
        _Swizzle<0, 2, 2, 1> rbbg;
        _Swizzle<0, 2, 2, 2> rbbb;
        _Swizzle<0, 2, 2, 3> rbba;
        _Swizzle<0, 2, 3, 0> rbar;
        _Swizzle<0, 2, 3, 1> rbag;
        _Swizzle<0, 2, 3, 2> rbab;
        _Swizzle<0, 2, 3, 3> rbaa;
        _Swizzle<0, 3, 0, 0> rarr;
        _Swizzle<0, 3, 0, 1> rarg;
        _Swizzle<0, 3, 0, 2> rarb;
        _Swizzle<0, 3, 0, 3> rara;
        _Swizzle<0, 3, 1, 0> ragr;
        _Swizzle<0, 3, 1, 1> ragg;
        _Swizzle<0, 3, 1, 2> ragb;
        _Swizzle<0, 3, 1, 3> raga;
        _Swizzle<0, 3, 2, 0> rabr;
        _Swizzle<0, 3, 2, 1> rabg;
        _Swizzle<0, 3, 2, 2> rabb;
        _Swizzle<0, 3, 2, 3> raba;
        _Swizzle<0, 3, 3, 0> raar;
        _Swizzle<0, 3, 3, 1> raag;
        _Swizzle<0, 3, 3, 2> raab;
        _Swizzle<0, 3, 3, 3> raaa;
        _Swizzle<1, 0, 0, 0> grrr;
        _Swizzle<1, 0, 0, 1> grrg;
        _Swizzle<1, 0, 0, 2> grrb;
        _Swizzle<1, 0, 0, 3> grra;
        _Swizzle<1, 0, 1, 0> grgr;
        _Swizzle<1, 0, 1, 1> grgg;
        _Swizzle<1, 0, 1, 2> grgb;
        _Swizzle<1, 0, 1, 3> grga;
        _Swizzle<1, 0, 2, 0> grbr;
        _Swizzle<1, 0, 2, 1> grbg;
        _Swizzle<1, 0, 2, 2> grbb;
        _Swizzle<1, 0, 2, 3> grba;
        _Swizzle<1, 0, 3, 0> grar;
        _Swizzle<1, 0, 3, 1> grag;
        _Swizzle<1, 0, 3, 2> grab;
        _Swizzle<1, 0, 3, 3> graa;
        _Swizzle<1, 1, 0, 0> ggrr;
        _Swizzle<1, 1, 0, 1> ggrg;
        _Swizzle<1, 1, 0, 2> ggrb;
        _Swizzle<1, 1, 0, 3> ggra;
        _Swizzle<1, 1, 1, 0> gggr;
        _Swizzle<1, 1, 1, 1> gggg;
        _Swizzle<1, 1, 1, 2> gggb;
        _Swizzle<1, 1, 1, 3> ggga;
        _Swizzle<1, 1, 2, 0> ggbr;
        _Swizzle<1, 1, 2, 1> ggbg;
        _Swizzle<1, 1, 2, 2> ggbb;
        _Swizzle<1, 1, 2, 3> ggba;
        _Swizzle<1, 1, 3, 0> ggar;
        _Swizzle<1, 1, 3, 1> ggag;
        _Swizzle<1, 1, 3, 2> ggab;
        _Swizzle<1, 1, 3, 3> ggaa;
        _Swizzle<1, 2, 0, 0> gbrr;
        _Swizzle<1, 2, 0, 1> gbrg;
        _Swizzle<1, 2, 0, 2> gbrb;
        _Swizzle<1, 2, 0, 3> gbra;
        _Swizzle<1, 2, 1, 0> gbgr;
        _Swizzle<1, 2, 1, 1> gbgg;
        _Swizzle<1, 2, 1, 2> gbgb;
        _Swizzle<1, 2, 1, 3> gbga;
        _Swizzle<1, 2, 2, 0> gbbr;
        _Swizzle<1, 2, 2, 1> gbbg;
        _Swizzle<1, 2, 2, 2> gbbb;
        _Swizzle<1, 2, 2, 3> gbba;
        _Swizzle<1, 2, 3, 0> gbar;
        _Swizzle<1, 2, 3, 1> gbag;
        _Swizzle<1, 2, 3, 2> gbab;
        _Swizzle<1, 2, 3, 3> gbaa;
        _Swizzle<1, 3, 0, 0> garr;
        _Swizzle<1, 3, 0, 1> garg;
        _Swizzle<1, 3, 0, 2> garb;
        _Swizzle<1, 3, 0, 3> gara;
        _Swizzle<1, 3, 1, 0> gagr;
        _Swizzle<1, 3, 1, 1> gagg;
        _Swizzle<1, 3, 1, 2> gagb;
        _Swizzle<1, 3, 1, 3> gaga;
        _Swizzle<1, 3, 2, 0> gabr;
        _Swizzle<1, 3, 2, 1> gabg;
        _Swizzle<1, 3, 2, 2> gabb;
        _Swizzle<1, 3, 2, 3> gaba;
        _Swizzle<1, 3, 3, 0> gaar;
        _Swizzle<1, 3, 3, 1> gaag;
        _Swizzle<1, 3, 3, 2> gaab;
        _Swizzle<1, 3, 3, 3> gaaa;
        _Swizzle<2, 0, 0, 0> brrr;
        _Swizzle<2, 0, 0, 1> brrg;
        _Swizzle<2, 0, 0, 2> brrb;
        _Swizzle<2, 0, 0, 3> brra;
        _Swizzle<2, 0, 1, 0> brgr;
        _Swizzle<2, 0, 1, 1> brgg;
        _Swizzle<2, 0, 1, 2> brgb;
        _Swizzle<2, 0, 1, 3> brga;
        _Swizzle<2, 0, 2, 0> brbr;
        _Swizzle<2, 0, 2, 1> brbg;
        _Swizzle<2, 0, 2, 2> brbb;
        _Swizzle<2, 0, 2, 3> brba;
        _Swizzle<2, 0, 3, 0> brar;
        _Swizzle<2, 0, 3, 1> brag;
        _Swizzle<2, 0, 3, 2> brab;
        _Swizzle<2, 0, 3, 3> braa;
        _Swizzle<2, 1, 0, 0> bgrr;
        _Swizzle<2, 1, 0, 1> bgrg;
        _Swizzle<2, 1, 0, 2> bgrb;
        _Swizzle<2, 1, 0, 3> bgra;
        _Swizzle<2, 1, 1, 0> bggr;
        _Swizzle<2, 1, 1, 1> bggg;
        _Swizzle<2, 1, 1, 2> bggb;
        _Swizzle<2, 1, 1, 3> bgga;
        _Swizzle<2, 1, 2, 0> bgbr;
        _Swizzle<2, 1, 2, 1> bgbg;
        _Swizzle<2, 1, 2, 2> bgbb;
        _Swizzle<2, 1, 2, 3> bgba;
        _Swizzle<2, 1, 3, 0> bgar;
        _Swizzle<2, 1, 3, 1> bgag;
        _Swizzle<2, 1, 3, 2> bgab;
        _Swizzle<2, 1, 3, 3> bgaa;
        _Swizzle<2, 2, 0, 0> bbrr;
        _Swizzle<2, 2, 0, 1> bbrg;
        _Swizzle<2, 2, 0, 2> bbrb;
        _Swizzle<2, 2, 0, 3> bbra;
        _Swizzle<2, 2, 1, 0> bbgr;
        _Swizzle<2, 2, 1, 1> bbgg;
        _Swizzle<2, 2, 1, 2> bbgb;
        _Swizzle<2, 2, 1, 3> bbga;
        _Swizzle<2, 2, 2, 0> bbbr;
        _Swizzle<2, 2, 2, 1> bbbg;
        _Swizzle<2, 2, 2, 2> bbbb;
        _Swizzle<2, 2, 2, 3> bbba;
        _Swizzle<2, 2, 3, 0> bbar;
        _Swizzle<2, 2, 3, 1> bbag;
        _Swizzle<2, 2, 3, 2> bbab;
        _Swizzle<2, 2, 3, 3> bbaa;
        _Swizzle<2, 3, 0, 0> barr;
        _Swizzle<2, 3, 0, 1> barg;
        _Swizzle<2, 3, 0, 2> barb;
        _Swizzle<2, 3, 0, 3> bara;
        _Swizzle<2, 3, 1, 0> bagr;
        _Swizzle<2, 3, 1, 1> bagg;
        _Swizzle<2, 3, 1, 2> bagb;
        _Swizzle<2, 3, 1, 3> baga;
        _Swizzle<2, 3, 2, 0> babr;
        _Swizzle<2, 3, 2, 1> babg;
        _Swizzle<2, 3, 2, 2> babb;
        _Swizzle<2, 3, 2, 3> baba;
        _Swizzle<2, 3, 3, 0> baar;
        _Swizzle<2, 3, 3, 1> baag;
        _Swizzle<2, 3, 3, 2> baab;
        _Swizzle<2, 3, 3, 3> baaa;
        _Swizzle<3, 0, 0, 0> arrr;
        _Swizzle<3, 0, 0, 1> arrg;
        _Swizzle<3, 0, 0, 2> arrb;
        _Swizzle<3, 0, 0, 3> arra;
        _Swizzle<3, 0, 1, 0> argr;
        _Swizzle<3, 0, 1, 1> argg;
        _Swizzle<3, 0, 1, 2> argb;
        _Swizzle<3, 0, 1, 3> arga;
        _Swizzle<3, 0, 2, 0> arbr;
        _Swizzle<3, 0, 2, 1> arbg;
        _Swizzle<3, 0, 2, 2> arbb;
        _Swizzle<3, 0, 2, 3> arba;
        _Swizzle<3, 0, 3, 0> arar;
        _Swizzle<3, 0, 3, 1> arag;
        _Swizzle<3, 0, 3, 2> arab;
        _Swizzle<3, 0, 3, 3> araa;
        _Swizzle<3, 1, 0, 0> agrr;
        _Swizzle<3, 1, 0, 1> agrg;
        _Swizzle<3, 1, 0, 2> agrb;
        _Swizzle<3, 1, 0, 3> agra;
        _Swizzle<3, 1, 1, 0> aggr;
        _Swizzle<3, 1, 1, 1> aggg;
        _Swizzle<3, 1, 1, 2> aggb;
        _Swizzle<3, 1, 1, 3> agga;
        _Swizzle<3, 1, 2, 0> agbr;
        _Swizzle<3, 1, 2, 1> agbg;
        _Swizzle<3, 1, 2, 2> agbb;
        _Swizzle<3, 1, 2, 3> agba;
        _Swizzle<3, 1, 3, 0> agar;
        _Swizzle<3, 1, 3, 1> agag;
        _Swizzle<3, 1, 3, 2> agab;
        _Swizzle<3, 1, 3, 3> agaa;
        _Swizzle<3, 2, 0, 0> abrr;
        _Swizzle<3, 2, 0, 1> abrg;
        _Swizzle<3, 2, 0, 2> abrb;
        _Swizzle<3, 2, 0, 3> abra;
        _Swizzle<3, 2, 1, 0> abgr;
        _Swizzle<3, 2, 1, 1> abgg;
        _Swizzle<3, 2, 1, 2> abgb;
        _Swizzle<3, 2, 1, 3> abga;
        _Swizzle<3, 2, 2, 0> abbr;
        _Swizzle<3, 2, 2, 1> abbg;
        _Swizzle<3, 2, 2, 2> abbb;
        _Swizzle<3, 2, 2, 3> abba;
        _Swizzle<3, 2, 3, 0> abar;
        _Swizzle<3, 2, 3, 1> abag;
        _Swizzle<3, 2, 3, 2> abab;
        _Swizzle<3, 2, 3, 3> abaa;
        _Swizzle<3, 3, 0, 0> aarr;
        _Swizzle<3, 3, 0, 1> aarg;
        _Swizzle<3, 3, 0, 2> aarb;
        _Swizzle<3, 3, 0, 3> aara;
        _Swizzle<3, 3, 1, 0> aagr;
        _Swizzle<3, 3, 1, 1> aagg;
        _Swizzle<3, 3, 1, 2> aagb;
        _Swizzle<3, 3, 1, 3> aaga;
        _Swizzle<3, 3, 2, 0> aabr;
        _Swizzle<3, 3, 2, 1> aabg;
        _Swizzle<3, 3, 2, 2> aabb;
        _Swizzle<3, 3, 2, 3> aaba;
        _Swizzle<3, 3, 3, 0> aaar;
        _Swizzle<3, 3, 3, 1> aaag;
        _Swizzle<3, 3, 3, 2> aaab;
        _Swizzle<3, 3, 3, 3> aaaa;

        _Swizzle<0, 0, 0, 0> ssss;
        _Swizzle<0, 0, 0, 1> ssst;
        _Swizzle<0, 0, 0, 2> sssp;
        _Swizzle<0, 0, 0, 3> sssq;
        _Swizzle<0, 0, 1, 0> ssts;
        _Swizzle<0, 0, 1, 1> sstt;
        _Swizzle<0, 0, 1, 2> sstp;
        _Swizzle<0, 0, 1, 3> sstq;
        _Swizzle<0, 0, 2, 0> ssps;
        _Swizzle<0, 0, 2, 1> sspt;
        _Swizzle<0, 0, 2, 2> sspp;
        _Swizzle<0, 0, 2, 3> sspq;
        _Swizzle<0, 0, 3, 0> ssqs;
        _Swizzle<0, 0, 3, 1> ssqt;
        _Swizzle<0, 0, 3, 2> ssqp;
        _Swizzle<0, 0, 3, 3> ssqq;
        _Swizzle<0, 1, 0, 0> stss;
        _Swizzle<0, 1, 0, 1> stst;
        _Swizzle<0, 1, 0, 2> stsp;
        _Swizzle<0, 1, 0, 3> stsq;
        _Swizzle<0, 1, 1, 0> stts;
        _Swizzle<0, 1, 1, 1> sttt;
        _Swizzle<0, 1, 1, 2> sttp;
        _Swizzle<0, 1, 1, 3> sttq;
        _Swizzle<0, 1, 2, 0> stps;
        _Swizzle<0, 1, 2, 1> stpt;
        _Swizzle<0, 1, 2, 2> stpp;
        _Swizzle<0, 1, 2, 3> stpq;
        _Swizzle<0, 1, 3, 0> stqs;
        _Swizzle<0, 1, 3, 1> stqt;
        _Swizzle<0, 1, 3, 2> stqp;
        _Swizzle<0, 1, 3, 3> stqq;
        _Swizzle<0, 2, 0, 0> spss;
        _Swizzle<0, 2, 0, 1> spst;
        _Swizzle<0, 2, 0, 2> spsp;
        _Swizzle<0, 2, 0, 3> spsq;
        _Swizzle<0, 2, 1, 0> spts;
        _Swizzle<0, 2, 1, 1> sptt;
        _Swizzle<0, 2, 1, 2> sptp;
        _Swizzle<0, 2, 1, 3> sptq;
        _Swizzle<0, 2, 2, 0> spps;
        _Swizzle<0, 2, 2, 1> sppt;
        _Swizzle<0, 2, 2, 2> sppp;
        _Swizzle<0, 2, 2, 3> sppq;
        _Swizzle<0, 2, 3, 0> spqs;
        _Swizzle<0, 2, 3, 1> spqt;
        _Swizzle<0, 2, 3, 2> spqp;
        _Swizzle<0, 2, 3, 3> spqq;
        _Swizzle<0, 3, 0, 0> sqss;
        _Swizzle<0, 3, 0, 1> sqst;
        _Swizzle<0, 3, 0, 2> sqsp;
        _Swizzle<0, 3, 0, 3> sqsq;
        _Swizzle<0, 3, 1, 0> sqts;
        _Swizzle<0, 3, 1, 1> sqtt;
        _Swizzle<0, 3, 1, 2> sqtp;
        _Swizzle<0, 3, 1, 3> sqtq;
        _Swizzle<0, 3, 2, 0> sqps;
        _Swizzle<0, 3, 2, 1> sqpt;
        _Swizzle<0, 3, 2, 2> sqpp;
        _Swizzle<0, 3, 2, 3> sqpq;
        _Swizzle<0, 3, 3, 0> sqqs;
        _Swizzle<0, 3, 3, 1> sqqt;
        _Swizzle<0, 3, 3, 2> sqqp;
        _Swizzle<0, 3, 3, 3> sqqq;
        _Swizzle<1, 0, 0, 0> tsss;
        _Swizzle<1, 0, 0, 1> tsst;
        _Swizzle<1, 0, 0, 2> tssp;
        _Swizzle<1, 0, 0, 3> tssq;
        _Swizzle<1, 0, 1, 0> tsts;
        _Swizzle<1, 0, 1, 1> tstt;
        _Swizzle<1, 0, 1, 2> tstp;
        _Swizzle<1, 0, 1, 3> tstq;
        _Swizzle<1, 0, 2, 0> tsps;
        _Swizzle<1, 0, 2, 1> tspt;
        _Swizzle<1, 0, 2, 2> tspp;
        _Swizzle<1, 0, 2, 3> tspq;
        _Swizzle<1, 0, 3, 0> tsqs;
        _Swizzle<1, 0, 3, 1> tsqt;
        _Swizzle<1, 0, 3, 2> tsqp;
        _Swizzle<1, 0, 3, 3> tsqq;
        _Swizzle<1, 1, 0, 0> ttss;
        _Swizzle<1, 1, 0, 1> ttst;
        _Swizzle<1, 1, 0, 2> ttsp;
        _Swizzle<1, 1, 0, 3> ttsq;
        _Swizzle<1, 1, 1, 0> ttts;
        _Swizzle<1, 1, 1, 1> tttt;
        _Swizzle<1, 1, 1, 2> tttp;
        _Swizzle<1, 1, 1, 3> tttq;
        _Swizzle<1, 1, 2, 0> ttps;
        _Swizzle<1, 1, 2, 1> ttpt;
        _Swizzle<1, 1, 2, 2> ttpp;
        _Swizzle<1, 1, 2, 3> ttpq;
        _Swizzle<1, 1, 3, 0> ttqs;
        _Swizzle<1, 1, 3, 1> ttqt;
        _Swizzle<1, 1, 3, 2> ttqp;
        _Swizzle<1, 1, 3, 3> ttqq;
        _Swizzle<1, 2, 0, 0> tpss;
        _Swizzle<1, 2, 0, 1> tpst;
        _Swizzle<1, 2, 0, 2> tpsp;
        _Swizzle<1, 2, 0, 3> tpsq;
        _Swizzle<1, 2, 1, 0> tpts;
        _Swizzle<1, 2, 1, 1> tptt;
        _Swizzle<1, 2, 1, 2> tptp;
        _Swizzle<1, 2, 1, 3> tptq;
        _Swizzle<1, 2, 2, 0> tpps;
        _Swizzle<1, 2, 2, 1> tppt;
        _Swizzle<1, 2, 2, 2> tppp;
        _Swizzle<1, 2, 2, 3> tppq;
        _Swizzle<1, 2, 3, 0> tpqs;
        _Swizzle<1, 2, 3, 1> tpqt;
        _Swizzle<1, 2, 3, 2> tpqp;
        _Swizzle<1, 2, 3, 3> tpqq;
        _Swizzle<1, 3, 0, 0> tqss;
        _Swizzle<1, 3, 0, 1> tqst;
        _Swizzle<1, 3, 0, 2> tqsp;
        _Swizzle<1, 3, 0, 3> tqsq;
        _Swizzle<1, 3, 1, 0> tqts;
        _Swizzle<1, 3, 1, 1> tqtt;
        _Swizzle<1, 3, 1, 2> tqtp;
        _Swizzle<1, 3, 1, 3> tqtq;
        _Swizzle<1, 3, 2, 0> tqps;
        _Swizzle<1, 3, 2, 1> tqpt;
        _Swizzle<1, 3, 2, 2> tqpp;
        _Swizzle<1, 3, 2, 3> tqpq;
        _Swizzle<1, 3, 3, 0> tqqs;
        _Swizzle<1, 3, 3, 1> tqqt;
        _Swizzle<1, 3, 3, 2> tqqp;
        _Swizzle<1, 3, 3, 3> tqqq;
        _Swizzle<2, 0, 0, 0> psss;
        _Swizzle<2, 0, 0, 1> psst;
        _Swizzle<2, 0, 0, 2> pssp;
        _Swizzle<2, 0, 0, 3> pssq;
        _Swizzle<2, 0, 1, 0> psts;
        _Swizzle<2, 0, 1, 1> pstt;
        _Swizzle<2, 0, 1, 2> pstp;
        _Swizzle<2, 0, 1, 3> pstq;
        _Swizzle<2, 0, 2, 0> psps;
        _Swizzle<2, 0, 2, 1> pspt;
        _Swizzle<2, 0, 2, 2> pspp;
        _Swizzle<2, 0, 2, 3> pspq;
        _Swizzle<2, 0, 3, 0> psqs;
        _Swizzle<2, 0, 3, 1> psqt;
        _Swizzle<2, 0, 3, 2> psqp;
        _Swizzle<2, 0, 3, 3> psqq;
        _Swizzle<2, 1, 0, 0> ptss;
        _Swizzle<2, 1, 0, 1> ptst;
        _Swizzle<2, 1, 0, 2> ptsp;
        _Swizzle<2, 1, 0, 3> ptsq;
        _Swizzle<2, 1, 1, 0> ptts;
        _Swizzle<2, 1, 1, 1> pttt;
        _Swizzle<2, 1, 1, 2> pttp;
        _Swizzle<2, 1, 1, 3> pttq;
        _Swizzle<2, 1, 2, 0> ptps;
        _Swizzle<2, 1, 2, 1> ptpt;
        _Swizzle<2, 1, 2, 2> ptpp;
        _Swizzle<2, 1, 2, 3> ptpq;
        _Swizzle<2, 1, 3, 0> ptqs;
        _Swizzle<2, 1, 3, 1> ptqt;
        _Swizzle<2, 1, 3, 2> ptqp;
        _Swizzle<2, 1, 3, 3> ptqq;
        _Swizzle<2, 2, 0, 0> ppss;
        _Swizzle<2, 2, 0, 1> ppst;
        _Swizzle<2, 2, 0, 2> ppsp;
        _Swizzle<2, 2, 0, 3> ppsq;
        _Swizzle<2, 2, 1, 0> ppts;
        _Swizzle<2, 2, 1, 1> pptt;
        _Swizzle<2, 2, 1, 2> pptp;
        _Swizzle<2, 2, 1, 3> pptq;
        _Swizzle<2, 2, 2, 0> ppps;
        _Swizzle<2, 2, 2, 1> pppt;
        _Swizzle<2, 2, 2, 2> pppp;
        _Swizzle<2, 2, 2, 3> pppq;
        _Swizzle<2, 2, 3, 0> ppqs;
        _Swizzle<2, 2, 3, 1> ppqt;
        _Swizzle<2, 2, 3, 2> ppqp;
        _Swizzle<2, 2, 3, 3> ppqq;
        _Swizzle<2, 3, 0, 0> pqss;
        _Swizzle<2, 3, 0, 1> pqst;
        _Swizzle<2, 3, 0, 2> pqsp;
        _Swizzle<2, 3, 0, 3> pqsq;
        _Swizzle<2, 3, 1, 0> pqts;
        _Swizzle<2, 3, 1, 1> pqtt;
        _Swizzle<2, 3, 1, 2> pqtp;
        _Swizzle<2, 3, 1, 3> pqtq;
        _Swizzle<2, 3, 2, 0> pqps;
        _Swizzle<2, 3, 2, 1> pqpt;
        _Swizzle<2, 3, 2, 2> pqpp;
        _Swizzle<2, 3, 2, 3> pqpq;
        _Swizzle<2, 3, 3, 0> pqqs;
        _Swizzle<2, 3, 3, 1> pqqt;
        _Swizzle<2, 3, 3, 2> pqqp;
        _Swizzle<2, 3, 3, 3> pqqq;
        _Swizzle<3, 0, 0, 0> qsss;
        _Swizzle<3, 0, 0, 1> qsst;
        _Swizzle<3, 0, 0, 2> qssp;
        _Swizzle<3, 0, 0, 3> qssq;
        _Swizzle<3, 0, 1, 0> qsts;
        _Swizzle<3, 0, 1, 1> qstt;
        _Swizzle<3, 0, 1, 2> qstp;
        _Swizzle<3, 0, 1, 3> qstq;
        _Swizzle<3, 0, 2, 0> qsps;
        _Swizzle<3, 0, 2, 1> qspt;
        _Swizzle<3, 0, 2, 2> qspp;
        _Swizzle<3, 0, 2, 3> qspq;
        _Swizzle<3, 0, 3, 0> qsqs;
        _Swizzle<3, 0, 3, 1> qsqt;
        _Swizzle<3, 0, 3, 2> qsqp;
        _Swizzle<3, 0, 3, 3> qsqq;
        _Swizzle<3, 1, 0, 0> qtss;
        _Swizzle<3, 1, 0, 1> qtst;
        _Swizzle<3, 1, 0, 2> qtsp;
        _Swizzle<3, 1, 0, 3> qtsq;
        _Swizzle<3, 1, 1, 0> qtts;
        _Swizzle<3, 1, 1, 1> qttt;
        _Swizzle<3, 1, 1, 2> qttp;
        _Swizzle<3, 1, 1, 3> qttq;
        _Swizzle<3, 1, 2, 0> qtps;
        _Swizzle<3, 1, 2, 1> qtpt;
        _Swizzle<3, 1, 2, 2> qtpp;
        _Swizzle<3, 1, 2, 3> qtpq;
        _Swizzle<3, 1, 3, 0> qtqs;
        _Swizzle<3, 1, 3, 1> qtqt;
        _Swizzle<3, 1, 3, 2> qtqp;
        _Swizzle<3, 1, 3, 3> qtqq;
        _Swizzle<3, 2, 0, 0> qpss;
        _Swizzle<3, 2, 0, 1> qpst;
        _Swizzle<3, 2, 0, 2> qpsp;
        _Swizzle<3, 2, 0, 3> qpsq;
        _Swizzle<3, 2, 1, 0> qpts;
        _Swizzle<3, 2, 1, 1> qptt;
        _Swizzle<3, 2, 1, 2> qptp;
        _Swizzle<3, 2, 1, 3> qptq;
        _Swizzle<3, 2, 2, 0> qpps;
        _Swizzle<3, 2, 2, 1> qppt;
        _Swizzle<3, 2, 2, 2> qppp;
        _Swizzle<3, 2, 2, 3> qppq;
        _Swizzle<3, 2, 3, 0> qpqs;
        _Swizzle<3, 2, 3, 1> qpqt;
        _Swizzle<3, 2, 3, 2> qpqp;
        _Swizzle<3, 2, 3, 3> qpqq;
        _Swizzle<3, 3, 0, 0> qqss;
        _Swizzle<3, 3, 0, 1> qqst;
        _Swizzle<3, 3, 0, 2> qqsp;
        _Swizzle<3, 3, 0, 3> qqsq;
        _Swizzle<3, 3, 1, 0> qqts;
        _Swizzle<3, 3, 1, 1> qqtt;
        _Swizzle<3, 3, 1, 2> qqtp;
        _Swizzle<3, 3, 1, 3> qqtq;
        _Swizzle<3, 3, 2, 0> qqps;
        _Swizzle<3, 3, 2, 1> qqpt;
        _Swizzle<3, 3, 2, 2> qqpp;
        _Swizzle<3, 3, 2, 3> qqpq;
        _Swizzle<3, 3, 3, 0> qqqs;
        _Swizzle<3, 3, 3, 1> qqqt;
        _Swizzle<3, 3, 3, 2> qqqp;
        _Swizzle<3, 3, 3, 3> qqqq;
    };

    Vec4() : x(0), y(0), z(0), w(0)
    { }

    Vec4(T val) : x(val), y(val), z(val), w(val)
    { }

    Vec4(T x, T y, T z, T w) : x(x), y(y), z(z), w(w)
    { }

    inline double length() const
    {
        return sqrt(x * x + y * y + z * z + w * w);
    }

    inline float lengthf() const
    {
        return sqrtf(x * x + y * y + z * z + w * w);
    }

    inline void normalize()
    {
        double len = length();

        if (!len) {
            return;
        }

        *this /= len;
    }

    inline Vec4<T> normalized() const
    {
        double len = length();

        if (!len) {
            return Vec4<T>{};
        }

        return Vec4<T>{*this /= len};
    }

    inline Vec4<T> operator-() const
    {
        return Vec4<T>{-x, -y, -z, -w};
    }

    inline Vec4<T> operator+(const Vec4<T> &rhs) const
    {
        return Vec4<T>{x + rhs.x, y + rhs.y, z + rhs.z, w + rhs.w};
    }

    inline Vec4<T> operator-(const Vec4<T> &rhs) const
    {
        return Vec4<T>{x - rhs.x, y - rhs.y, z - rhs.z, w - rhs.w};
    }

    inline Vec4<T> operator*(const Vec4<T> &rhs) const
    {
        return Vec4<T>{x * rhs.x, y * rhs.y, z * rhs.z, w * rhs.w};
    }

    inline Vec4<T> operator/(const Vec4<T> & rhs) const
    {
        return Vec4<T>{x / rhs.x, y / rhs.y, z / rhs.z, w / rhs.w};
    }

    inline void operator+=(const Vec4<T> &rhs)
    {
        x += rhs.x;
        y += rhs.y;
        z += rhs.z;
        w += rhs.w;
    }

    inline void operator-=(const Vec4<T> &rhs)
    {
        x -= rhs.x;
        y -= rhs.y;
        z -= rhs.z;
        w -= rhs.w;
    }

    inline void operator*=(const Vec4<T> &rhs)
    {
        x *= rhs.x;
        y *= rhs.y;
        z *= rhs.z;
        w *= rhs.w;
    }

    inline void operator/=(const Vec4<T> &rhs)
    {
        x /= rhs.x;
        y /= rhs.y;
        z /= rhs.z;
        w /= rhs.w;
    }

    inline Vec4<T> operator+(T rhs) const
    {
        return Vec4<T>{x + rhs, y + rhs, z + rhs, w + rhs};
    }

    inline Vec4<T> operator-(T rhs) const
    {
        return Vec4<T>{x - rhs, y - rhs, z - rhs, w - rhs};
    }

    inline Vec4<T> operator*(T rhs) const
    {
        return Vec4<T>{x * rhs, y * rhs, z * rhs, w * rhs};
    }

    inline Vec4<T> operator/(T rhs) const
    {
        return Vec4<T>{x / rhs, y / rhs, z / rhs, w / rhs};
    }

    inline void operator+=(T rhs)
    {
        x += rhs;
        y += rhs;
        z += rhs;
        w += rhs;
    }

    inline void operator-=(T rhs)
    {
        x -= rhs;
        y -= rhs;
        z -= rhs;
        w -= rhs;
    }

    inline void operator*=(T rhs)
    {
        x *= rhs;
        y *= rhs;
        z *= rhs;
        w *= rhs;
    }

    inline void operator/=(T rhs)
    {
        x /= rhs;
        y /= rhs;
        z /= rhs;
        w /= rhs;
    }
};

using Vec4f = Vec4<float>;
using Vec4d = Vec4<double>;
using Vec4s = Vec4<short>;
using Vec4us = Vec4<unsigned short>;
using Vec4c = Vec4<char>;
using Vec4uc = Vec4<unsigned char>;
using Vec4i = Vec4<int>;
using Vec4ui = Vec4<unsigned int>;
using Vec4l = Vec4<long>;
using Vec4ul = Vec4<unsigned long>;


template<typename T>
inline double dot(const Vec2<T> &v1, const Vec2<T> &v2)
{
    return v1.x * v2.x + v1.y * v2.y;
}

template<typename T>
inline float dotf(const Vec2<T> &v1, const Vec2<T> &v2)
{
    return v1.x * v2.x + v1.y * v2.y;
}

template<typename T>
inline double dot(const Vec3<T> &v1, const Vec3<T> &v2)
{
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

template<typename T>
inline float dotf(const Vec3<T> &v1, const Vec3<T> &v2)
{
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

template<typename T>
inline double dot(const Vec4<T> &v1, const Vec4<T> &v2)
{
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z + v1.w * v2.w;
}

template<typename T>
inline float dotf(const Vec4<T> &v1, const Vec4<T> &v2)
{
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z + v1.w * v2.w;
}

template<typename T>
inline Vec3<T> cross(const Vec3<T> &v1, const Vec3<T> &v2)
{
    return Vec3<T>{v1.y * v2.z - v1.z * v2.y,
                   v1.z * v2.x - v1.x * v2.z,
                   v1.x * v2.y - v1.y * v2.x};
}

template<typename T>
inline Vec4<T> cross(const Vec4<T> &v1, const Vec4<T> &v2, const Vec4<T> &v3)
{
    //TODO
}

template<typename T>
inline Vec2<T> reflect(const Vec2<T> v, const Vec2<T> normal)
{
    return v - normal * 2 * dot(v, normal);
}

template<typename T>
inline Vec3<T> reflect(const Vec3<T> v, const Vec3<T> normal)
{
    return v - normal * 2 * dot(v, normal);
}

}

#endif //HELMATH_VECTOR_H
