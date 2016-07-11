#ifndef HELMATH_VEC4_H
#define HELMATH_VEC4_H

#include "vec3.h"

namespace hm {

template<typename T>
class Vec4 {
public:
    union {
        // x value alias for positions.
        T x;

        // s value alias for textures.
        T s;
    };

    union {
        // y value alias for positions.
        T y;

        // t value alias for textures.
        T t;
    };

    union {
        // z value alias for positions.
        T z;

        // u value alias for textures.
        T u;
    };

    union {
        // w value alias for positions.
        T w;

        // something alias for textures.
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

}

#endif //HELMATH_VEC4_H
