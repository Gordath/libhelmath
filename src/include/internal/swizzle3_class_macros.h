#ifndef HELMATH_SWIZZLE3_CLASS_MACROS_H
#define HELMATH_SWIZZLE3_CLASS_MACROS_H

/**
 * @file
 * This file contains the definitions for all
 * the private swizzle classes needed for Vec3.
 */

/**
 * Defines the private templated class _Swizzle.
 * @details This class is used for swizzles that are not identical
 * e.g. xyy, yxx, zxy etc.
 */
#define HM_SWIZZLE3_TEMPLATE_CLASS \
template<int A, int B, int C> \
class _Swizzle { \
private: \
    T v[3]; \
\
public: \
    inline Vec3<T> &operator=(const Vec3<T> &rhs) \
    { \
        v[A] = rhs.x; \
        v[B] = rhs.y; \
        v[C] = rhs.z; \
\
        return *(Vec3<T> *) this; \
    } \
\
    inline operator Vec3() const \
    { \
        return Vec3<T>{v[A], v[B], v[C]}; \
    } \
\
    inline Vec3<T> &operator()() const \
    { \
        return *(Vec3<T> *) this; \
    } \
\
    inline Vec3<T> operator+(const Vec3<T> &rhs) const \
    { \
        return Vec3<T>{v[A] + rhs.x, v[B] + rhs.y, v[C] + rhs.z}; \
    } \
\
    inline Vec3<T> operator-(const Vec3<T> &rhs) const \
    { \
        return Vec3<T>{v[A] - rhs.x, v[B] - rhs.y, v[C] - rhs.z}; \
    } \
\
    inline Vec3<T> operator*(const Vec3<T> &rhs) const \
    { \
        return Vec3<T>{v[A] * rhs.x, v[B] * rhs.y, v[C] * rhs.z}; \
    } \
\
    inline Vec3<T> operator/(const Vec3<T> &rhs) const \
    { \
        return Vec3<T>{v[A] / rhs.x, v[B] / rhs.y, v[C] / rhs.z}; \
    } \
\
    inline Vec3<T> &operator+=(const Vec3<T> &rhs) \
    { \
        v[A] += rhs.x; \
        v[B] += rhs.y; \
        v[C] += rhs.z; \
        return *(Vec3<T> *) this; \
    } \
\
    inline Vec3<T> &operator-=(const Vec3<T> &rhs) \
    { \
        v[A] -= rhs.x; \
        v[B] -= rhs.y; \
        v[C] -= rhs.z; \
        return *(Vec3<T> *) this; \
    } \
\
    inline Vec3<T> &operator*=(const Vec3<T> &rhs) \
    { \
        v[A] *= rhs.x; \
        v[B] *= rhs.y; \
        v[C] *= rhs.z; \
        return *(Vec3<T> *) this; \
    } \
\
    inline Vec3<T> &operator/=(const Vec3<T> &rhs) \
    { \
        v[A] /= rhs.x; \
        v[B] /= rhs.y; \
        v[C] /= rhs.z; \
        return *(Vec3<T> *) this; \
    } \
\
    inline Vec3<T> operator+(T rhs) const \
    { \
        return Vec3<T>{v[A] + rhs, v[B] + rhs, v[C] + rhs}; \
    } \
\
    inline Vec3<T> operator-(T rhs) const \
    { \
        return Vec3<T>{v[A] - rhs, v[B] - rhs, v[C] - rhs}; \
    } \
\
    inline Vec3<T> operator*(T rhs) const \
    { \
        return Vec3<T>{v[A] * rhs, v[B] * rhs, v[C] * rhs}; \
    } \
\
    inline Vec3<T> operator/(T rhs) const \
    { \
        return Vec3<T>{v[A] / rhs, v[B] / rhs, v[C] / rhs}; \
    } \
\
    inline Vec3<T> &operator+=(T rhs) \
    { \
        v[A] += rhs; \
        v[B] += rhs; \
        v[C] += rhs; \
        return *(Vec3<T> *) this; \
    } \
\
    inline Vec3<T> &operator-=(T rhs) \
    { \
        v[A] -= rhs; \
        v[B] -= rhs; \
        v[C] -= rhs; \
        return *(Vec3<T> *) this; \
    } \
\
    inline Vec3<T> &operator*=(T rhs) \
    { \
        v[A] *= rhs; \
        v[B] *= rhs; \
        v[C] *= rhs; \
        return *(Vec3<T> *) this; \
    } \
\
    inline Vec3<T> &operator/=(T rhs) \
    { \
        v[A] /= rhs; \
        v[B] /= rhs; \
        v[C] /= rhs; \
        return *(Vec3<T> *) this; \
    } \
};

/**
 * Defines a template specialization for the class _Swizzle.
 * @details This class is used for swizzles that are identical.
 * e.g. xxx, yyy or zzz.
 */
#define HM_SWIZZLE3_TEMPLATE_CLASS_SPEC \
template<int A> \
class _Swizzle<A, A, A> { \
private: \
    T v[3]; \
\
public: \
    inline operator Vec3() const \
    { \
        return Vec3<T>{v[A]}; \
    } \
\
    inline Vec3<T> operator+(const Vec3<T> &rhs) const \
    { \
        return Vec3<T>{v[A] + rhs.x, v[A] + rhs.y, v[A] + rhs.z}; \
    } \
\
    inline Vec3<T> operator-(const Vec3<T> &rhs) const \
    { \
        return Vec3<T>{v[A] - rhs.x, v[A] - rhs.y, v[A] - rhs.z}; \
    } \
\
    inline Vec3<T> operator*(const Vec3<T> &rhs) const \
    { \
        return Vec3<T>{v[A] * rhs.x, v[A] * rhs.y, v[A] * rhs.z}; \
    } \
\
    inline Vec3<T> operator/(const Vec3<T> &rhs) const \
    { \
        return Vec3<T>{v[A] / rhs.x, v[A] / rhs.y, v[A] / rhs.z}; \
    } \
\
    inline Vec3<T> operator+(T rhs) const \
    { \
        return Vec3<T>{v[A] + rhs, v[A] + rhs, v[A] + rhs}; \
    } \
\
    inline Vec3<T> operator-(T rhs) const \
    { \
        return Vec3<T>{v[A] - rhs, v[A] - rhs, v[A] - rhs}; \
    } \
\
    inline Vec3<T> operator*(T rhs) const \
    { \
        return Vec3<T>{v[A] * rhs, v[A] * rhs, v[A] * rhs}; \
    } \
\
    inline Vec3<T> operator/(T rhs) const \
    { \
        return Vec3<T>{v[A] / rhs, v[A] / rhs, v[A] / rhs}; \
    } \
};

#endif //HELMATH_SWIZZLE3_CLASS_MACROS_H
