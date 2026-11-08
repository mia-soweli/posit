#ifndef __posit_time_h__
#define __posit_time_h__
#define __posit_time_h_included__

#include <posit_impl/posit_impl.h>
#include <posit_impl/posit_impl_time.h>

/* IEEE 1003:2008 */
#define clock_getres __posit_clock_getres
#define clock_gettime __posit_clock_gettime
#define clock_settime __posit_clock_settime
#define clock_nanosleep __posit_clock_nanosleep

/* IEEE 1003:2008 */
#define nanosleep(rqtp, rmtp) __posit_impl_clock_nanosleep(CLOCK_MONOTONIC, 0, rqtp, rmtp)

#endif
