#ifndef HELMATH_SWIZZLE_CLASS_MACROS_H
#define HELMATH_SWIZZLE_CLASS_MACROS_H

/**
 * @file
 * This file contains the definitions of all
 * the private swizzle classes needed for all
 * the vector classes.
 */

/**
 * On expansion defines the variadic template class _Swizzle.
 * @details All the vector classes define template specializations
 * of this class to fit their swizzling needs.
 */
#define HM_SWIZZLE_VARIADIC_TEMPLATE_CLASS \
template<int ...A> \
class _Swizzle;

/**
 * Defines the private templated class _Swizzle.
 * @details This class is used for swizzles that are not identical
 * e.g. xy, yx, zx etc.
 */
#define HM_SWIZZLE2_TEMPLATE_CLASS(array_size) \
template<int A, int B> \
class _Swizzle<A, B> { \
private: \
    T v[array_size]; \
public: \
    inline Vec2<T> &operator=(const Vec2<T> &rhs) \
    { \
        v[A] = rhs.x; \
        v[B] = rhs.y; \
\
        return *(Vec2<T> *) this; \
    } \
\
    inline operator Vec2<T>() \
    { \
        return Vec2<T>{v[A], v[B]}; \
    } \
\
    inline Vec2<T> &operator()() \
    { \
        return *(Vec2<T> *) this; \
    } \
\
    inline Vec2<T> operator+(const Vec2<T> &rhs) \
    { \
        return Vec2<T>{v[A] + rhs.x, v[B] + rhs.y}; \
    } \
\
    inline Vec2<T> operator-(const Vec2<T> &rhs) \
    { \
        return Vec2<T>{v[A] - rhs.x, v[B] - rhs.y}; \
    } \
\
    inline Vec2<T> operator*(const Vec2<T> &rhs) \
    { \
        return Vec2<T>{v[A] * rhs.x, v[B] * rhs.y}; \
    } \
\
    inline Vec2<T> operator/(const Vec2<T> &rhs) \
    { \
        return Vec2<T>{v[A] / rhs.x, v[B] / rhs.y}; \
    } \
\
    inline Vec2<T> &operator+=(const Vec2<T> &rhs) \
    { \
        v[A] += rhs.x; \
        v[B] += rhs.y; \
        return *(Vec2<T> *) this; \
    } \
\
    inline Vec2<T> &operator-=(const Vec2<T> &rhs) \
    { \
        v[A] -= rhs.x; \
        v[B] -= rhs.y; \
        return *(Vec2<T> *) this; \
    } \
\
    inline Vec2<T> &operator*=(const Vec2<T> &rhs) \
    { \
        v[A] *= rhs.x; \
        v[B] *= rhs.y; \
        return *(Vec2<T> *) this; \
    } \
\
    inline Vec2<T> &operator/=(const Vec2<T> &rhs) \
    { \
        v[A] /= rhs.x; \
        v[B] /= rhs.y; \
        return *(Vec2<T> *) this; \
    } \
\
    inline Vec2<T> operator+(T rhs) \
    { \
        return Vec2<T>{v[A] + rhs, v[B] + rhs}; \
    } \
\
    inline Vec2<T> operator-(T rhs) \
    { \
        return Vec2<T>{v[A] - rhs, v[B] - rhs}; \
    } \
\
    inline Vec2<T> operator*(T rhs) \
    { \
        return Vec2<T>{v[A] * rhs, v[B] * rhs}; \
    } \
\
    inline Vec2<T> operator/(T rhs) \
    { \
        return Vec2<T>{v[A] / rhs, v[B] / rhs}; \
    } \
\
    inline Vec2<T> &operator+=(T rhs) \
    { \
        v[A] += rhs; \
        v[B] += rhs; \
        return *(Vec2<T> *) this; \
    } \
\
    inline Vec2<T> &operator-=(T rhs) \
    { \
        v[A] -= rhs; \
        v[B] -= rhs; \
        return *(Vec2<T> *) this; \
    } \
\
    inline Vec2<T> &operator*=(T rhs) \
    { \
        v[A] *= rhs; \
        v[B] *= rhs; \
        return *(Vec2<T> *) this; \
    } \
\
    inline Vec2<T> &operator/=(T rhs) \
    { \
        v[A] /= rhs; \
        v[B] /= rhs; \
        return *(Vec2<T> *) this; \
    } \
};

/**
 * Defines a template specialization for the class _Swizzle.
 * @details This class is used for swizzles that are identical.
 * e.g. xx, yy or zz.
 */
#define HM_SWIZZLE2_TEMPLATE_CLASS_SPEC(array_size) \
template<int A> \
class _Swizzle<A, A> { \
private: \
    T v[array_size]; \
public: \
    operator Vec2<T>() \
    { \
        return Vec2<T>{v[A]}; \
    } \
\
    inline Vec2<T> &operator()() const \
    { \
        return *(Vec2<T> *) this; \
    } \
\
    inline Vec2<T> operator+(const Vec2<T> &rhs) \
    { \
        return Vec2<T>{v[A] + rhs.x, v[A] + rhs.y}; \
    } \
\
    inline Vec2<T> operator-(const Vec2<T> &rhs) \
    { \
        return Vec2<T>{v[A] - rhs.x, v[A] - rhs.y}; \
    } \
\
    inline Vec2<T> operator*(const Vec2<T> &rhs) \
    { \
        return Vec2<T>{v[A] * rhs.x, v[A] * rhs.y}; \
    } \
\
    inline Vec2<T> operator/(const Vec2<T> &rhs) \
    { \
        return Vec2<T>{v[A] / rhs.x, v[A] / rhs.y}; \
    } \
\
    inline Vec2<T> operator+(T rhs) \
    { \
        return Vec2<T>{v[A] + rhs, v[A] + rhs}; \
    } \
\
    inline Vec2<T> operator-(T rhs) \
    { \
        return Vec2<T>{v[A] - rhs, v[A] - rhs}; \
    } \
\
    inline Vec2<T> operator*(T rhs) \
    { \
        return Vec2<T>{v[A] * rhs, v[A] * rhs}; \
    } \
\
    inline Vec2<T> operator/(T rhs) \
    { \
        return Vec2<T>{v[A] / rhs, v[A] / rhs}; \
    } \
};

/**
 * Upon expansion it generates all the templated classes needed
 * for the swizzles of Vec2.
 */
#define HM_SWIZZLE2_CLASSES(array_size) \
HM_SWIZZLE_VARIADIC_TEMPLATE_CLASS \
HM_SWIZZLE2_TEMPLATE_CLASS(array_size) \
HM_SWIZZLE2_TEMPLATE_CLASS_SPEC(array_size)


/**
 * Defines the private templated class _Swizzle.
 * @details This class is used for swizzles that are not identical
 * e.g. xyy, yxx, zxy etc.
 */
#define HM_SWIZZLE3_TEMPLATE_CLASS(array_size) \
template<int A, int B, int C> \
class _Swizzle<A, B, C> { \
private: \
    T v[array_size]; \
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
    inline operator Vec3<T>() const \
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
#define HM_SWIZZLE3_TEMPLATE_CLASS_SPEC(array_size) \
template<int A> \
class _Swizzle<A, A, A> { \
private: \
    T v[array_size]; \
\
public: \
    inline operator Vec3<T>() const \
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

/**
 * Upon expansion it generates all the templated classes needed
 * for the swizzles of Vec3.
 */
#define HM_SWIZZLE3_CLASSES(array_size) \
HM_SWIZZLE2_CLASSES(array_size) \
HM_SWIZZLE3_TEMPLATE_CLASS(array_size) \
HM_SWIZZLE3_TEMPLATE_CLASS_SPEC(array_size)


/**
 * Defines the private templated class _Swizzle.
 * @details This class is used for swizzles that are not identical
 * e.g. xyyx, yxxz, zxyw etc.
 */
#define HM_SWIZZLE4_TEMPLATE_CLASS(array_size) \
template<int A, int B, int C, int D> \
class _Swizzle<A, B, C, D> { \
private: \
    T v[array_size]; \
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
    inline operator Vec4<T>() const \
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

/**
 * Defines a template specialization for the class _Swizzle.
 * @details This class is used for swizzles that are identical.
 * e.g. xxxx, yyyy, zzzz or wwww.
 */
#define HM_SWIZZLE4_TEMPLATE_CLASS_SPEC(array_size) \
template<int A> \
class _Swizzle<A, A, A, A> { \
private: \
    T v[array_size]; \
\
public: \
    operator Vec4<T>() const \
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

/**
 * Upon expansion it generates all the templated classes needed
 * for the swizzles of Vec4.
 */
#define HM_SWIZZLE4_CLASSES(array_size) \
HM_SWIZZLE3_CLASSES(array_size) \
HM_SWIZZLE4_TEMPLATE_CLASS(array_size) \
HM_SWIZZLE4_TEMPLATE_CLASS_SPEC(array_size)

#endif //HELMATH_SWIZZLE_CLASS_MACROS_H
