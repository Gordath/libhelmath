#ifndef HELMATH_SWIZZLE_H
#define HELMATH_SWIZZLE_H

/**
 * @file
 * This file defines everything needed for swizzling.
 */

#include "swizzle_class_macros.h"

/**
 * Upon expansion generate all the non identical
 * 2 dimensional swizzle combinations of the arguments provided.
 */
#define HM_SWIZZLE2_NON_IDENTICAL(a, b) \
_Swizzle<0, 1> a##b; \
_Swizzle<1, 0> b##a;

/**
 * Upon expansion defines an identical 2 dimensional swizzle for
 * each argument.
 * @details e.g: HM_SWIZZLE32_IDENTICAL2(x, y) will
 * generate the swizzles xx and yy.
 */
#define HM_SWIZZLE2_IDENTICAL2(a, b) \
_Swizzle<0, 0> a##a; \
_Swizzle<1, 1> b##b;

/**
 * Upon expansion defines an identical 2 dimensional swizzle for
 * each argument.
 * @details e.g: HM_SWIZZLE32_IDENTICAL3(x, y, z) will
 * generate the swizzles xx, yy and zz.
 */
#define HM_SWIZZLE2_IDENTICAL3(a, b, c) \
_Swizzle<0, 0> a##a; \
_Swizzle<1, 1> b##b; \
_Swizzle<2, 2> c##c;

/**
 * Upon expansion generate all the non identical
 * 3 dimensional swizzle combinations of the arguments provided.
 */
#define HM_SWIZZLE3_NON_IDENTICAL(a, b, c) \
_Swizzle<0, 0, 1> a##a##b; \
_Swizzle<0, 0, 2> a##a##c; \
_Swizzle<0, 1, 0> a##b##a; \
_Swizzle<0, 1, 1> a##b##b; \
_Swizzle<0, 1, 2> a##b##c; \
_Swizzle<0, 2, 0> a##c##a; \
_Swizzle<0, 2, 1> a##c##b; \
_Swizzle<0, 2, 2> a##c##c; \
_Swizzle<1, 0, 0> b##a##a; \
_Swizzle<1, 0, 1> b##a##b; \
_Swizzle<1, 0, 2> b##a##c; \
_Swizzle<1, 1, 0> b##b##a; \
_Swizzle<1, 1, 2> b##b##c; \
_Swizzle<1, 2, 0> b##c##a; \
_Swizzle<1, 2, 1> b##c##b; \
_Swizzle<1, 2, 2> b##c##c; \
_Swizzle<2, 0, 0> c##a##a; \
_Swizzle<2, 0, 1> c##a##b; \
_Swizzle<2, 0, 2> c##a##c; \
_Swizzle<2, 1, 0> c##b##a; \
_Swizzle<2, 1, 1> c##b##b; \
_Swizzle<2, 1, 2> c##b##c; \
_Swizzle<2, 2, 0> c##c##a; \
_Swizzle<2, 2, 1> c##c##b; \

/**
 * Upon expansion defines an identical 3 dimensional swizzle for
 * each argument.
 * @details e.g: HM_SWIZZLE3_IDENTICAL(x, y, z) will
 * generate the swizzles xxx, yyy and zzz.
 */
#define HM_SWIZZLE3_IDENTICAL(a, b, c) \
_Swizzle<0, 0, 0> a##a##a; \
_Swizzle<1, 1, 1> b##b##b; \
_Swizzle<2, 2, 2> c##c##c;

/**
 * Upon expansion generate all the non identical
 * 4 dimensional swizzle combinations of the arguments provided.
 */
#define HM_SWIZZLE4_NON_IDENTICAL(a, b, c, d) \
_Swizzle<0, 0, 0, 1> a##a##a##b; \
_Swizzle<0, 0, 0, 2> a##a##a##c; \
_Swizzle<0, 0, 0, 3> a##a##a##d; \
_Swizzle<0, 0, 1, 0> a##a##b##a; \
_Swizzle<0, 0, 1, 1> a##a##b##b; \
_Swizzle<0, 0, 1, 2> a##a##b##c; \
_Swizzle<0, 0, 1, 3> a##a##b##d; \
_Swizzle<0, 0, 2, 0> a##a##c##a; \
_Swizzle<0, 0, 2, 1> a##a##c##b; \
_Swizzle<0, 0, 2, 2> a##a##c##c; \
_Swizzle<0, 0, 2, 3> a##a##c##d; \
_Swizzle<0, 0, 3, 0> a##a##d##a; \
_Swizzle<0, 0, 3, 1> a##a##d##b; \
_Swizzle<0, 0, 3, 2> a##a##d##c; \
_Swizzle<0, 0, 3, 3> a##a##d##d; \
_Swizzle<0, 1, 0, 0> a##b##a##a; \
_Swizzle<0, 1, 0, 1> a##b##a##b; \
_Swizzle<0, 1, 0, 2> a##b##a##c; \
_Swizzle<0, 1, 0, 3> a##b##a##d; \
_Swizzle<0, 1, 1, 0> a##b##b##a; \
_Swizzle<0, 1, 1, 1> a##b##b##b; \
_Swizzle<0, 1, 1, 2> a##b##b##c; \
_Swizzle<0, 1, 1, 3> a##b##b##d; \
_Swizzle<0, 1, 2, 0> a##b##c##a; \
_Swizzle<0, 1, 2, 1> a##b##c##b; \
_Swizzle<0, 1, 2, 2> a##b##c##c; \
_Swizzle<0, 1, 2, 3> a##b##c##d; \
_Swizzle<0, 1, 3, 0> a##b##d##a; \
_Swizzle<0, 1, 3, 1> a##b##d##b; \
_Swizzle<0, 1, 3, 2> a##b##d##c; \
_Swizzle<0, 1, 3, 3> a##b##d##d; \
_Swizzle<0, 2, 0, 0> a##c##a##a; \
_Swizzle<0, 2, 0, 1> a##c##a##b; \
_Swizzle<0, 2, 0, 2> a##c##a##c; \
_Swizzle<0, 2, 0, 3> a##c##a##d; \
_Swizzle<0, 2, 1, 0> a##c##b##a; \
_Swizzle<0, 2, 1, 1> a##c##b##b; \
_Swizzle<0, 2, 1, 2> a##c##b##c; \
_Swizzle<0, 2, 1, 3> a##c##b##d; \
_Swizzle<0, 2, 2, 0> a##c##c##a; \
_Swizzle<0, 2, 2, 1> a##c##c##b; \
_Swizzle<0, 2, 2, 2> a##c##c##c; \
_Swizzle<0, 2, 2, 3> a##c##c##d; \
_Swizzle<0, 2, 3, 0> a##c##d##a; \
_Swizzle<0, 2, 3, 1> a##c##d##b; \
_Swizzle<0, 2, 3, 2> a##c##d##c; \
_Swizzle<0, 2, 3, 3> a##c##d##d; \
_Swizzle<0, 3, 0, 0> a##d##a##a; \
_Swizzle<0, 3, 0, 1> a##d##a##b; \
_Swizzle<0, 3, 0, 2> a##d##a##c; \
_Swizzle<0, 3, 0, 3> a##d##a##d; \
_Swizzle<0, 3, 1, 0> a##d##b##a; \
_Swizzle<0, 3, 1, 1> a##d##b##b; \
_Swizzle<0, 3, 1, 2> a##d##b##c; \
_Swizzle<0, 3, 1, 3> a##d##b##d; \
_Swizzle<0, 3, 2, 0> a##d##c##a; \
_Swizzle<0, 3, 2, 1> a##d##c##b; \
_Swizzle<0, 3, 2, 2> a##d##c##c; \
_Swizzle<0, 3, 2, 3> a##d##c##d; \
_Swizzle<0, 3, 3, 0> a##d##d##a; \
_Swizzle<0, 3, 3, 1> a##d##d##b; \
_Swizzle<0, 3, 3, 2> a##d##d##c; \
_Swizzle<0, 3, 3, 3> a##d##d##d; \
_Swizzle<1, 0, 0, 0> b##a##a##a; \
_Swizzle<1, 0, 0, 1> b##a##a##b; \
_Swizzle<1, 0, 0, 2> b##a##a##c; \
_Swizzle<1, 0, 0, 3> b##a##a##d; \
_Swizzle<1, 0, 1, 0> b##a##b##a; \
_Swizzle<1, 0, 1, 1> b##a##b##b; \
_Swizzle<1, 0, 1, 2> b##a##b##c; \
_Swizzle<1, 0, 1, 3> b##a##b##d; \
_Swizzle<1, 0, 2, 0> b##a##c##a; \
_Swizzle<1, 0, 2, 1> b##a##c##b; \
_Swizzle<1, 0, 2, 2> b##a##c##c; \
_Swizzle<1, 0, 2, 3> b##a##c##d; \
_Swizzle<1, 0, 3, 0> b##a##d##a; \
_Swizzle<1, 0, 3, 1> b##a##d##b; \
_Swizzle<1, 0, 3, 2> b##a##d##c; \
_Swizzle<1, 0, 3, 3> b##a##d##d; \
_Swizzle<1, 1, 0, 0> b##b##a##a; \
_Swizzle<1, 1, 0, 1> b##b##a##b; \
_Swizzle<1, 1, 0, 2> b##b##a##c; \
_Swizzle<1, 1, 0, 3> b##b##a##d; \
_Swizzle<1, 1, 1, 0> b##b##b##a; \
_Swizzle<1, 1, 1, 2> b##b##b##c; \
_Swizzle<1, 1, 1, 3> b##b##b##d; \
_Swizzle<1, 1, 2, 0> b##b##c##a; \
_Swizzle<1, 1, 2, 1> b##b##c##b; \
_Swizzle<1, 1, 2, 2> b##b##c##c; \
_Swizzle<1, 1, 2, 3> b##b##c##d; \
_Swizzle<1, 1, 3, 0> b##b##d##a; \
_Swizzle<1, 1, 3, 1> b##b##d##b; \
_Swizzle<1, 1, 3, 2> b##b##d##c; \
_Swizzle<1, 1, 3, 3> b##b##d##d; \
_Swizzle<1, 2, 0, 0> b##c##a##a; \
_Swizzle<1, 2, 0, 1> b##c##a##b; \
_Swizzle<1, 2, 0, 2> b##c##a##c; \
_Swizzle<1, 2, 0, 3> b##c##a##d; \
_Swizzle<1, 2, 1, 0> b##c##b##a; \
_Swizzle<1, 2, 1, 1> b##c##b##b; \
_Swizzle<1, 2, 1, 2> b##c##b##c; \
_Swizzle<1, 2, 1, 3> b##c##b##d; \
_Swizzle<1, 2, 2, 0> b##c##c##a; \
_Swizzle<1, 2, 2, 1> b##c##c##b; \
_Swizzle<1, 2, 2, 2> b##c##c##c; \
_Swizzle<1, 2, 2, 3> b##c##c##d; \
_Swizzle<1, 2, 3, 0> b##c##d##a; \
_Swizzle<1, 2, 3, 1> b##c##d##b; \
_Swizzle<1, 2, 3, 2> b##c##d##c; \
_Swizzle<1, 2, 3, 3> b##c##d##d; \
_Swizzle<1, 3, 0, 0> b##d##a##a; \
_Swizzle<1, 3, 0, 1> b##d##a##b; \
_Swizzle<1, 3, 0, 2> b##d##a##c; \
_Swizzle<1, 3, 0, 3> b##d##a##d; \
_Swizzle<1, 3, 1, 0> b##d##b##a; \
_Swizzle<1, 3, 1, 1> b##d##b##b; \
_Swizzle<1, 3, 1, 2> b##d##b##c; \
_Swizzle<1, 3, 1, 3> b##d##b##d; \
_Swizzle<1, 3, 2, 0> b##d##c##a; \
_Swizzle<1, 3, 2, 1> b##d##c##b; \
_Swizzle<1, 3, 2, 2> b##d##c##c; \
_Swizzle<1, 3, 2, 3> b##d##c##d; \
_Swizzle<1, 3, 3, 0> b##d##d##a; \
_Swizzle<1, 3, 3, 1> b##d##d##b; \
_Swizzle<1, 3, 3, 2> b##d##d##c; \
_Swizzle<1, 3, 3, 3> b##d##d##d; \
_Swizzle<2, 0, 0, 0> c##a##a##a; \
_Swizzle<2, 0, 0, 1> c##a##a##b; \
_Swizzle<2, 0, 0, 2> c##a##a##c; \
_Swizzle<2, 0, 0, 3> c##a##a##d; \
_Swizzle<2, 0, 1, 0> c##a##b##a; \
_Swizzle<2, 0, 1, 1> c##a##b##b; \
_Swizzle<2, 0, 1, 2> c##a##b##c; \
_Swizzle<2, 0, 1, 3> c##a##b##d; \
_Swizzle<2, 0, 2, 0> c##a##c##a; \
_Swizzle<2, 0, 2, 1> c##a##c##b; \
_Swizzle<2, 0, 2, 2> c##a##c##c; \
_Swizzle<2, 0, 2, 3> c##a##c##d; \
_Swizzle<2, 0, 3, 0> c##a##d##a; \
_Swizzle<2, 0, 3, 1> c##a##d##b; \
_Swizzle<2, 0, 3, 2> c##a##d##c; \
_Swizzle<2, 0, 3, 3> c##a##d##d; \
_Swizzle<2, 1, 0, 0> c##b##a##a; \
_Swizzle<2, 1, 0, 1> c##b##a##b; \
_Swizzle<2, 1, 0, 2> c##b##a##c; \
_Swizzle<2, 1, 0, 3> c##b##a##d; \
_Swizzle<2, 1, 1, 0> c##b##b##a; \
_Swizzle<2, 1, 1, 1> c##b##b##b; \
_Swizzle<2, 1, 1, 2> c##b##b##c; \
_Swizzle<2, 1, 1, 3> c##b##b##d; \
_Swizzle<2, 1, 2, 0> c##b##c##a; \
_Swizzle<2, 1, 2, 1> c##b##c##b; \
_Swizzle<2, 1, 2, 2> c##b##c##c; \
_Swizzle<2, 1, 2, 3> c##b##c##d; \
_Swizzle<2, 1, 3, 0> c##b##d##a; \
_Swizzle<2, 1, 3, 1> c##b##d##b; \
_Swizzle<2, 1, 3, 2> c##b##d##c; \
_Swizzle<2, 1, 3, 3> c##b##d##d; \
_Swizzle<2, 2, 0, 0> c##c##a##a; \
_Swizzle<2, 2, 0, 1> c##c##a##b; \
_Swizzle<2, 2, 0, 2> c##c##a##c; \
_Swizzle<2, 2, 0, 3> c##c##a##d; \
_Swizzle<2, 2, 1, 0> c##c##b##a; \
_Swizzle<2, 2, 1, 1> c##c##b##b; \
_Swizzle<2, 2, 1, 2> c##c##b##c; \
_Swizzle<2, 2, 1, 3> c##c##b##d; \
_Swizzle<2, 2, 2, 0> c##c##c##a; \
_Swizzle<2, 2, 2, 1> c##c##c##b; \
_Swizzle<2, 2, 2, 3> c##c##c##d; \
_Swizzle<2, 2, 3, 0> c##c##d##a; \
_Swizzle<2, 2, 3, 1> c##c##d##b; \
_Swizzle<2, 2, 3, 2> c##c##d##c; \
_Swizzle<2, 2, 3, 3> c##c##d##d; \
_Swizzle<2, 3, 0, 0> c##d##a##a; \
_Swizzle<2, 3, 0, 1> c##d##a##b; \
_Swizzle<2, 3, 0, 2> c##d##a##c; \
_Swizzle<2, 3, 0, 3> c##d##a##d; \
_Swizzle<2, 3, 1, 0> c##d##b##a; \
_Swizzle<2, 3, 1, 1> c##d##b##b; \
_Swizzle<2, 3, 1, 2> c##d##b##c; \
_Swizzle<2, 3, 1, 3> c##d##b##d; \
_Swizzle<2, 3, 2, 0> c##d##c##a; \
_Swizzle<2, 3, 2, 1> c##d##c##b; \
_Swizzle<2, 3, 2, 2> c##d##c##c; \
_Swizzle<2, 3, 2, 3> c##d##c##d; \
_Swizzle<2, 3, 3, 0> c##d##d##a; \
_Swizzle<2, 3, 3, 1> c##d##d##b; \
_Swizzle<2, 3, 3, 2> c##d##d##c; \
_Swizzle<2, 3, 3, 3> c##d##d##d; \
_Swizzle<3, 0, 0, 0> d##a##a##a; \
_Swizzle<3, 0, 0, 1> d##a##a##b; \
_Swizzle<3, 0, 0, 2> d##a##a##c; \
_Swizzle<3, 0, 0, 3> d##a##a##d; \
_Swizzle<3, 0, 1, 0> d##a##b##a; \
_Swizzle<3, 0, 1, 1> d##a##b##b; \
_Swizzle<3, 0, 1, 2> d##a##b##c; \
_Swizzle<3, 0, 1, 3> d##a##b##d; \
_Swizzle<3, 0, 2, 0> d##a##c##a; \
_Swizzle<3, 0, 2, 1> d##a##c##b; \
_Swizzle<3, 0, 2, 2> d##a##c##c; \
_Swizzle<3, 0, 2, 3> d##a##c##d; \
_Swizzle<3, 0, 3, 0> d##a##d##a; \
_Swizzle<3, 0, 3, 1> d##a##d##b; \
_Swizzle<3, 0, 3, 2> d##a##d##c; \
_Swizzle<3, 0, 3, 3> d##a##d##d; \
_Swizzle<3, 1, 0, 0> d##b##a##a; \
_Swizzle<3, 1, 0, 1> d##b##a##b; \
_Swizzle<3, 1, 0, 2> d##b##a##c; \
_Swizzle<3, 1, 0, 3> d##b##a##d; \
_Swizzle<3, 1, 1, 0> d##b##b##a; \
_Swizzle<3, 1, 1, 1> d##b##b##b; \
_Swizzle<3, 1, 1, 2> d##b##b##c; \
_Swizzle<3, 1, 1, 3> d##b##b##d; \
_Swizzle<3, 1, 2, 0> d##b##c##a; \
_Swizzle<3, 1, 2, 1> d##b##c##b; \
_Swizzle<3, 1, 2, 2> d##b##c##c; \
_Swizzle<3, 1, 2, 3> d##b##c##d; \
_Swizzle<3, 1, 3, 0> d##b##d##a; \
_Swizzle<3, 1, 3, 1> d##b##d##b; \
_Swizzle<3, 1, 3, 2> d##b##d##c; \
_Swizzle<3, 1, 3, 3> d##b##d##d; \
_Swizzle<3, 2, 0, 0> d##c##a##a; \
_Swizzle<3, 2, 0, 1> d##c##a##b; \
_Swizzle<3, 2, 0, 2> d##c##a##c; \
_Swizzle<3, 2, 0, 3> d##c##a##d; \
_Swizzle<3, 2, 1, 0> d##c##b##a; \
_Swizzle<3, 2, 1, 1> d##c##b##b; \
_Swizzle<3, 2, 1, 2> d##c##b##c; \
_Swizzle<3, 2, 1, 3> d##c##b##d; \
_Swizzle<3, 2, 2, 0> d##c##c##a; \
_Swizzle<3, 2, 2, 1> d##c##c##b; \
_Swizzle<3, 2, 2, 2> d##c##c##c; \
_Swizzle<3, 2, 2, 3> d##c##c##d; \
_Swizzle<3, 2, 3, 0> d##c##d##a; \
_Swizzle<3, 2, 3, 1> d##c##d##b; \
_Swizzle<3, 2, 3, 2> d##c##d##c; \
_Swizzle<3, 2, 3, 3> d##c##d##d; \
_Swizzle<3, 3, 0, 0> d##d##a##a; \
_Swizzle<3, 3, 0, 1> d##d##a##b; \
_Swizzle<3, 3, 0, 2> d##d##a##c; \
_Swizzle<3, 3, 0, 3> d##d##a##d; \
_Swizzle<3, 3, 1, 0> d##d##b##a; \
_Swizzle<3, 3, 1, 1> d##d##b##b; \
_Swizzle<3, 3, 1, 2> d##d##b##c; \
_Swizzle<3, 3, 1, 3> d##d##b##d; \
_Swizzle<3, 3, 2, 0> d##d##c##a; \
_Swizzle<3, 3, 2, 1> d##d##c##b; \
_Swizzle<3, 3, 2, 2> d##d##c##c; \
_Swizzle<3, 3, 2, 3> d##d##c##d; \
_Swizzle<3, 3, 3, 0> d##d##d##a; \
_Swizzle<3, 3, 3, 1> d##d##d##b; \
_Swizzle<3, 3, 3, 2> d##d##d##c;

/**
 * Upon expansion defines an identical 4 dimensional swizzle for
 * each argument.
 * @details e.g: HM_SWIZZLE4_IDENTICAL(x, y, z, w) will
 * generate the swizzles xxxx, yyyy, zzzz and wwww.
 */
#define HM_SWIZZLE4_IDENTICAL(a, b, c, d) \
_Swizzle<0, 0, 0, 0> a##a##a##a; \
_Swizzle<1, 1, 1, 1> b##b##b##b; \
_Swizzle<2, 2, 2, 2> c##c##c##c; \
_Swizzle<3, 3, 3, 3> d##d##d##d;

/**
 * Upon expansion defines all of Vec2's swizzles.
 */
#define HM_VEC2_SWIZZLES \
HM_SWIZZLE2_NON_IDENTICAL(x, y) \
HM_SWIZZLE2_NON_IDENTICAL(s, t) \
HM_SWIZZLE2_IDENTICAL2(x, y) \
HM_SWIZZLE2_IDENTICAL2(s, t)

/**
 * Upon expansion defines all of Vec3's swizzles.
 */
#define HM_VEC3_SWIZZLES \
HM_VEC2_SWIZZLES \
HM_SWIZZLE2_NON_IDENTICAL(x, z) \
HM_SWIZZLE2_NON_IDENTICAL(y, z) \
HM_SWIZZLE2_NON_IDENTICAL(r, g) \
HM_SWIZZLE2_NON_IDENTICAL(r, b) \
HM_SWIZZLE2_NON_IDENTICAL(g, b) \
HM_SWIZZLE2_NON_IDENTICAL(s, p) \
HM_SWIZZLE2_NON_IDENTICAL(t, p) \
HM_SWIZZLE2_IDENTICAL2(z, p) \
HM_SWIZZLE2_IDENTICAL3(r, g, b) \
HM_SWIZZLE3_NON_IDENTICAL(x, y, z) \
HM_SWIZZLE3_NON_IDENTICAL(r, g, b) \
HM_SWIZZLE3_NON_IDENTICAL(s, t, p) \
HM_SWIZZLE3_IDENTICAL(x, y, z) \
HM_SWIZZLE3_IDENTICAL(r, g, b) \
HM_SWIZZLE3_IDENTICAL(s, t, p)

/**
 * Upon expansion defines all of Vec4's swizzles.
 */
#define HM_VEC4_SWIZZLES \
HM_VEC3_SWIZZLES \
HM_SWIZZLE2_NON_IDENTICAL(x, w) \
HM_SWIZZLE2_NON_IDENTICAL(y, w) \
HM_SWIZZLE2_NON_IDENTICAL(z, w) \
HM_SWIZZLE2_NON_IDENTICAL(r, a) \
HM_SWIZZLE2_NON_IDENTICAL(g, a) \
HM_SWIZZLE2_NON_IDENTICAL(b, a) \
HM_SWIZZLE2_NON_IDENTICAL(s, q) \
HM_SWIZZLE2_NON_IDENTICAL(t, q) \
HM_SWIZZLE2_NON_IDENTICAL(p, q) \
HM_SWIZZLE2_IDENTICAL3(a, w, q) \
HM_SWIZZLE4_NON_IDENTICAL(x, y, z, w) \
HM_SWIZZLE4_NON_IDENTICAL(r, g, b, a) \
HM_SWIZZLE4_NON_IDENTICAL(s, t, p, q) \
HM_SWIZZLE4_IDENTICAL(x, y, z, w) \
HM_SWIZZLE4_IDENTICAL(r, g, b, a) \
HM_SWIZZLE4_IDENTICAL(s, t, p, q)


#endif //HELMATH_SWIZZLE_H
