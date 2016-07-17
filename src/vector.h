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

        T v[2];

        swizzle<0, 0> xx;
        swizzle<0, 1> xy;
        swizzle<1, 0> yx;
        swizzle<1, 1> yy;

        swizzle<0, 0> ss;
        swizzle<0, 1> st;
        swizzle<1, 0> ts;
        swizzle<1, 1> tt;
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
private:
    template<int A, int B, int C>
    class swizzle {
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

        inline operator Vec3()
        {
            return Vec3<T>{v[A], v[B], v[C]};
        }

        inline Vec3<T> operator+(const Vec3<T> &rhs)
        {
            return Vec3<T>{v[A] + rhs.x, v[B] + rhs.y, v[C] + rhs.z};
        }

        inline Vec3<T> operator-(const Vec3<T> &rhs)
        {
            return Vec3<T>{v[A] - rhs.x, v[B] - rhs.y, v[C] - rhs.z};
        }

        inline Vec3<T> operator*(const Vec3<T> &rhs)
        {
            return Vec3<T>{v[A] * rhs.x, v[B] * rhs.y, v[C] * rhs.z};
        }

        inline Vec3<T> operator/(const Vec3<T> &rhs)
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

            return *(Vec3<T> *) this;
        }

        inline Vec3<T> operator+(T rhs)
        {
            return Vec3<T>{v[A] + rhs, v[B] + rhs, v[C] + rhs};
        }

        inline Vec3<T> operator-(T rhs)
        {
            return Vec3<T>{v[A] - rhs, v[B] - rhs, v[C] - rhs};
        }

        inline Vec3<T> operator*(T rhs)
        {
            return Vec3<T>{v[A] * rhs, v[B] * rhs, v[C] * rhs};
        }

        inline Vec3<T> operator/(T rhs)
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
    class swizzle<A, A, A> {
    private:
        T v[3];

    public:
        operator Vec3()
        {
            return Vec3<T>{v[A]};
        }

        inline Vec3<T> operator+(T rhs)
        {
            return Vec3<T>{v[A] + rhs, v[A] + rhs, v[A] + rhs};
        }

        inline Vec3<T> operator-(T rhs)
        {
            return Vec3<T>{v[A] - rhs, v[A] - rhs, v[A] - rhs};
        }

        inline Vec3<T> operator*(T rhs)
        {
            return Vec3<T>{v[A] * rhs, v[A] * rhs, v[A] * rhs};
        }

        inline Vec3<T> operator/(T rhs)
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

        swizzle<0, 0, 0> xxx;
        swizzle<0, 0, 1> xxy;
        swizzle<0, 0, 2> xxz;
        swizzle<0, 1, 0> xyx;
        swizzle<0, 1, 1> xyy;
        swizzle<0, 1, 2> xyz;
        swizzle<0, 2, 0> xzx;
        swizzle<0, 2, 1> xzy;
        swizzle<0, 2, 2> xzz;
        swizzle<1, 0, 0> yxx;
        swizzle<1, 0, 1> yxy;
        swizzle<1, 0, 2> yxz;
        swizzle<1, 1, 0> yyx;
        swizzle<1, 1, 1> yyy;
        swizzle<1, 1, 2> yyz;
        swizzle<1, 2, 0> yzx;
        swizzle<1, 2, 1> yzy;
        swizzle<1, 2, 2> yzz;
        swizzle<2, 0, 0> zxx;
        swizzle<2, 0, 1> zxy;
        swizzle<2, 0, 2> zxz;
        swizzle<2, 1, 0> zyx;
        swizzle<2, 1, 1> zyy;
        swizzle<2, 1, 2> zyz;
        swizzle<2, 2, 0> zzx;
        swizzle<2, 2, 1> zzy;
        swizzle<2, 2, 2> zzz;

        swizzle<0, 0, 0> rrr;
        swizzle<0, 0, 1> rrg;
        swizzle<0, 0, 2> rrb;
        swizzle<0, 1, 0> rgr;
        swizzle<0, 1, 1> rgg;
        swizzle<0, 1, 2> rgb;
        swizzle<0, 2, 0> rbr;
        swizzle<0, 2, 1> rbg;
        swizzle<0, 2, 2> rbb;
        swizzle<1, 0, 0> grr;
        swizzle<1, 0, 1> grg;
        swizzle<1, 0, 2> grb;
        swizzle<1, 1, 0> ggr;
        swizzle<1, 1, 1> ggg;
        swizzle<1, 1, 2> ggb;
        swizzle<1, 2, 0> gbr;
        swizzle<1, 2, 1> gbg;
        swizzle<1, 2, 2> gbb;
        swizzle<2, 0, 0> brr;
        swizzle<2, 0, 1> brg;
        swizzle<2, 0, 2> brb;
        swizzle<2, 1, 0> bgr;
        swizzle<2, 1, 1> bgg;
        swizzle<2, 1, 2> bgb;
        swizzle<2, 2, 0> bbr;
        swizzle<2, 2, 1> bbg;
        swizzle<2, 2, 2> bbb;

        swizzle<0, 0, 0> sss;
        swizzle<0, 0, 1> sst;
        swizzle<0, 0, 2> ssp;
        swizzle<0, 1, 0> sts;
        swizzle<0, 1, 1> stt;
        swizzle<0, 1, 2> stp;
        swizzle<0, 2, 0> sps;
        swizzle<0, 2, 1> spt;
        swizzle<0, 2, 2> spp;
        swizzle<1, 0, 0> tss;
        swizzle<1, 0, 1> tst;
        swizzle<1, 0, 2> tsp;
        swizzle<1, 1, 0> tts;
        swizzle<1, 1, 1> ttt;
        swizzle<1, 1, 2> ttp;
        swizzle<1, 2, 0> tps;
        swizzle<1, 2, 1> tpt;
        swizzle<1, 2, 2> tpp;
        swizzle<2, 0, 0> pss;
        swizzle<2, 0, 1> pst;
        swizzle<2, 0, 2> psp;
        swizzle<2, 1, 0> pts;
        swizzle<2, 1, 1> ptt;
        swizzle<2, 1, 2> ptp;
        swizzle<2, 2, 0> pps;
        swizzle<2, 2, 1> ppt;
        swizzle<2, 2, 2> ppp;
    };

    Vec3() : x(0), y(0), z(0)
    { }

    Vec3(T val) : x(val), y(val), z(val)
    { }

    Vec3(T x, T y, T z) : x(x), y(y), z(z)
    { }

    inline std::double_t length() const
    {
        return std::sqrt(x * x + y * y + z * z);
    }

    inline std::float_t lengthf() const
    {
        return sqrtf(x * x + y * y + z * z);
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
private:
    template<int A, int B, int C, int D>
    class swizzle {
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

        inline operator Vec4()
        {
            return Vec4<T>{v[A], v[B], v[C], v[D]};
        }

        inline Vec4<T> operator+(const Vec4<T> &rhs)
        {
            return Vec4<T>{v[A] + rhs.x, v[B] + rhs.y, v[C] + rhs.z, v[D] + rhs.w};
        }

        inline Vec4<T> operator-(const Vec4<T> &rhs)
        {
            return Vec4<T>{v[A] - rhs.x, v[B] - rhs.y, v[C] - rhs.z, v[D] - rhs.w};
        }

        inline Vec4<T> operator*(const Vec4<T> &rhs)
        {
            return Vec4<T>{v[A] * rhs.x, v[B] * rhs.y, v[C] * rhs.z, v[D] * rhs.w};
        }

        inline Vec4<T> operator/(const Vec4<T> &rhs)
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

        inline Vec4<T> operator+(T rhs)
        {
            return Vec4<T>{v[A] + rhs, v[B] + rhs, v[C] + rhs, v[D] + rhs};
        }

        inline Vec4<T> operator-(T rhs)
        {
            return Vec4<T>{v[A] - rhs, v[B] - rhs, v[C] - rhs, v[D] - rhs};
        }

        inline Vec4<T> operator*(T rhs)
        {
            return Vec4<T>{v[A] * rhs, v[B] * rhs, v[C] * rhs, v[D] * rhs};
        }

        inline Vec4<T> operator/(T rhs)
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
    class swizzle<A, A, A, A> {
    private:
        T v[4];

    public:
        operator Vec4()
        {
            return Vec4<T>{v[A]};
        }

        inline Vec4<T> operator+(T rhs)
        {
            return Vec4<T>{v[A] + rhs, v[A] + rhs, v[A] + rhs, v[A] + rhs};
        }

        inline Vec4<T> operator-(T rhs)
        {
            return Vec4<T>{v[A] - rhs, v[A] - rhs, v[A] - rhs, v[A] - rhs};
        }

        inline Vec4<T> operator*(T rhs)
        {
            return Vec4<T>{v[A] * rhs, v[A] * rhs, v[A] * rhs, v[A] * rhs};
        }

        inline Vec4<T> operator/(T rhs)
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

        swizzle<0, 0, 0, 0> xxxx;
        swizzle<0, 0, 0, 1> xxxy;
        swizzle<0, 0, 0, 2> xxxz;
        swizzle<0, 0, 0, 3> xxxw;
        swizzle<0, 0, 1, 0> xxyx;
        swizzle<0, 0, 1, 1> xxyy;
        swizzle<0, 0, 1, 2> xxyz;
        swizzle<0, 0, 1, 3> xxyw;
        swizzle<0, 0, 2, 0> xxzx;
        swizzle<0, 0, 2, 1> xxzy;
        swizzle<0, 0, 2, 2> xxzz;
        swizzle<0, 0, 2, 3> xxzw;
        swizzle<0, 0, 3, 0> xxwx;
        swizzle<0, 0, 3, 1> xxwy;
        swizzle<0, 0, 3, 2> xxwz;
        swizzle<0, 0, 3, 3> xxww;
        swizzle<0, 1, 0, 0> xyxx;
        swizzle<0, 1, 0, 1> xyxy;
        swizzle<0, 1, 0, 2> xyxz;
        swizzle<0, 1, 0, 3> xyxw;
        swizzle<0, 1, 1, 0> xyyx;
        swizzle<0, 1, 1, 1> xyyy;
        swizzle<0, 1, 1, 2> xyyz;
        swizzle<0, 1, 1, 3> xyyw;
        swizzle<0, 1, 2, 0> xyzx;
        swizzle<0, 1, 2, 1> xyzy;
        swizzle<0, 1, 2, 2> xyzz;
        swizzle<0, 1, 2, 3> xyzw;
        swizzle<0, 1, 3, 0> xywx;
        swizzle<0, 1, 3, 1> xywy;
        swizzle<0, 1, 3, 2> xywz;
        swizzle<0, 1, 3, 3> xyww;
        swizzle<0, 2, 0, 0> xzxx;
        swizzle<0, 2, 0, 1> xzxy;
        swizzle<0, 2, 0, 2> xzxz;
        swizzle<0, 2, 0, 3> xzxw;
        swizzle<0, 2, 1, 0> xzyx;
        swizzle<0, 2, 1, 1> xzyy;
        swizzle<0, 2, 1, 2> xzyz;
        swizzle<0, 2, 1, 3> xzyw;
        swizzle<0, 2, 2, 0> xzzx;
        swizzle<0, 2, 2, 1> xzzy;
        swizzle<0, 2, 2, 2> xzzz;
        swizzle<0, 2, 2, 3> xzzw;
        swizzle<0, 2, 3, 0> xzwx;
        swizzle<0, 2, 3, 1> xzwy;
        swizzle<0, 2, 3, 2> xzwz;
        swizzle<0, 2, 3, 3> xzww;
        swizzle<0, 3, 0, 0> xwxx;
        swizzle<0, 3, 0, 1> xwxy;
        swizzle<0, 3, 0, 2> xwxz;
        swizzle<0, 3, 0, 3> xwxw;
        swizzle<0, 3, 1, 0> xwyx;
        swizzle<0, 3, 1, 1> xwyy;
        swizzle<0, 3, 1, 2> xwyz;
        swizzle<0, 3, 1, 3> xwyw;
        swizzle<0, 3, 2, 0> xwzx;
        swizzle<0, 3, 2, 1> xwzy;
        swizzle<0, 3, 2, 2> xwzz;
        swizzle<0, 3, 2, 3> xwzw;
        swizzle<0, 3, 3, 0> xwwx;
        swizzle<0, 3, 3, 1> xwwy;
        swizzle<0, 3, 3, 2> xwwz;
        swizzle<0, 3, 3, 3> xwww;
        swizzle<1, 0, 0, 0> yxxx;
        swizzle<1, 0, 0, 1> yxxy;
        swizzle<1, 0, 0, 2> yxxz;
        swizzle<1, 0, 0, 3> yxxw;
        swizzle<1, 0, 1, 0> yxyx;
        swizzle<1, 0, 1, 1> yxyy;
        swizzle<1, 0, 1, 2> yxyz;
        swizzle<1, 0, 1, 3> yxyw;
        swizzle<1, 0, 2, 0> yxzx;
        swizzle<1, 0, 2, 1> yxzy;
        swizzle<1, 0, 2, 2> yxzz;
        swizzle<1, 0, 2, 3> yxzw;
        swizzle<1, 0, 3, 0> yxwx;
        swizzle<1, 0, 3, 1> yxwy;
        swizzle<1, 0, 3, 2> yxwz;
        swizzle<1, 0, 3, 3> yxww;
        swizzle<1, 1, 0, 0> yyxx;
        swizzle<1, 1, 0, 1> yyxy;
        swizzle<1, 1, 0, 2> yyxz;
        swizzle<1, 1, 0, 3> yyxw;
        swizzle<1, 1, 1, 0> yyyx;
        swizzle<1, 1, 1, 1> yyyy;
        swizzle<1, 1, 1, 2> yyyz;
        swizzle<1, 1, 1, 3> yyyw;
        swizzle<1, 1, 2, 0> yyzx;
        swizzle<1, 1, 2, 1> yyzy;
        swizzle<1, 1, 2, 2> yyzz;
        swizzle<1, 1, 2, 3> yyzw;
        swizzle<1, 1, 3, 0> yywx;
        swizzle<1, 1, 3, 1> yywy;
        swizzle<1, 1, 3, 2> yywz;
        swizzle<1, 1, 3, 3> yyww;
        swizzle<1, 2, 0, 0> yzxx;
        swizzle<1, 2, 0, 1> yzxy;
        swizzle<1, 2, 0, 2> yzxz;
        swizzle<1, 2, 0, 3> yzxw;
        swizzle<1, 2, 1, 0> yzyx;
        swizzle<1, 2, 1, 1> yzyy;
        swizzle<1, 2, 1, 2> yzyz;
        swizzle<1, 2, 1, 3> yzyw;
        swizzle<1, 2, 2, 0> yzzx;
        swizzle<1, 2, 2, 1> yzzy;
        swizzle<1, 2, 2, 2> yzzz;
        swizzle<1, 2, 2, 3> yzzw;
        swizzle<1, 2, 3, 0> yzwx;
        swizzle<1, 2, 3, 1> yzwy;
        swizzle<1, 2, 3, 2> yzwz;
        swizzle<1, 2, 3, 3> yzww;
        swizzle<1, 3, 0, 0> ywxx;
        swizzle<1, 3, 0, 1> ywxy;
        swizzle<1, 3, 0, 2> ywxz;
        swizzle<1, 3, 0, 3> ywxw;
        swizzle<1, 3, 1, 0> ywyx;
        swizzle<1, 3, 1, 1> ywyy;
        swizzle<1, 3, 1, 2> ywyz;
        swizzle<1, 3, 1, 3> ywyw;
        swizzle<1, 3, 2, 0> ywzx;
        swizzle<1, 3, 2, 1> ywzy;
        swizzle<1, 3, 2, 2> ywzz;
        swizzle<1, 3, 2, 3> ywzw;
        swizzle<1, 3, 3, 0> ywwx;
        swizzle<1, 3, 3, 1> ywwy;
        swizzle<1, 3, 3, 2> ywwz;
        swizzle<1, 3, 3, 3> ywww;
        swizzle<2, 0, 0, 0> zxxx;
        swizzle<2, 0, 0, 1> zxxy;
        swizzle<2, 0, 0, 2> zxxz;
        swizzle<2, 0, 0, 3> zxxw;
        swizzle<2, 0, 1, 0> zxyx;
        swizzle<2, 0, 1, 1> zxyy;
        swizzle<2, 0, 1, 2> zxyz;
        swizzle<2, 0, 1, 3> zxyw;
        swizzle<2, 0, 2, 0> zxzx;
        swizzle<2, 0, 2, 1> zxzy;
        swizzle<2, 0, 2, 2> zxzz;
        swizzle<2, 0, 2, 3> zxzw;
        swizzle<2, 0, 3, 0> zxwx;
        swizzle<2, 0, 3, 1> zxwy;
        swizzle<2, 0, 3, 2> zxwz;
        swizzle<2, 0, 3, 3> zxww;
        swizzle<2, 1, 0, 0> zyxx;
        swizzle<2, 1, 0, 1> zyxy;
        swizzle<2, 1, 0, 2> zyxz;
        swizzle<2, 1, 0, 3> zyxw;
        swizzle<2, 1, 1, 0> zyyx;
        swizzle<2, 1, 1, 1> zyyy;
        swizzle<2, 1, 1, 2> zyyz;
        swizzle<2, 1, 1, 3> zyyw;
        swizzle<2, 1, 2, 0> zyzx;
        swizzle<2, 1, 2, 1> zyzy;
        swizzle<2, 1, 2, 2> zyzz;
        swizzle<2, 1, 2, 3> zyzw;
        swizzle<2, 1, 3, 0> zywx;
        swizzle<2, 1, 3, 1> zywy;
        swizzle<2, 1, 3, 2> zywz;
        swizzle<2, 1, 3, 3> zyww;
        swizzle<2, 2, 0, 0> zzxx;
        swizzle<2, 2, 0, 1> zzxy;
        swizzle<2, 2, 0, 2> zzxz;
        swizzle<2, 2, 0, 3> zzxw;
        swizzle<2, 2, 1, 0> zzyx;
        swizzle<2, 2, 1, 1> zzyy;
        swizzle<2, 2, 1, 2> zzyz;
        swizzle<2, 2, 1, 3> zzyw;
        swizzle<2, 2, 2, 0> zzzx;
        swizzle<2, 2, 2, 1> zzzy;
        swizzle<2, 2, 2, 2> zzzz;
        swizzle<2, 2, 2, 3> zzzw;
        swizzle<3, 0, 0, 0> wxxx;
        swizzle<3, 0, 0, 1> wxxy;
        swizzle<3, 0, 0, 2> wxxz;
        swizzle<3, 0, 0, 3> wxxw;
        swizzle<3, 0, 1, 0> wxyx;
        swizzle<3, 0, 1, 1> wxyy;
        swizzle<3, 0, 1, 2> wxyz;
        swizzle<3, 0, 1, 3> wxyw;
        swizzle<3, 0, 2, 0> wxzx;
        swizzle<3, 0, 2, 1> wxzy;
        swizzle<3, 0, 2, 2> wxzz;
        swizzle<3, 0, 2, 3> wxzw;
        swizzle<3, 0, 3, 0> wxwx;
        swizzle<3, 0, 3, 1> wxwy;
        swizzle<3, 0, 3, 2> wxwz;
        swizzle<3, 0, 3, 3> wxww;
        swizzle<3, 1, 0, 0> wyxx;
        swizzle<3, 1, 0, 1> wyxy;
        swizzle<3, 1, 0, 2> wyxz;
        swizzle<3, 1, 0, 3> wyxw;
        swizzle<3, 1, 1, 0> wyyx;
        swizzle<3, 1, 1, 1> wyyy;
        swizzle<3, 1, 1, 2> wyyz;
        swizzle<3, 1, 1, 3> wyyw;
        swizzle<3, 1, 2, 0> wyzx;
        swizzle<3, 1, 2, 1> wyzy;
        swizzle<3, 1, 2, 2> wyzz;
        swizzle<3, 1, 2, 3> wyzw;
        swizzle<3, 1, 3, 0> wywx;
        swizzle<3, 1, 3, 1> wywy;
        swizzle<3, 1, 3, 2> wywz;
        swizzle<3, 1, 3, 3> wyww;
        swizzle<3, 2, 0, 0> wzxx;
        swizzle<3, 2, 0, 1> wzxy;
        swizzle<3, 2, 0, 2> wzxz;
        swizzle<3, 2, 0, 3> wzxw;
        swizzle<3, 2, 1, 0> wzyx;
        swizzle<3, 2, 1, 1> wzyy;
        swizzle<3, 2, 1, 2> wzyz;
        swizzle<3, 2, 1, 3> wzyw;
        swizzle<3, 2, 2, 0> wzzx;
        swizzle<3, 2, 2, 1> wzzy;
        swizzle<3, 2, 2, 2> wzzz;
        swizzle<3, 2, 2, 3> wzzw;
        swizzle<3, 2, 3, 0> wzwx;
        swizzle<3, 2, 3, 1> wzwy;
        swizzle<3, 2, 3, 2> wzwz;
        swizzle<3, 2, 3, 3> wzww;
        swizzle<3, 3, 0, 0> wwxx;
        swizzle<3, 3, 0, 1> wwxy;
        swizzle<3, 3, 0, 2> wwxz;
        swizzle<3, 3, 0, 3> wwxw;
        swizzle<3, 3, 1, 0> wwyx;
        swizzle<3, 3, 1, 1> wwyy;
        swizzle<3, 3, 1, 2> wwyz;
        swizzle<3, 3, 1, 3> wwyw;
        swizzle<3, 3, 2, 0> wwzx;
        swizzle<3, 3, 2, 1> wwzy;
        swizzle<3, 3, 2, 2> wwzz;
        swizzle<3, 3, 2, 3> wwzw;
        swizzle<3, 3, 3, 0> wwwx;
        swizzle<3, 3, 3, 1> wwwy;
        swizzle<3, 3, 3, 2> wwwz;
        swizzle<3, 3, 3, 3> wwww;

        swizzle<0, 0, 0, 0> rrrr;
        swizzle<0, 0, 0, 1> rrrg;
        swizzle<0, 0, 0, 2> rrrb;
        swizzle<0, 0, 0, 3> rrra;
        swizzle<0, 0, 1, 0> rrgr;
        swizzle<0, 0, 1, 1> rrgg;
        swizzle<0, 0, 1, 2> rrgb;
        swizzle<0, 0, 1, 3> rrga;
        swizzle<0, 0, 2, 0> rrbr;
        swizzle<0, 0, 2, 1> rrbg;
        swizzle<0, 0, 2, 2> rrbb;
        swizzle<0, 0, 2, 3> rrba;
        swizzle<0, 0, 3, 0> rrar;
        swizzle<0, 0, 3, 1> rrag;
        swizzle<0, 0, 3, 2> rrab;
        swizzle<0, 0, 3, 3> rraa;
        swizzle<0, 1, 0, 0> rgrr;
        swizzle<0, 1, 0, 1> rgrg;
        swizzle<0, 1, 0, 2> rgrb;
        swizzle<0, 1, 0, 3> rgra;
        swizzle<0, 1, 1, 0> rggr;
        swizzle<0, 1, 1, 1> rggg;
        swizzle<0, 1, 1, 2> rggb;
        swizzle<0, 1, 1, 3> rgga;
        swizzle<0, 1, 2, 0> rgbr;
        swizzle<0, 1, 2, 1> rgbg;
        swizzle<0, 1, 2, 2> rgbb;
        swizzle<0, 1, 2, 3> rgba;
        swizzle<0, 1, 3, 0> rgar;
        swizzle<0, 1, 3, 1> rgag;
        swizzle<0, 1, 3, 2> rgab;
        swizzle<0, 1, 3, 3> rgaa;
        swizzle<0, 2, 0, 0> rbrr;
        swizzle<0, 2, 0, 1> rbrg;
        swizzle<0, 2, 0, 2> rbrb;
        swizzle<0, 2, 0, 3> rbra;
        swizzle<0, 2, 1, 0> rbgr;
        swizzle<0, 2, 1, 1> rbgg;
        swizzle<0, 2, 1, 2> rbgb;
        swizzle<0, 2, 1, 3> rbga;
        swizzle<0, 2, 2, 0> rbbr;
        swizzle<0, 2, 2, 1> rbbg;
        swizzle<0, 2, 2, 2> rbbb;
        swizzle<0, 2, 2, 3> rbba;
        swizzle<0, 2, 3, 0> rbar;
        swizzle<0, 2, 3, 1> rbag;
        swizzle<0, 2, 3, 2> rbab;
        swizzle<0, 2, 3, 3> rbaa;
        swizzle<0, 3, 0, 0> rarr;
        swizzle<0, 3, 0, 1> rarg;
        swizzle<0, 3, 0, 2> rarb;
        swizzle<0, 3, 0, 3> rara;
        swizzle<0, 3, 1, 0> ragr;
        swizzle<0, 3, 1, 1> ragg;
        swizzle<0, 3, 1, 2> ragb;
        swizzle<0, 3, 1, 3> raga;
        swizzle<0, 3, 2, 0> rabr;
        swizzle<0, 3, 2, 1> rabg;
        swizzle<0, 3, 2, 2> rabb;
        swizzle<0, 3, 2, 3> raba;
        swizzle<0, 3, 3, 0> raar;
        swizzle<0, 3, 3, 1> raag;
        swizzle<0, 3, 3, 2> raab;
        swizzle<0, 3, 3, 3> raaa;
        swizzle<1, 0, 0, 0> grrr;
        swizzle<1, 0, 0, 1> grrg;
        swizzle<1, 0, 0, 2> grrb;
        swizzle<1, 0, 0, 3> grra;
        swizzle<1, 0, 1, 0> grgr;
        swizzle<1, 0, 1, 1> grgg;
        swizzle<1, 0, 1, 2> grgb;
        swizzle<1, 0, 1, 3> grga;
        swizzle<1, 0, 2, 0> grbr;
        swizzle<1, 0, 2, 1> grbg;
        swizzle<1, 0, 2, 2> grbb;
        swizzle<1, 0, 2, 3> grba;
        swizzle<1, 0, 3, 0> grar;
        swizzle<1, 0, 3, 1> grag;
        swizzle<1, 0, 3, 2> grab;
        swizzle<1, 0, 3, 3> graa;
        swizzle<1, 1, 0, 0> ggrr;
        swizzle<1, 1, 0, 1> ggrg;
        swizzle<1, 1, 0, 2> ggrb;
        swizzle<1, 1, 0, 3> ggra;
        swizzle<1, 1, 1, 0> gggr;
        swizzle<1, 1, 1, 1> gggg;
        swizzle<1, 1, 1, 2> gggb;
        swizzle<1, 1, 1, 3> ggga;
        swizzle<1, 1, 2, 0> ggbr;
        swizzle<1, 1, 2, 1> ggbg;
        swizzle<1, 1, 2, 2> ggbb;
        swizzle<1, 1, 2, 3> ggba;
        swizzle<1, 1, 3, 0> ggar;
        swizzle<1, 1, 3, 1> ggag;
        swizzle<1, 1, 3, 2> ggab;
        swizzle<1, 1, 3, 3> ggaa;
        swizzle<1, 2, 0, 0> gbrr;
        swizzle<1, 2, 0, 1> gbrg;
        swizzle<1, 2, 0, 2> gbrb;
        swizzle<1, 2, 0, 3> gbra;
        swizzle<1, 2, 1, 0> gbgr;
        swizzle<1, 2, 1, 1> gbgg;
        swizzle<1, 2, 1, 2> gbgb;
        swizzle<1, 2, 1, 3> gbga;
        swizzle<1, 2, 2, 0> gbbr;
        swizzle<1, 2, 2, 1> gbbg;
        swizzle<1, 2, 2, 2> gbbb;
        swizzle<1, 2, 2, 3> gbba;
        swizzle<1, 2, 3, 0> gbar;
        swizzle<1, 2, 3, 1> gbag;
        swizzle<1, 2, 3, 2> gbab;
        swizzle<1, 2, 3, 3> gbaa;
        swizzle<1, 3, 0, 0> garr;
        swizzle<1, 3, 0, 1> garg;
        swizzle<1, 3, 0, 2> garb;
        swizzle<1, 3, 0, 3> gara;
        swizzle<1, 3, 1, 0> gagr;
        swizzle<1, 3, 1, 1> gagg;
        swizzle<1, 3, 1, 2> gagb;
        swizzle<1, 3, 1, 3> gaga;
        swizzle<1, 3, 2, 0> gabr;
        swizzle<1, 3, 2, 1> gabg;
        swizzle<1, 3, 2, 2> gabb;
        swizzle<1, 3, 2, 3> gaba;
        swizzle<1, 3, 3, 0> gaar;
        swizzle<1, 3, 3, 1> gaag;
        swizzle<1, 3, 3, 2> gaab;
        swizzle<1, 3, 3, 3> gaaa;
        swizzle<2, 0, 0, 0> brrr;
        swizzle<2, 0, 0, 1> brrg;
        swizzle<2, 0, 0, 2> brrb;
        swizzle<2, 0, 0, 3> brra;
        swizzle<2, 0, 1, 0> brgr;
        swizzle<2, 0, 1, 1> brgg;
        swizzle<2, 0, 1, 2> brgb;
        swizzle<2, 0, 1, 3> brga;
        swizzle<2, 0, 2, 0> brbr;
        swizzle<2, 0, 2, 1> brbg;
        swizzle<2, 0, 2, 2> brbb;
        swizzle<2, 0, 2, 3> brba;
        swizzle<2, 0, 3, 0> brar;
        swizzle<2, 0, 3, 1> brag;
        swizzle<2, 0, 3, 2> brab;
        swizzle<2, 0, 3, 3> braa;
        swizzle<2, 1, 0, 0> bgrr;
        swizzle<2, 1, 0, 1> bgrg;
        swizzle<2, 1, 0, 2> bgrb;
        swizzle<2, 1, 0, 3> bgra;
        swizzle<2, 1, 1, 0> bggr;
        swizzle<2, 1, 1, 1> bggg;
        swizzle<2, 1, 1, 2> bggb;
        swizzle<2, 1, 1, 3> bgga;
        swizzle<2, 1, 2, 0> bgbr;
        swizzle<2, 1, 2, 1> bgbg;
        swizzle<2, 1, 2, 2> bgbb;
        swizzle<2, 1, 2, 3> bgba;
        swizzle<2, 1, 3, 0> bgar;
        swizzle<2, 1, 3, 1> bgag;
        swizzle<2, 1, 3, 2> bgab;
        swizzle<2, 1, 3, 3> bgaa;
        swizzle<2, 2, 0, 0> bbrr;
        swizzle<2, 2, 0, 1> bbrg;
        swizzle<2, 2, 0, 2> bbrb;
        swizzle<2, 2, 0, 3> bbra;
        swizzle<2, 2, 1, 0> bbgr;
        swizzle<2, 2, 1, 1> bbgg;
        swizzle<2, 2, 1, 2> bbgb;
        swizzle<2, 2, 1, 3> bbga;
        swizzle<2, 2, 2, 0> bbbr;
        swizzle<2, 2, 2, 1> bbbg;
        swizzle<2, 2, 2, 2> bbbb;
        swizzle<2, 2, 2, 3> bbba;
        swizzle<3, 0, 0, 0> arrr;
        swizzle<3, 0, 0, 1> arrg;
        swizzle<3, 0, 0, 2> arrb;
        swizzle<3, 0, 0, 3> arra;
        swizzle<3, 0, 1, 0> argr;
        swizzle<3, 0, 1, 1> argg;
        swizzle<3, 0, 1, 2> argb;
        swizzle<3, 0, 1, 3> arga;
        swizzle<3, 0, 2, 0> arbr;
        swizzle<3, 0, 2, 1> arbg;
        swizzle<3, 0, 2, 2> arbb;
        swizzle<3, 0, 2, 3> arba;
        swizzle<3, 0, 3, 0> arar;
        swizzle<3, 0, 3, 1> arag;
        swizzle<3, 0, 3, 2> arab;
        swizzle<3, 0, 3, 3> araa;
        swizzle<3, 1, 0, 0> agrr;
        swizzle<3, 1, 0, 1> agrg;
        swizzle<3, 1, 0, 2> agrb;
        swizzle<3, 1, 0, 3> agra;
        swizzle<3, 1, 1, 0> aggr;
        swizzle<3, 1, 1, 1> aggg;
        swizzle<3, 1, 1, 2> aggb;
        swizzle<3, 1, 1, 3> agga;
        swizzle<3, 1, 2, 0> agbr;
        swizzle<3, 1, 2, 1> agbg;
        swizzle<3, 1, 2, 2> agbb;
        swizzle<3, 1, 2, 3> agba;
        swizzle<3, 1, 3, 0> agar;
        swizzle<3, 1, 3, 1> agag;
        swizzle<3, 1, 3, 2> agab;
        swizzle<3, 1, 3, 3> agaa;
        swizzle<3, 2, 0, 0> abrr;
        swizzle<3, 2, 0, 1> abrg;
        swizzle<3, 2, 0, 2> abrb;
        swizzle<3, 2, 0, 3> abra;
        swizzle<3, 2, 1, 0> abgr;
        swizzle<3, 2, 1, 1> abgg;
        swizzle<3, 2, 1, 2> abgb;
        swizzle<3, 2, 1, 3> abga;
        swizzle<3, 2, 2, 0> abbr;
        swizzle<3, 2, 2, 1> abbg;
        swizzle<3, 2, 2, 2> abbb;
        swizzle<3, 2, 2, 3> abba;
        swizzle<3, 2, 3, 0> abar;
        swizzle<3, 2, 3, 1> abag;
        swizzle<3, 2, 3, 2> abab;
        swizzle<3, 2, 3, 3> abaa;
        swizzle<3, 3, 0, 0> aarr;
        swizzle<3, 3, 0, 1> aarg;
        swizzle<3, 3, 0, 2> aarb;
        swizzle<3, 3, 0, 3> aara;
        swizzle<3, 3, 1, 0> aagr;
        swizzle<3, 3, 1, 1> aagg;
        swizzle<3, 3, 1, 2> aagb;
        swizzle<3, 3, 1, 3> aaga;
        swizzle<3, 3, 2, 0> aabr;
        swizzle<3, 3, 2, 1> aabg;
        swizzle<3, 3, 2, 2> aabb;
        swizzle<3, 3, 2, 3> aaba;
        swizzle<3, 3, 3, 0> aaar;
        swizzle<3, 3, 3, 1> aaag;
        swizzle<3, 3, 3, 2> aaab;
        swizzle<3, 3, 3, 3> aaaa;

        swizzle<0, 0, 0, 0> ssss;
        swizzle<0, 0, 0, 1> ssst;
        swizzle<0, 0, 0, 2> sssp;
        swizzle<0, 0, 0, 3> sssq;
        swizzle<0, 0, 1, 0> ssts;
        swizzle<0, 0, 1, 1> sstt;
        swizzle<0, 0, 1, 2> sstp;
        swizzle<0, 0, 1, 3> sstq;
        swizzle<0, 0, 2, 0> ssps;
        swizzle<0, 0, 2, 1> sspt;
        swizzle<0, 0, 2, 2> sspp;
        swizzle<0, 0, 2, 3> sspq;
        swizzle<0, 0, 3, 0> ssqs;
        swizzle<0, 0, 3, 1> ssqt;
        swizzle<0, 0, 3, 2> ssqp;
        swizzle<0, 0, 3, 3> ssqq;
        swizzle<0, 1, 0, 0> stss;
        swizzle<0, 1, 0, 1> stst;
        swizzle<0, 1, 0, 2> stsp;
        swizzle<0, 1, 0, 3> stsq;
        swizzle<0, 1, 1, 0> stts;
        swizzle<0, 1, 1, 1> sttt;
        swizzle<0, 1, 1, 2> sttp;
        swizzle<0, 1, 1, 3> sttq;
        swizzle<0, 1, 2, 0> stps;
        swizzle<0, 1, 2, 1> stpt;
        swizzle<0, 1, 2, 2> stpp;
        swizzle<0, 1, 2, 3> stpq;
        swizzle<0, 1, 3, 0> stqs;
        swizzle<0, 1, 3, 1> stqt;
        swizzle<0, 1, 3, 2> stqp;
        swizzle<0, 1, 3, 3> stqq;
        swizzle<0, 2, 0, 0> spss;
        swizzle<0, 2, 0, 1> spst;
        swizzle<0, 2, 0, 2> spsp;
        swizzle<0, 2, 0, 3> spsq;
        swizzle<0, 2, 1, 0> spts;
        swizzle<0, 2, 1, 1> sptt;
        swizzle<0, 2, 1, 2> sptp;
        swizzle<0, 2, 1, 3> sptq;
        swizzle<0, 2, 2, 0> spps;
        swizzle<0, 2, 2, 1> sppt;
        swizzle<0, 2, 2, 2> sppp;
        swizzle<0, 2, 2, 3> sppq;
        swizzle<0, 2, 3, 0> spqs;
        swizzle<0, 2, 3, 1> spqt;
        swizzle<0, 2, 3, 2> spqp;
        swizzle<0, 2, 3, 3> spqq;
        swizzle<0, 3, 0, 0> sqss;
        swizzle<0, 3, 0, 1> sqst;
        swizzle<0, 3, 0, 2> sqsp;
        swizzle<0, 3, 0, 3> sqsq;
        swizzle<0, 3, 1, 0> sqts;
        swizzle<0, 3, 1, 1> sqtt;
        swizzle<0, 3, 1, 2> sqtp;
        swizzle<0, 3, 1, 3> sqtq;
        swizzle<0, 3, 2, 0> sqps;
        swizzle<0, 3, 2, 1> sqpt;
        swizzle<0, 3, 2, 2> sqpp;
        swizzle<0, 3, 2, 3> sqpq;
        swizzle<0, 3, 3, 0> sqqs;
        swizzle<0, 3, 3, 1> sqqt;
        swizzle<0, 3, 3, 2> sqqp;
        swizzle<0, 3, 3, 3> sqqq;
        swizzle<1, 0, 0, 0> tsss;
        swizzle<1, 0, 0, 1> tsst;
        swizzle<1, 0, 0, 2> tssp;
        swizzle<1, 0, 0, 3> tssq;
        swizzle<1, 0, 1, 0> tsts;
        swizzle<1, 0, 1, 1> tstt;
        swizzle<1, 0, 1, 2> tstp;
        swizzle<1, 0, 1, 3> tstq;
        swizzle<1, 0, 2, 0> tsps;
        swizzle<1, 0, 2, 1> tspt;
        swizzle<1, 0, 2, 2> tspp;
        swizzle<1, 0, 2, 3> tspq;
        swizzle<1, 0, 3, 0> tsqs;
        swizzle<1, 0, 3, 1> tsqt;
        swizzle<1, 0, 3, 2> tsqp;
        swizzle<1, 0, 3, 3> tsqq;
        swizzle<1, 1, 0, 0> ttss;
        swizzle<1, 1, 0, 1> ttst;
        swizzle<1, 1, 0, 2> ttsp;
        swizzle<1, 1, 0, 3> ttsq;
        swizzle<1, 1, 1, 0> ttts;
        swizzle<1, 1, 1, 1> tttt;
        swizzle<1, 1, 1, 2> tttp;
        swizzle<1, 1, 1, 3> tttq;
        swizzle<1, 1, 2, 0> ttps;
        swizzle<1, 1, 2, 1> ttpt;
        swizzle<1, 1, 2, 2> ttpp;
        swizzle<1, 1, 2, 3> ttpq;
        swizzle<1, 1, 3, 0> ttqs;
        swizzle<1, 1, 3, 1> ttqt;
        swizzle<1, 1, 3, 2> ttqp;
        swizzle<1, 1, 3, 3> ttqq;
        swizzle<1, 2, 0, 0> tpss;
        swizzle<1, 2, 0, 1> tpst;
        swizzle<1, 2, 0, 2> tpsp;
        swizzle<1, 2, 0, 3> tpsq;
        swizzle<1, 2, 1, 0> tpts;
        swizzle<1, 2, 1, 1> tptt;
        swizzle<1, 2, 1, 2> tptp;
        swizzle<1, 2, 1, 3> tptq;
        swizzle<1, 2, 2, 0> tpps;
        swizzle<1, 2, 2, 1> tppt;
        swizzle<1, 2, 2, 2> tppp;
        swizzle<1, 2, 2, 3> tppq;
        swizzle<1, 2, 3, 0> tpqs;
        swizzle<1, 2, 3, 1> tpqt;
        swizzle<1, 2, 3, 2> tpqp;
        swizzle<1, 2, 3, 3> tpqq;
        swizzle<1, 3, 0, 0> tqss;
        swizzle<1, 3, 0, 1> tqst;
        swizzle<1, 3, 0, 2> tqsp;
        swizzle<1, 3, 0, 3> tqsq;
        swizzle<1, 3, 1, 0> tqts;
        swizzle<1, 3, 1, 1> tqtt;
        swizzle<1, 3, 1, 2> tqtp;
        swizzle<1, 3, 1, 3> tqtq;
        swizzle<1, 3, 2, 0> tqps;
        swizzle<1, 3, 2, 1> tqpt;
        swizzle<1, 3, 2, 2> tqpp;
        swizzle<1, 3, 2, 3> tqpq;
        swizzle<1, 3, 3, 0> tqqs;
        swizzle<1, 3, 3, 1> tqqt;
        swizzle<1, 3, 3, 2> tqqp;
        swizzle<1, 3, 3, 3> tqqq;
        swizzle<2, 0, 0, 0> psss;
        swizzle<2, 0, 0, 1> psst;
        swizzle<2, 0, 0, 2> pssp;
        swizzle<2, 0, 0, 3> pssq;
        swizzle<2, 0, 1, 0> psts;
        swizzle<2, 0, 1, 1> pstt;
        swizzle<2, 0, 1, 2> pstp;
        swizzle<2, 0, 1, 3> pstq;
        swizzle<2, 0, 2, 0> psps;
        swizzle<2, 0, 2, 1> pspt;
        swizzle<2, 0, 2, 2> pspp;
        swizzle<2, 0, 2, 3> pspq;
        swizzle<2, 0, 3, 0> psqs;
        swizzle<2, 0, 3, 1> psqt;
        swizzle<2, 0, 3, 2> psqp;
        swizzle<2, 0, 3, 3> psqq;
        swizzle<2, 1, 0, 0> ptss;
        swizzle<2, 1, 0, 1> ptst;
        swizzle<2, 1, 0, 2> ptsp;
        swizzle<2, 1, 0, 3> ptsq;
        swizzle<2, 1, 1, 0> ptts;
        swizzle<2, 1, 1, 1> pttt;
        swizzle<2, 1, 1, 2> pttp;
        swizzle<2, 1, 1, 3> pttq;
        swizzle<2, 1, 2, 0> ptps;
        swizzle<2, 1, 2, 1> ptpt;
        swizzle<2, 1, 2, 2> ptpp;
        swizzle<2, 1, 2, 3> ptpq;
        swizzle<2, 1, 3, 0> ptqs;
        swizzle<2, 1, 3, 1> ptqt;
        swizzle<2, 1, 3, 2> ptqp;
        swizzle<2, 1, 3, 3> ptqq;
        swizzle<2, 2, 0, 0> ppss;
        swizzle<2, 2, 0, 1> ppst;
        swizzle<2, 2, 0, 2> ppsp;
        swizzle<2, 2, 0, 3> ppsq;
        swizzle<2, 2, 1, 0> ppts;
        swizzle<2, 2, 1, 1> pptt;
        swizzle<2, 2, 1, 2> pptp;
        swizzle<2, 2, 1, 3> pptq;
        swizzle<2, 2, 2, 0> ppps;
        swizzle<2, 2, 2, 1> pppt;
        swizzle<2, 2, 2, 2> pppp;
        swizzle<2, 2, 2, 3> pppq;
        swizzle<3, 0, 0, 0> qsss;
        swizzle<3, 0, 0, 1> qsst;
        swizzle<3, 0, 0, 2> qssp;
        swizzle<3, 0, 0, 3> qssq;
        swizzle<3, 0, 1, 0> qsts;
        swizzle<3, 0, 1, 1> qstt;
        swizzle<3, 0, 1, 2> qstp;
        swizzle<3, 0, 1, 3> qstq;
        swizzle<3, 0, 2, 0> qsps;
        swizzle<3, 0, 2, 1> qspt;
        swizzle<3, 0, 2, 2> qspp;
        swizzle<3, 0, 2, 3> qspq;
        swizzle<3, 0, 3, 0> qsqs;
        swizzle<3, 0, 3, 1> qsqt;
        swizzle<3, 0, 3, 2> qsqp;
        swizzle<3, 0, 3, 3> qsqq;
        swizzle<3, 1, 0, 0> qtss;
        swizzle<3, 1, 0, 1> qtst;
        swizzle<3, 1, 0, 2> qtsp;
        swizzle<3, 1, 0, 3> qtsq;
        swizzle<3, 1, 1, 0> qtts;
        swizzle<3, 1, 1, 1> qttt;
        swizzle<3, 1, 1, 2> qttp;
        swizzle<3, 1, 1, 3> qttq;
        swizzle<3, 1, 2, 0> qtps;
        swizzle<3, 1, 2, 1> qtpt;
        swizzle<3, 1, 2, 2> qtpp;
        swizzle<3, 1, 2, 3> qtpq;
        swizzle<3, 1, 3, 0> qtqs;
        swizzle<3, 1, 3, 1> qtqt;
        swizzle<3, 1, 3, 2> qtqp;
        swizzle<3, 1, 3, 3> qtqq;
        swizzle<3, 2, 0, 0> qpss;
        swizzle<3, 2, 0, 1> qpst;
        swizzle<3, 2, 0, 2> qpsp;
        swizzle<3, 2, 0, 3> qpsq;
        swizzle<3, 2, 1, 0> qpts;
        swizzle<3, 2, 1, 1> qptt;
        swizzle<3, 2, 1, 2> qptp;
        swizzle<3, 2, 1, 3> qptq;
        swizzle<3, 2, 2, 0> qpps;
        swizzle<3, 2, 2, 1> qppt;
        swizzle<3, 2, 2, 2> qppp;
        swizzle<3, 2, 2, 3> qppq;
        swizzle<3, 2, 3, 0> qpqs;
        swizzle<3, 2, 3, 1> qpqt;
        swizzle<3, 2, 3, 2> qpqp;
        swizzle<3, 2, 3, 3> qpqq;
        swizzle<3, 3, 0, 0> qqss;
        swizzle<3, 3, 0, 1> qqst;
        swizzle<3, 3, 0, 2> qqsp;
        swizzle<3, 3, 0, 3> qqsq;
        swizzle<3, 3, 1, 0> qqts;
        swizzle<3, 3, 1, 1> qqtt;
        swizzle<3, 3, 1, 2> qqtp;
        swizzle<3, 3, 1, 3> qqtq;
        swizzle<3, 3, 2, 0> qqps;
        swizzle<3, 3, 2, 1> qqpt;
        swizzle<3, 3, 2, 2> qqpp;
        swizzle<3, 3, 2, 3> qqpq;
        swizzle<3, 3, 3, 0> qqqs;
        swizzle<3, 3, 3, 1> qqqt;
        swizzle<3, 3, 3, 2> qqqp;
        swizzle<3, 3, 3, 3> qqqq;
    };

    Vec4() : x(0), y(0), z(0), w(0)
    { }

    Vec4(T val) : x(val), y(val), z(val), w(val)
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
