#include <posit_impl/posit_impl.h>
#include <posit_impl/posit_impl_time.h>
#include <posit_impl/posit_impl_error.h>
#include <posit_impl/posit_impl_error_number.h>

#include <tos.h>

int
__posit_impl_clock_nanosleep(clockid_t clock_id, int, struct timespec *time, struct timespec *)
{
	struct timespec t;
	struct timespec tn;

	__posit_impl_clock_gettime(clock_id, &t);

	tn.tv_sec = t.tv_sec + time->tv_sec;
	tn.tv_nsec = t.tv_nsec + time->tv_nsec;

	while (tn.tv_nsec >= 1000000000LL) {
		tn.tv_sec++;
		tn.tv_nsec -= 1000000000LL;
	}

	while (tn.tv_nsec <= -1000000000LL) {
		tn.tv_sec--;
		tn.tv_nsec += 1000000000LL;
	}

	while (__posit_impl_clock_gettime(clock_id, &t) > 0) {
		if (t.tv_sec > tn.tv_sec)
			return 0;
		if (t.tv_sec == tn.tv_sec && t.tv_nsec > tn.tv_nsec)
			return 0;
	}

	return 0;
}
