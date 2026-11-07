#ifndef __posit_errno_h__
#define __posit_errno_h__
#define __posit_errno_h_included__

#include <posit_impl/posit_impl.h>
#include <posit_impl/posit_impl_error.h>
#include <posit_impl/posit_impl_error_number.h>

/* ISO/IEC 9899:1999 §7.5.1 */
#define errno __posit_impl_error

#endif
