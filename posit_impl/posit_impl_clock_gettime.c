#include <posit_impl/posit_impl.h>
#include <posit_impl/posit_impl_time.h>
#include <posit_impl/posit_impl_error.h>
#include <posit_impl/posit_impl_error_number.h>

#include <libc.h>
#include <tos.h>

int
__posit_impl_clock_gettime(clockid_t clock, struct timespec * clock_time)
{
	time_t c;
	time_t c_cycles;

	switch (clock) {
	case CLOCK_REALTIME:
		c_cycles = ~0ULL;
		c = nsec();
		break;

	case CLOCK_MONOTONIC:
		c_cycles = _tos->cyclefreq; 
		if (!c_cycles) {
			c_cycles = ~0ULL;
			c = uptime();
			break;
		}

		cycles(&c);
		break;

	default:
		return -EINVAL;
	}

	time_t t_ns_q = c / c_cycles;
	time_t t_ns_r = c % c_cycles;
	time_t t_ns = t_ns_q *1000000000ULL  + t_ns_r * 1000000000ULL / c_cycles;

	clock_time->tv_sec = t_ns / 1000000000ULL;
	clock_time->tv_nsec = t_ns % 1000000000ULL;
	return 0;
}
