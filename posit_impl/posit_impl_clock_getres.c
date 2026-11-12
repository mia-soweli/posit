#include <posit_impl/posit_impl.h>
#include <posit_impl/posit_impl_time.h>
#include <posit_impl/posit_impl_error.h>
#include <posit_impl/posit_impl_error_number.h>

int
__posit_impl_clock_getres(clockid_t clock, struct timespec * clock_time)
{
	switch (clock) {
	case CLOCK_REALTIME:
	case CLOCK_MONOTONIC:
		/* FIXME(mia): clock resolution is a lie*/
		tv->tv_sec = 0;
		tv->tv_nsec = 1;
		break;

	default:
		__posit_impl_error = EINVAL;
		return -1;
	}

	return 0;
}
