#ifndef HELMATH_VEC4_H
#define HELMATH_VEC4_H

#include "vec3.h"

namespace hm {

template<typename T>
class Vec4 {
public:
    union {
        // x - value alias for positions.
        T x;

        // r - value alias for colors.
        T r;

        // s - value alias for textures.
        T s;
    };

    union {
        // y - value alias for positions.
        T y;

        // g - value alias for colors.
        T g;

        // t - value alias for textures.
        T t;
    };

    union {
        // z - value alias for positions.
        T z;

        // b - value alias for colors.
        T b;

        // u - value alias for textures.
        T p;
    };

    union {
        // w - value alias for positions.
        T w;

        // a - value alias for colors.
        T a;

        // q - value alias for textures.
        T q;
    };

    Vec4() : x(0), y(0), z(0), w(0)
    { }

    Vec4(T x, T y, T z, T w) : x(x), y(y), z(z), w(w)
    { }

    std::double_t length() const
    {
        return sqrt(x * x + y * y + z * z + w * w);
    }

    std::float_t lengthf() const
    {
        return sqrtf(x * x + y * y + z * z + w * w);
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
        w /= len;
    }

    Vec4<T> normalized() const
    {
        std::double_t len = length();

        if(!len) {
            return Vec4<T>{};
        }

        return Vec4<T>(x / len, y / len, z / len, w / len);
    }

    Vec2<T> xx() const
    {
        return Vec2<T>{x, x};
    }

    //TODO: Finish the swizzle functions
};

using Vec4f = Vec4<float>;
using Vec4d = Vec4<double>;
using Vec4i = Vec4<int>;
using Vec4l = Vec4<long>;
using Vec4ul = Vec4<unsigned long>;

}

#endif //HELMATH_VEC4_H
