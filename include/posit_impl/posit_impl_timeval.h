#ifndef __posit_impl_timeval_h__
#define __posit_impl_timeval_h__
#define __posit_impl_timeval_h_included__

#include <posit_impl/posit_impl.h>
#include <posit_impl/posit_impl_type_time.h>
#include <posit_impl/posit_impl_type_suseconds.h>

/* IEEE 1003:2001 */
struct timeval {
	time_t tv_sec;
	suseconds_t tv_usec;
};

struct timezone {
	int tz_minuteswest;
	int tz_dsttime;
};

/* IEEE 1003:2001 */
extern int __posit_impl_gettimeofday(struct timeval * restrict, struct timezone * restrict);

#endif
