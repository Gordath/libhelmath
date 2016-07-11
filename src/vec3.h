#ifndef HELMATH_VEC3_H
#define HELMATH_VEC3_H

#include "vec2.h"
#include <cmath>

namespace hm {

template<typename T>
class Vec3 {
public:
    union {
        // x value alias for positions.
        T x;

        // r value alias for colors.
        T r;

        // s value alias for textures.
        T s;
    };

    union {
        // x value alias for positions.
        T y;

        // g value alias for colors.
        T g;

        // t value alias for textures.
        T t;
    };

    union {
        // z value alias for positions.
        T z;

        // b value alias for colors.
        T b;

        // u value alias for textures.
        T u;
    };

    Vec3() : x(0), y(0), z(0)
    { }

    Vec3(T x, T y, T z) : x(x), y(y), z(z)
    { }

    std::double_t length() const
    {
        return std::sqrt(x * x + y * y + z * z);
    }

    std::float_t lengthf() const
    {
        return std::sqrtf(x * x + y * y + z * z);
    }

    void normalize()
    {
        std::double_t len = length();

        if(!len) {
            return;
        }

        x /= len;
        y /= len;
        z /= len;
    }

    Vec3<T> normalized() const
    {
        std::double_t len = length();

        if(!len) {
            return Vec3<T>{};
        }

        return Vec3<T>(x / len, y / len, z / len);
    }

    // xyz alias----------------------------------------------------------------
    inline Vec2<T> xx() const
    {
        return Vec2<T>{x, x};
    }

    inline Vec2<T> xy() const
    {
        return Vec2<T>{x, y};
    }

    inline Vec2<T> xz() const
    {
        return Vec2<T>{x, y};
    }

    inline Vec2<T> yx() const
    {
        return Vec2<T>{y, x};
    }

    inline Vec2<T> yy() const
    {
        return Vec2<T>{y, y};
    }

    inline Vec2<T> yz() const
    {
        return Vec2<T>{y, z};
    }

    inline Vec2<T> zx() const
    {
        return Vec2<T>{z, x};
    }

    inline Vec2<T> zy() const
    {
        return Vec2<T>{z, y};
    }

    inline Vec2<T> zz() const
    {
        return Vec2<T>{z, z};
    }

    inline Vec3<T> xxx() const
    {
        return Vec3<T>{x, x, x};
    }

    inline Vec3<T> xxy() const
    {
        return Vec3<T>{x, x, y};
    }

    inline Vec3<T> xxz() const
    {
        return Vec3<T>{x, x, z};
    }

    inline Vec3<T> xyx() const
    {
        return Vec3<T>{x, y, x};
    }

    inline Vec3<T> xyy() const
    {
        return Vec3<T>{x, y, y};
    }

    inline Vec3<T> xyz() const
    {
        return Vec3<T>{x, y, z};
    }

    inline Vec3<T> xzx() const
    {
        return Vec3<T>{x, z, x};
    }

    inline Vec3<T> xzy() const
    {
        return Vec3<T>{x, z, y};
    }

    inline Vec3<T> xzz() const
    {
        return Vec3<T>{x, z, z};
    }

    inline Vec3<T> yxx() const
    {
        return Vec3<T>{y, x, x};
    }

    inline Vec3<T> yxy() const
    {
        return Vec3<T>{y, x, y};
    }

    inline Vec3<T> yxz() const
    {
        return Vec3<T>{y, x, z};
    }

    inline Vec3<T> yyx() const
    {
        return Vec3<T>{y, y, x};
    }

    inline Vec3<T> yyy() const
    {
        return Vec3<T>{y, y, y};
    }

    inline Vec3<T> yyz() const
    {
        return Vec3<T>{y, y, z};
    }

    inline Vec3<T> yzx() const
    {
        return Vec3<T>{y, z, x};
    }

    inline Vec3<T> yzy() const
    {
        return Vec3<T>{y, z, y};
    }

    inline Vec3<T> yzz() const
    {
        return Vec3<T>{y, z, z};
    }

    inline Vec3<T> zxx() const
    {
        return Vec3<T>{z, x, x};
    }

    inline Vec3<T> zxy() const
    {
        return Vec3<T>{z, x, y};
    }

    inline Vec3<T> zxz() const
    {
        return Vec3<T>{z, x, z};
    }

    inline Vec3<T> zyx() const
    {
        return Vec3<T>{z, y, x};
    }

    inline Vec3<T> zyy() const
    {
        return Vec3<T>{z, y, y};
    }

    inline Vec3<T> zyz() const
    {
        return Vec3<T>{z, y, z};
    }

    inline Vec3<T> zzx() const
    {
        return Vec3<T>{z, z, x};
    }

    inline Vec3<T> zzy() const
    {
        return Vec3<T>{z, z, y};
    }

    inline Vec3<T> zzz() const
    {
        return Vec3<T>{z, z, z};
    }
    //--------------------------------------------------------------------------

    // rgb alias ---------------------------------------------------------------------
    inline Vec2<T> rr() const
    {
        return Vec2<T>{r, r};
    }

    inline Vec2<T> rg() const
    {
        return Vec2<T>{r, g};
    }

    inline Vec2<T> rb() const
    {
        return Vec2<T>{r, b};
    }

    inline Vec2<T> gr() const
    {
        return Vec2<T>{g, r};
    }

    inline Vec2<T> gg() const
    {
        return Vec2<T>{g, g};
    }

    inline Vec2<T> gb() const
    {
        return Vec2<T>{g, b};
    }

    inline Vec2<T> br() const
    {
        return Vec2<T>{b, r};
    }

    inline Vec2<T> bg() const
    {
        return Vec2<T>{b, g};
    }

    inline Vec2<T> bb() const
    {
        return Vec2<T>{b, b};
    }

    inline Vec3<T> rrr() const
    {
        return Vec3<T>{r, r, r};
    }

    inline Vec3<T> rrg() const
    {
        return Vec3<T>{r, r, g};
    }

    inline Vec3<T> rrb() const
    {
        return Vec3<T>{r, r, b};
    }

    inline Vec3<T> rgr() const
    {
        return Vec3<T>{r, g, r};
    }

    inline Vec3<T> rgg() const
    {
        return Vec3<T>{r, g, g};
    }

    inline Vec3<T> rgb() const
    {
        return Vec3<T>{r, g, b};
    }

    inline Vec3<T> rbr() const
    {
        return Vec3<T>{r, b, r};
    }

    inline Vec3<T> rbg() const
    {
        return Vec3<T>{r, b, g};
    }

    inline Vec3<T> rbb() const
    {
        return Vec3<T>{r, b, b};
    }

    inline Vec3<T> grr() const
    {
        return Vec3<T>{g, r, r};
    }

    inline Vec3<T> grg() const
    {
        return Vec3<T>{g, r, g};
    }

    inline Vec3<T> grb() const
    {
        return Vec3<T>{g, r, b};
    }

    inline Vec3<T> ggr() const
    {
        return Vec3<T>{g, g, r};
    }

    inline Vec3<T> ggg() const
    {
        return Vec3<T>{g, g, g};
    }

    inline Vec3<T> ggb() const
    {
        return Vec3<T>{g, g, b};
    }

    inline Vec3<T> gbr() const
    {
        return Vec3<T>{g, b, r};
    }

    inline Vec3<T> gbg() const
    {
        return Vec3<T>{g, b, g};
    }

    inline Vec3<T> gbb() const
    {
        return Vec3<T>{g, b, b};
    }

    inline Vec3<T> brr() const
    {
        return Vec3<T>{b, r, r};
    }

    inline Vec3<T> brg() const
    {
        return Vec3<T>{b, r, g};
    }

    inline Vec3<T> brb() const
    {
        return Vec3<T>{b, r, b};
    }

    inline Vec3<T> bgr() const
    {
        return Vec3<T>{b, g, r};
    }

    inline Vec3<T> bgg() const
    {
        return Vec3<T>{b, g, g};
    }

    inline Vec3<T> bgb() const
    {
        return Vec3<T>{b, g, b};
    }

    inline Vec3<T> bbr() const
    {
        return Vec3<T>{b, b, r};
    }

    inline Vec3<T> bbg() const
    {
        return Vec3<T>{b, b ,g};
    }

    inline Vec3<T> bbb() const
    {
        return Vec3<T>{b, b, b};
    }
    //--------------------------------------------------------------------------
};

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

using Vec3f = Vec3<float>;
using Vec3d = Vec3<double>;
using Vec3i = Vec3<int>;
using Vec3l = Vec3<long>;
using Vec3ul = Vec3<unsigned long>;

}

#endif //HELMATH_VEC3_H
