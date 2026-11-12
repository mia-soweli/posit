#include <posit_impl/posit_impl.h>
#include <posit_impl/posit_impl_time.h>
#include <posit_impl/posit_impl_error.h>
#include <posit_impl/posit_impl_error_number.h>

int
__posit_impl_clock_getres(clockid_t, struct timespec *)
{
	__posit_impl_error = EINVAL;
	return -1;
}
