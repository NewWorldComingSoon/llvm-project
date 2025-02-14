//===-- NVPTX specific definitions for math support -----------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIBC_SRC_MATH_GPU_NVPTX_H
#define LLVM_LIBC_SRC_MATH_GPU_NVPTX_H

#include "declarations.h"

#include "src/__support/macros/attributes.h"

namespace __llvm_libc {
namespace internal {
LIBC_INLINE float acosf(float x) { return __nv_acosf(x); }
LIBC_INLINE float acoshf(float x) { return __nv_acoshf(x); }
LIBC_INLINE float asinf(float x) { return __nv_asinf(x); }
LIBC_INLINE float asinhf(float x) { return __nv_asinhf(x); }
LIBC_INLINE float atanf(float x) { return __nv_atanf(x); }
LIBC_INLINE float atanhf(float x) { return __nv_atanhf(x); }
LIBC_INLINE double cos(double x) { return __nv_cos(x); }
LIBC_INLINE float cosf(float x) { return __nv_cosf(x); }
LIBC_INLINE double cosh(double x) { return __nv_cosh(x); }
LIBC_INLINE float coshf(float x) { return __nv_coshf(x); }
LIBC_INLINE float expf(float x) { return __nv_expf(x); }
LIBC_INLINE float exp2f(float x) { return __nv_exp2f(x); }
LIBC_INLINE float exp10f(float x) { return __nv_exp10f(x); }
LIBC_INLINE float expm1f(float x) { return __nv_expm1f(x); }
LIBC_INLINE double fdim(double x, double y) { return __nv_fdim(x, y); }
LIBC_INLINE float fdimf(float x, float y) { return __nv_fdimf(x, y); }
LIBC_INLINE double hypot(double x, double y) { return __nv_hypot(x, y); }
LIBC_INLINE float hypotf(float x, float y) { return __nv_hypotf(x, y); }
LIBC_INLINE int ilogb(double x) { return __nv_ilogb(x); }
LIBC_INLINE int ilogbf(float x) { return __nv_ilogbf(x); }
LIBC_INLINE double ldexp(double x, int i) { return __nv_ldexp(x, i); }
LIBC_INLINE float ldexpf(float x, int i) { return __nv_ldexpf(x, i); }
LIBC_INLINE long long llrint(double x) { return __nv_llrint(x); }
LIBC_INLINE long long llrintf(float x) { return __nv_llrintf(x); }
LIBC_INLINE long long llround(double x) { return __nv_llround(x); }
LIBC_INLINE long long llroundf(float x) { return __nv_llroundf(x); }
LIBC_INLINE double pow(double x, double y) { return __nv_pow(x, y); }
LIBC_INLINE float powf(float x, float y) { return __nv_powf(x, y); }
LIBC_INLINE double sin(double x) { return __nv_sin(x); }

} // namespace internal
} // namespace __llvm_libc

#endif // LLVM_LIBC_SRC_MATH_GPU_NVPTX_H
