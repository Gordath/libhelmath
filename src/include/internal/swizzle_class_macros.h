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
    inline Vector2<T> &operator=(const Vector2<T> &rhs) \
    { \
        v[A] = rhs.x; \
        v[B] = rhs.y; \
\
        return *(Vector2<T> *) this; \
    } \
\
    inline operator Vector2<T>() \
    { \
        return Vector2<T>{v[A], v[B]}; \
    } \
\
    inline Vector2<T> &operator()() \
    { \
        return *(Vector2<T> *) this; \
    } \
\
    inline Vector2<T> operator+(const Vector2<T> &rhs) \
    { \
        return Vector2<T>{v[A] + rhs.x, v[B] + rhs.y}; \
    } \
\
    inline Vector2<T> operator-(const Vector2<T> &rhs) \
    { \
        return Vector2<T>{v[A] - rhs.x, v[B] - rhs.y}; \
    } \
\
    inline Vector2<T> operator*(const Vector2<T> &rhs) \
    { \
        return Vector2<T>{v[A] * rhs.x, v[B] * rhs.y}; \
    } \
\
    inline Vector2<T> operator/(const Vector2<T> &rhs) \
    { \
        return Vector2<T>{v[A] / rhs.x, v[B] / rhs.y}; \
    } \
\
    inline Vector2<T> &operator+=(const Vector2<T> &rhs) \
    { \
        v[A] += rhs.x; \
        v[B] += rhs.y; \
        return *(Vector2<T> *) this; \
    } \
\
    inline Vector2<T> &operator-=(const Vector2<T> &rhs) \
    { \
        v[A] -= rhs.x; \
        v[B] -= rhs.y; \
        return *(Vector2<T> *) this; \
    } \
\
    inline Vector2<T> &operator*=(const Vector2<T> &rhs) \
    { \
        v[A] *= rhs.x; \
        v[B] *= rhs.y; \
        return *(Vector2<T> *) this; \
    } \
\
    inline Vector2<T> &operator/=(const Vector2<T> &rhs) \
    { \
        v[A] /= rhs.x; \
        v[B] /= rhs.y; \
        return *(Vector2<T> *) this; \
    } \
\
    inline Vector2<T> operator+(T rhs) \
    { \
        return Vector2<T>{v[A] + rhs, v[B] + rhs}; \
    } \
\
    inline Vector2<T> operator-(T rhs) \
    { \
        return Vector2<T>{v[A] - rhs, v[B] - rhs}; \
    } \
\
    inline Vector2<T> operator*(T rhs) \
    { \
        return Vector2<T>{v[A] * rhs, v[B] * rhs}; \
    } \
\
    inline Vector2<T> operator/(T rhs) \
    { \
        return Vector2<T>{v[A] / rhs, v[B] / rhs}; \
    } \
\
    inline Vector2<T> &operator+=(T rhs) \
    { \
        v[A] += rhs; \
        v[B] += rhs; \
        return *(Vector2<T> *) this; \
    } \
\
    inline Vector2<T> &operator-=(T rhs) \
    { \
        v[A] -= rhs; \
        v[B] -= rhs; \
        return *(Vector2<T> *) this; \
    } \
\
    inline Vector2<T> &operator*=(T rhs) \
    { \
        v[A] *= rhs; \
        v[B] *= rhs; \
        return *(Vector2<T> *) this; \
    } \
\
    inline Vector2<T> &operator/=(T rhs) \
    { \
        v[A] /= rhs; \
        v[B] /= rhs; \
        return *(Vector2<T> *) this; \
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
    operator Vector2<T>() \
    { \
        return Vector2<T>{v[A]}; \
    } \
\
    inline Vector2<T> &operator()() const \
    { \
        return *(Vector2<T> *) this; \
    } \
\
    inline Vector2<T> operator+(const Vector2<T> &rhs) \
    { \
        return Vector2<T>{v[A] + rhs.x, v[A] + rhs.y}; \
    } \
\
    inline Vector2<T> operator-(const Vector2<T> &rhs) \
    { \
        return Vector2<T>{v[A] - rhs.x, v[A] - rhs.y}; \
    } \
\
    inline Vector2<T> operator*(const Vector2<T> &rhs) \
    { \
        return Vector2<T>{v[A] * rhs.x, v[A] * rhs.y}; \
    } \
\
    inline Vector2<T> operator/(const Vector2<T> &rhs) \
    { \
        return Vector2<T>{v[A] / rhs.x, v[A] / rhs.y}; \
    } \
\
    inline Vector2<T> operator+(T rhs) \
    { \
        return Vector2<T>{v[A] + rhs, v[A] + rhs}; \
    } \
\
    inline Vector2<T> operator-(T rhs) \
    { \
        return Vector2<T>{v[A] - rhs, v[A] - rhs}; \
    } \
\
    inline Vector2<T> operator*(T rhs) \
    { \
        return Vector2<T>{v[A] * rhs, v[A] * rhs}; \
    } \
\
    inline Vector2<T> operator/(T rhs) \
    { \
        return Vector2<T>{v[A] / rhs, v[A] / rhs}; \
    } \
};

/**
 * Upon expansion it generates all the templated classes needed
 * for the swizzles of Vector2.
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
    inline Vector3<T> &operator=(const Vector3<T> &rhs) \
    { \
        v[A] = rhs.x; \
        v[B] = rhs.y; \
        v[C] = rhs.z; \
\
        return *(Vector3<T> *) this; \
    } \
\
    inline operator Vector3<T>() const \
    { \
        return Vector3<T>{v[A], v[B], v[C]}; \
    } \
\
    inline Vector3<T> &operator()() const \
    { \
        return *(Vector3<T> *) this; \
    } \
\
    inline Vector3<T> operator+(const Vector3<T> &rhs) const \
    { \
        return Vector3<T>{v[A] + rhs.x, v[B] + rhs.y, v[C] + rhs.z}; \
    } \
\
    inline Vector3<T> operator-(const Vector3<T> &rhs) const \
    { \
        return Vector3<T>{v[A] - rhs.x, v[B] - rhs.y, v[C] - rhs.z}; \
    } \
\
    inline Vector3<T> operator*(const Vector3<T> &rhs) const \
    { \
        return Vector3<T>{v[A] * rhs.x, v[B] * rhs.y, v[C] * rhs.z}; \
    } \
\
    inline Vector3<T> operator/(const Vector3<T> &rhs) const \
    { \
        return Vector3<T>{v[A] / rhs.x, v[B] / rhs.y, v[C] / rhs.z}; \
    } \
\
    inline Vector3<T> &operator+=(const Vector3<T> &rhs) \
    { \
        v[A] += rhs.x; \
        v[B] += rhs.y; \
        v[C] += rhs.z; \
        return *(Vector3<T> *) this; \
    } \
\
    inline Vector3<T> &operator-=(const Vector3<T> &rhs) \
    { \
        v[A] -= rhs.x; \
        v[B] -= rhs.y; \
        v[C] -= rhs.z; \
        return *(Vector3<T> *) this; \
    } \
\
    inline Vector3<T> &operator*=(const Vector3<T> &rhs) \
    { \
        v[A] *= rhs.x; \
        v[B] *= rhs.y; \
        v[C] *= rhs.z; \
        return *(Vector3<T> *) this; \
    } \
\
    inline Vector3<T> &operator/=(const Vector3<T> &rhs) \
    { \
        v[A] /= rhs.x; \
        v[B] /= rhs.y; \
        v[C] /= rhs.z; \
        return *(Vector3<T> *) this; \
    } \
\
    inline Vector3<T> operator+(T rhs) const \
    { \
        return Vector3<T>{v[A] + rhs, v[B] + rhs, v[C] + rhs}; \
    } \
\
    inline Vector3<T> operator-(T rhs) const \
    { \
        return Vector3<T>{v[A] - rhs, v[B] - rhs, v[C] - rhs}; \
    } \
\
    inline Vector3<T> operator*(T rhs) const \
    { \
        return Vector3<T>{v[A] * rhs, v[B] * rhs, v[C] * rhs}; \
    } \
\
    inline Vector3<T> operator/(T rhs) const \
    { \
        return Vector3<T>{v[A] / rhs, v[B] / rhs, v[C] / rhs}; \
    } \
\
    inline Vector3<T> &operator+=(T rhs) \
    { \
        v[A] += rhs; \
        v[B] += rhs; \
        v[C] += rhs; \
        return *(Vector3<T> *) this; \
    } \
\
    inline Vector3<T> &operator-=(T rhs) \
    { \
        v[A] -= rhs; \
        v[B] -= rhs; \
        v[C] -= rhs; \
        return *(Vector3<T> *) this; \
    } \
\
    inline Vector3<T> &operator*=(T rhs) \
    { \
        v[A] *= rhs; \
        v[B] *= rhs; \
        v[C] *= rhs; \
        return *(Vector3<T> *) this; \
    } \
\
    inline Vector3<T> &operator/=(T rhs) \
    { \
        v[A] /= rhs; \
        v[B] /= rhs; \
        v[C] /= rhs; \
        return *(Vector3<T> *) this; \
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
    inline operator Vector3<T>() const \
    { \
        return Vector3<T>{v[A]}; \
    } \
\
    inline Vector3<T> operator+(const Vector3<T> &rhs) const \
    { \
        return Vector3<T>{v[A] + rhs.x, v[A] + rhs.y, v[A] + rhs.z}; \
    } \
\
    inline Vector3<T> operator-(const Vector3<T> &rhs) const \
    { \
        return Vector3<T>{v[A] - rhs.x, v[A] - rhs.y, v[A] - rhs.z}; \
    } \
\
    inline Vector3<T> operator*(const Vector3<T> &rhs) const \
    { \
        return Vector3<T>{v[A] * rhs.x, v[A] * rhs.y, v[A] * rhs.z}; \
    } \
\
    inline Vector3<T> operator/(const Vector3<T> &rhs) const \
    { \
        return Vector3<T>{v[A] / rhs.x, v[A] / rhs.y, v[A] / rhs.z}; \
    } \
\
    inline Vector3<T> operator+(T rhs) const \
    { \
        return Vector3<T>{v[A] + rhs, v[A] + rhs, v[A] + rhs}; \
    } \
\
    inline Vector3<T> operator-(T rhs) const \
    { \
        return Vector3<T>{v[A] - rhs, v[A] - rhs, v[A] - rhs}; \
    } \
\
    inline Vector3<T> operator*(T rhs) const \
    { \
        return Vector3<T>{v[A] * rhs, v[A] * rhs, v[A] * rhs}; \
    } \
\
    inline Vector3<T> operator/(T rhs) const \
    { \
        return Vector3<T>{v[A] / rhs, v[A] / rhs, v[A] / rhs}; \
    } \
};

/**
 * Upon expansion it generates all the templated classes needed
 * for the swizzles of Vector3.
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
    inline Vector4<T> &operator=(const Vector4<T> &rhs) \
    { \
        v[A] = rhs.x; \
        v[B] = rhs.y; \
        v[C] = rhs.z; \
        v[D] = rhs.w; \
        return *(Vector4<T> *) this; \
    } \
\
    inline operator Vector4<T>() const \
    { \
        return Vector4<T>{v[A], v[B], v[C], v[D]}; \
    } \
\
    inline Vector4<T> operator+(const Vector4<T> &rhs) const \
    { \
        return Vector4<T>{v[A] + rhs.x, v[B] + rhs.y, v[C] + rhs.z, v[D] + rhs.w}; \
    } \
\
    inline Vector4<T> operator-(const Vector4<T> &rhs) const \
    { \
        return Vector4<T>{v[A] - rhs.x, v[B] - rhs.y, v[C] - rhs.z, v[D] - rhs.w}; \
    } \
\
    inline Vector4<T> operator*(const Vector4<T> &rhs) const \
    { \
        return Vector4<T>{v[A] * rhs.x, v[B] * rhs.y, v[C] * rhs.z, v[D] * rhs.w}; \
    } \
\
    inline Vector4<T> operator/(const Vector4<T> &rhs) const \
    { \
        return Vector4<T>{v[A] / rhs.x, v[B] / rhs.y, v[C] / rhs.z, v[D] / rhs.w}; \
    } \
\
    inline Vector4<T> &operator+=(const Vector4<T> &rhs) \
    { \
        v[A] += rhs.x; \
        v[B] += rhs.y; \
        v[C] += rhs.z; \
        v[D] += rhs.w; \
        return *(Vector4<T> *) this; \
    } \
\
    inline Vector4<T> &operator-=(const Vector4<T> &rhs) \
    { \
        v[A] -= rhs.x; \
        v[B] -= rhs.y; \
        v[C] -= rhs.z; \
        v[D] -= rhs.w; \
        return *(Vector4<T> *) this; \
    } \
\
    inline Vector4<T> &operator*=(const Vector4<T> &rhs) \
    { \
        v[A] *= rhs.x; \
        v[B] *= rhs.y; \
        v[C] *= rhs.z; \
        v[D] *= rhs.w; \
        return *(Vector4<T> *) this; \
    } \
\
    inline Vector4<T> &operator/=(const Vector4<T> &rhs) \
    { \
        v[A] /= rhs.x; \
        v[B] /= rhs.y; \
        v[C] /= rhs.z; \
        v[D] /= rhs.w; \
        return *(Vector4<T> *) this; \
    } \
\
    inline Vector4<T> operator+(T rhs) const \
    { \
        return Vector4<T>{v[A] + rhs, v[B] + rhs, v[C] + rhs, v[D] + rhs}; \
    } \
\
    inline Vector4<T> operator-(T rhs) const \
    { \
        return Vector4<T>{v[A] - rhs, v[B] - rhs, v[C] - rhs, v[D] - rhs}; \
    } \
\
    inline Vector4<T> operator*(T rhs) const \
    { \
        return Vector4<T>{v[A] * rhs, v[B] * rhs, v[C] * rhs, v[D] * rhs}; \
    } \
\
    inline Vector4<T> operator/(T rhs) const \
    { \
        return Vector4<T>{v[A] / rhs, v[B] / rhs, v[C] / rhs, v[D] / rhs}; \
    } \
\
    inline Vector4<T> &operator+=(T rhs) \
    { \
        v[A] += rhs; \
        v[B] += rhs; \
        v[C] += rhs; \
        v[D] += rhs; \
        return *(Vector4<T> *) this; \
    } \
\
    inline Vector4<T> &operator-=(T rhs) \
    { \
        v[A] -= rhs; \
        v[B] -= rhs; \
        v[C] -= rhs; \
        v[D] -= rhs; \
        return *(Vector4<T> *) this; \
    } \
\
    inline Vector4<T> &operator*=(T rhs) \
    { \
        v[A] *= rhs; \
        v[B] *= rhs; \
        v[C] *= rhs; \
        v[D] *= rhs; \
        return *(Vector4<T> *) this; \
    } \
\
    inline Vector4<T> &operator/=(T rhs) \
    { \
        v[A] /= rhs; \
        v[B] /= rhs; \
        v[C] /= rhs; \
        v[D] /= rhs; \
        return *(Vector4<T> *) this; \
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
    operator Vector4<T>() const \
    { \
        return Vector4<T>{v[A]}; \
    } \
\
    inline Vector4<T> operator+(const Vector4<T> &rhs) const \
    { \
        return Vector4<T>{v[A] + rhs.x, v[A] + rhs.y, v[A] + rhs.z, v[A] + rhs.w}; \
    } \
\
    inline Vector4<T> operator-(const Vector4<T> &rhs) const \
    { \
        return Vector4<T>{v[A] - rhs.x, v[A] - rhs.y, v[A] - rhs.z, v[A] - rhs.w}; \
    } \
\
    inline Vector4<T> operator*(const Vector4<T> &rhs) const \
    { \
        return Vector4<T>{v[A] * rhs.x, v[A] * rhs.y, v[A] * rhs.z, v[A] * rhs.w}; \
    } \
\
    inline Vector4<T> operator/(const Vector4<T> &rhs) const \
    { \
        return Vector4<T>{v[A] / rhs.x, v[A] / rhs.y, v[A] / rhs.z, v[A] / rhs.w}; \
    } \
\
    inline Vector4<T> operator+(T rhs) const \
    { \
        return Vector4<T>{v[A] + rhs, v[A] + rhs, v[A] + rhs, v[A] + rhs}; \
    } \
\
    inline Vector4<T> operator-(T rhs) const \
    { \
        return Vector4<T>{v[A] - rhs, v[A] - rhs, v[A] - rhs, v[A] - rhs}; \
    } \
\
    inline Vector4<T> operator*(T rhs) const \
    { \
        return Vector4<T>{v[A] * rhs, v[A] * rhs, v[A] * rhs, v[A] * rhs}; \
    } \
\
    inline Vector4<T> operator/(T rhs) const \
    { \
        return Vector4<T>{v[A] / rhs, v[A] / rhs, v[A] / rhs, v[A] / rhs}; \
    } \
}; \

/**
 * Upon expansion it generates all the templated classes needed
 * for the swizzles of Vector4.
 */
#define HM_SWIZZLE4_CLASSES(array_size) \
HM_SWIZZLE3_CLASSES(array_size) \
HM_SWIZZLE4_TEMPLATE_CLASS(array_size) \
HM_SWIZZLE4_TEMPLATE_CLASS_SPEC(array_size)

#endif //HELMATH_SWIZZLE_CLASS_MACROS_H
