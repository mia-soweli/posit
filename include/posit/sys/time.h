#ifndef __posit_sys_time_h__
#define __posit_sys_time_h__
#define __posit_sys_time_h_included__

#include <posit_impl/posit_impl.h>
#include <posit_impl/posit_impl_timeval.h>

/* IEEE 1003:2001 */
#define gettimeofday __posit_impl_gettimeofday
#define settimeofday __posit_impl_settimeofday

#endif
