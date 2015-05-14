/*******************************************************
 * Copyright (c) 2014, ArrayFire
 * All rights reserved.
 *
 * This file is distributed under 3-clause BSD license.
 * The complete license agreement can be obtained at:
 * http://arrayfire.com/licenses/BSD-3-Clause
 ********************************************************/

#include <af/defines.h>
#include <af/blas.h>
#include <Array.hpp>

#ifdef __APPLE__
#include <Accelerate/Accelerate.h>
#else
#ifdef USE_MKL
#include <mkl_cblas.h>
#else
extern "C" {
#include <cblas.h>
}
#endif
#endif

namespace cpu
{

template<typename T>
Array<T> matmul(const Array<T> &lhs, const Array<T> &rhs,
                af_transpose_t optLhs, af_transpose_t optRhs);
template<typename T>
Array<T> dot(const Array<T> &lhs, const Array<T> &rhs,
             af_transpose_t optLhs, af_transpose_t optRhs);

}
