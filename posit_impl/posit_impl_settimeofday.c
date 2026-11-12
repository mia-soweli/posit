#include <posit_impl/posit_impl.h>
#include <posit_impl/posit_impl_timeval.h>
#include <posit_impl/posit_impl_error.h>
#include <posit_impl/posit_impl_error_number.h>

#include <libc.h>

int
__posit_impl_settimeofday(struct timeval *restrict, struct timezone *restrict)
{
	__posit_impl_error = EPERM;
	return -1;
}
