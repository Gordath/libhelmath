#ifndef HELMATH_VECTOR_H
#define HELMATH_VECTOR_H

#include <cmath>

namespace hm {

template<typename T>
class Vec2 {
private:
    template<int A, int B>
    class swizzle {
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
    class swizzle<A, A> {
    private:
        T v[2];

    public:
        operator Vec2()
        {
            return Vec2<T>{v[A]};
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
    union {
        struct {
            T x;
            T y;
        };

        struct {
            T s;
            T t;
        };

        swizzle<0, 0> xx;
        swizzle<0, 1> xy;
        swizzle<1, 0> yx;
        swizzle<1, 1> yy;

        T v[2];
    };

    Vec2() : x(0), y(0)
    { }

    Vec2(T val) : x(val), y(val)
    { }

    Vec2(T arr[2]) : x(arr[0]), y(arr[1])
    { }

    Vec2(T x, T y) : x(x), y(y)
    { }
};

template<typename T>
inline Vec2<T> operator+(const Vec2<T> &lhs, const Vec2<T> &rhs)
{
    return Vec2<T>{lhs.x + rhs.x, lhs.y + rhs.y};
}

using Vec2f = Vec2<float>;
using Vec2d = Vec2<double>;
using Vec2i = Vec2<int>;
using Vec2l = Vec2<long>;
using Vec2ul = Vec2<unsigned long>;


template<typename T>
class Vec3 {
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
    };

    Vec3() : x(0), y(0), z(0)
    { }

    Vec3(T x, T y, T z) : x(x), y(y), z(z)
    { }

    inline std::double_t length() const
    {
        return std::sqrt(x * x + y * y + z * z);
    }

    inline std::float_t lengthf() const
    {
        return std::sqrtf(x * x + y * y + z * z);
    }

    inline void normalize()
    {
        std::double_t len = length();

        if (!len) {
            return;
        }

        x /= len;
        y /= len;
        z /= len;
    }

    inline Vec3<T> normalized() const
    {
        std::double_t len = length();

        if (!len) {
            return Vec3<T>{};
        }

        return Vec3<T>(x / len, y / len, z / len);
    }
};

using Vec3f = Vec3<float>;
using Vec3d = Vec3<double>;
using Vec3i = Vec3<int>;
using Vec3l = Vec3<long>;
using Vec3ul = Vec3<unsigned long>;


template<typename T>
class Vec4 {
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
    };

    Vec4() : x(0), y(0), z(0), w(0)
    { }

    Vec4(T x, T y, T z, T w) : x(x), y(y), z(z), w(w)
    { }

    inline std::double_t length() const
    {
        return sqrt(x * x + y * y + z * z + w * w);
    }

    inline std::float_t lengthf() const
    {
        return sqrtf(x * x + y * y + z * z + w * w);
    }

    inline void normalize()
    {
        std::double_t len = length();

        if (!len) {
            return;
        }

        x /= len;
        y /= len;
        z /= len;
        w /= len;
    }

    inline Vec4<T> normalized() const
    {
        std::double_t len = length();

        if (!len) {
            return Vec4<T>{};
        }

        return Vec4<T>(x / len, y / len, z / len, w / len);
    }
};

using Vec4f = Vec4<float>;
using Vec4d = Vec4<double>;
using Vec4i = Vec4<int>;
using Vec4l = Vec4<long>;
using Vec4ul = Vec4<unsigned long>;

// Vec2 Operators -------------------------------------------------------------
template<typename T>
inline Vec2<T> operator-(const Vec2<T> &rhs)
{
    return Vec2<T>{-rhs.x, -rhs.y};
}

template<typename T>
inline Vec2<T> operator*(const Vec2<T> &lhs, T rhs)
{
    return Vec2<T>{lhs.x * rhs, lhs.y * rhs};
}

template<typename T>
inline Vec2<T> operator*(T lhs, const Vec2<T> &rhs)
{
    return Vec2<T>{rhs.x * lhs, rhs.y * lhs};
}
// ----------------------------------------------------------------------------

// Vec3 Operators -------------------------------------------------------------
template<typename T>
inline Vec3<T> operator-(const Vec3<T> &rhs)
{
    return Vec3<T>{-rhs.x, -rhs.y, -rhs.z};
}

template<typename T>
inline Vec3<T> operator*(const Vec3<T> &lhs, T rhs)
{
    return Vec3<T>{lhs.x * rhs, lhs.y * rhs, lhs.z * rhs};
}

template<typename T>
inline Vec3<T> operator*(T lhs, const Vec3<T> &rhs)
{
    return Vec3<T>{rhs.x * lhs, rhs.y * lhs, rhs.z * lhs};
}

template<typename T>
inline Vec3<T> operator/(const Vec3<T> &lhs, T rhs)
{
    return Vec3<T>{lhs.x / rhs, lhs.y / rhs, lhs.z / rhs};
}

template<typename T>
inline Vec3<T> operator+(const Vec3<T> &lhs, T rhs)
{
    return Vec3<T>{lhs.x + rhs, lhs.y + rhs, lhs.z + rhs};
}

template<typename T>
inline Vec3<T> operator+(T lhs, const Vec3<T> &rhs)
{
    return Vec3<T>{rhs.x + lhs, rhs.y + lhs, rhs.z + lhs};
}

template<typename T>
inline Vec3<T> operator-(const Vec3<T> &lhs, T rhs)
{
    return Vec3<T>{lhs.x - rhs, lhs.y - rhs, lhs.z - rhs};
}
// ----------------------------------------------------------------------------

}

#endif //HELMATH_VECTOR_H
