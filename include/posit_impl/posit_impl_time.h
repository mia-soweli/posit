#ifndef __posit_impl_time_h__
#define __posit_impl_time_h__
#define __posit_impl_time_h_included__

#include <posit_impl/posit_impl.h>
#include <posit_impl/posit_impl_type_clock.h>
#include <posit_impl/posit_impl_type_clockid.h>
#include <posit_impl/posit_impl_type_time.h>

/* IEEE 1003:2008 */
struct tm {
	int tm_sec;
	int tm_min;
	int tm_hour;
	int tm_mday;
	int tm_mon;
	int tm_year;
	int tm_wday;
	int tm_yday;
	int tm_isdst;
};

struct timespec {
	time_t tv_sec;
	long tv_nsec;
};

/* IEEE 1003:2008 */
#define CLOCK_REALTIME 0
#define CLOCK_MONOTONIC 1

/* IEEE 1003:2008 */
extern int __posit_impl_clock_getres(clockid_t, struct timespec *);
extern int __posit_impl_clock_gettime(clockid_t, struct timespec *);
extern int __posit_impl_clock_settime(clockid_t, const struct timespec *);
extern int __posit_impl_clock_nanosleep(clockid_t, int, struct timespec *, struct timespec *);

#endif
