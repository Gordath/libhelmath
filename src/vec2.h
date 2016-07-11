#ifndef HELMATH_VEC2_H
#define HELMATH_VEC2_H

namespace hm {

template<typename T>
class Vec2 {
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

        // t value alias for positions.
        T t;
    };

    Vec2() : x(0), y(0)
    { }

    Vec2(T x, T y) : x(x), y(y)
    { }

};

}

#endif //HELMATH_VEC2_H
