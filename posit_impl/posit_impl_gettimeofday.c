#include <posit_impl/posit_impl.h>
#include <posit_impl/posit_impl_timeval.h>
#include <posit_impl/posit_impl_error.h>
#include <posit_impl/posit_impl_error_number.h>

#include <libc.h>

int
__posit_impl_gettimeofday(struct timeval *restrict tv, struct timezone *restrict)
{
	time_t t_ns = nsec();
	
	tv->tv_sec = t_ns / 1000000000ULL;
	tv->tv_usec =  (t_ns % 1000000000ULL) / 1000;

	return 0;
}
