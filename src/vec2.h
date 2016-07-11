#ifndef HELMATH_VEC2_H
#define HELMATH_VEC2_H

#include <cmath>

namespace hm {

template<typename T>
class Vec2 {
public:
    union {
        // x - value alias for positions.
        T x;

        // s - value alias for textures.
        T s;
    };

    union {
        // y - value alias for positions.
        T y;

        // t - value alias for positions.
        T t;
    };

    Vec2() : x(0), y(0)
    { }

    Vec2(T x, T y) : x(x), y(y)
    { }

};

using Vec2f = Vec2<float>;
using Vec2d = Vec2<double>;
using Vec2i = Vec2<int>;
using Vec2l = Vec2<long>;
using Vec2ul = Vec2<unsigned long>;

}

#endif //HELMATH_VEC2_H
