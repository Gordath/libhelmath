#ifndef HELMATH_SWIZZLE4_CLASS_MACROS_H_H
#define HELMATH_SWIZZLE4_CLASS_MACROS_H_H

/**
 * @file
 * This file contains the definitions for all
 * the private swizzle classes needed for Vec4.
 */

#define HM_SWIZZLE4_TEMPLATE_CLASS \
template<int A, int B, int C, int D> \
class _Swizzle { \
private: \
    T v[4]; \
\
public: \
    inline Vec4<T> &operator=(const Vec4<T> &rhs) \
    { \
        v[A] = rhs.x; \
        v[B] = rhs.y; \
        v[C] = rhs.z; \
        v[D] = rhs.w; \
        return *(Vec4<T> *) this; \
    } \
\
    inline operator Vec4() const \
    { \
        return Vec4<T>{v[A], v[B], v[C], v[D]}; \
    } \
\
    inline Vec4<T> operator+(const Vec4<T> &rhs) const \
    { \
        return Vec4<T>{v[A] + rhs.x, v[B] + rhs.y, v[C] + rhs.z, v[D] + rhs.w}; \
    } \
\
    inline Vec4<T> operator-(const Vec4<T> &rhs) const \
    { \
        return Vec4<T>{v[A] - rhs.x, v[B] - rhs.y, v[C] - rhs.z, v[D] - rhs.w}; \
    } \
\
    inline Vec4<T> operator*(const Vec4<T> &rhs) const \
    { \
        return Vec4<T>{v[A] * rhs.x, v[B] * rhs.y, v[C] * rhs.z, v[D] * rhs.w}; \
    } \
\
    inline Vec4<T> operator/(const Vec4<T> &rhs) const \
    { \
        return Vec4<T>{v[A] / rhs.x, v[B] / rhs.y, v[C] / rhs.z, v[D] / rhs.w}; \
    } \
\
    inline Vec4<T> &operator+=(const Vec4<T> &rhs) \
    { \
        v[A] += rhs.x; \
        v[B] += rhs.y; \
        v[C] += rhs.z; \
        v[D] += rhs.w; \
        return *(Vec4<T> *) this; \
    } \
\
    inline Vec4<T> &operator-=(const Vec4<T> &rhs) \
    { \
        v[A] -= rhs.x; \
        v[B] -= rhs.y; \
        v[C] -= rhs.z; \
        v[D] -= rhs.w; \
        return *(Vec4<T> *) this; \
    } \
\
    inline Vec4<T> &operator*=(const Vec4<T> &rhs) \
    { \
        v[A] *= rhs.x; \
        v[B] *= rhs.y; \
        v[C] *= rhs.z; \
        v[D] *= rhs.w; \
        return *(Vec4<T> *) this; \
    } \
\
    inline Vec4<T> &operator/=(const Vec4<T> &rhs) \
    { \
        v[A] /= rhs.x; \
        v[B] /= rhs.y; \
        v[C] /= rhs.z; \
        v[D] /= rhs.w; \
        return *(Vec4<T> *) this; \
    } \
\
    inline Vec4<T> operator+(T rhs) const \
    { \
        return Vec4<T>{v[A] + rhs, v[B] + rhs, v[C] + rhs, v[D] + rhs}; \
    } \
\
    inline Vec4<T> operator-(T rhs) const \
    { \
        return Vec4<T>{v[A] - rhs, v[B] - rhs, v[C] - rhs, v[D] - rhs}; \
    } \
\
    inline Vec4<T> operator*(T rhs) const \
    { \
        return Vec4<T>{v[A] * rhs, v[B] * rhs, v[C] * rhs, v[D] * rhs}; \
    } \
\
    inline Vec4<T> operator/(T rhs) const \
    { \
        return Vec4<T>{v[A] / rhs, v[B] / rhs, v[C] / rhs, v[D] / rhs}; \
    } \
\
    inline Vec4<T> &operator+=(T rhs) \
    { \
        v[A] += rhs; \
        v[B] += rhs; \
        v[C] += rhs; \
        v[D] += rhs; \
        return *(Vec4<T> *) this; \
    } \
\
    inline Vec4<T> &operator-=(T rhs) \
    { \
        v[A] -= rhs; \
        v[B] -= rhs; \
        v[C] -= rhs; \
        v[D] -= rhs; \
        return *(Vec4<T> *) this; \
    } \
\
    inline Vec4<T> &operator*=(T rhs) \
    { \
        v[A] *= rhs; \
        v[B] *= rhs; \
        v[C] *= rhs; \
        v[D] *= rhs; \
        return *(Vec4<T> *) this; \
    } \
\
    inline Vec4<T> &operator/=(T rhs) \
    { \
        v[A] /= rhs; \
        v[B] /= rhs; \
        v[C] /= rhs; \
        v[D] /= rhs; \
        return *(Vec4<T> *) this; \
    } \
}; \

#define HM_SWIZZLE4_TEMPLATE_CLASS_SPEC \
template<int A> \
class _Swizzle<A, A, A, A> { \
private: \
    T v[4]; \
\
public: \
    operator Vec4() const \
    { \
        return Vec4<T>{v[A]}; \
    } \
\
    inline Vec4<T> operator+(const Vec4<T> &rhs) const \
    { \
        return Vec4<T>{v[A] + rhs.x, v[A] + rhs.y, v[A] + rhs.z, v[A] + rhs.w}; \
    } \
\
    inline Vec4<T> operator-(const Vec4<T> &rhs) const \
    { \
        return Vec4<T>{v[A] - rhs.x, v[A] - rhs.y, v[A] - rhs.z, v[A] - rhs.w}; \
    } \
\
    inline Vec4<T> operator*(const Vec4<T> &rhs) const \
    { \
        return Vec4<T>{v[A] * rhs.x, v[A] * rhs.y, v[A] * rhs.z, v[A] * rhs.w}; \
    } \
\
    inline Vec4<T> operator/(const Vec4<T> &rhs) const \
    { \
        return Vec4<T>{v[A] / rhs.x, v[A] / rhs.y, v[A] / rhs.z, v[A] / rhs.w}; \
    } \
\
    inline Vec4<T> operator+(T rhs) const \
    { \
        return Vec4<T>{v[A] + rhs, v[A] + rhs, v[A] + rhs, v[A] + rhs}; \
    } \
\
    inline Vec4<T> operator-(T rhs) const \
    { \
        return Vec4<T>{v[A] - rhs, v[A] - rhs, v[A] - rhs, v[A] - rhs}; \
    } \
\
    inline Vec4<T> operator*(T rhs) const \
    { \
        return Vec4<T>{v[A] * rhs, v[A] * rhs, v[A] * rhs, v[A] * rhs}; \
    } \
\
    inline Vec4<T> operator/(T rhs) const \
    { \
        return Vec4<T>{v[A] / rhs, v[A] / rhs, v[A] / rhs, v[A] / rhs}; \
    } \
}; \

#endif //HELMATH_SWIZZLE4_CLASS_MACROS_H_H
