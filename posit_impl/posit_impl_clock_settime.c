#include <posit_impl/posit_impl.h>
#include <posit_impl/posit_impl_time.h>
#include <posit_impl/posit_impl_error.h>
#include <posit_impl/posit_impl_error_number.h>

#include <tos.h>

int
__posit_impl_clock_settime(clockid_t, const struct timespec *)
{
	return -EINVAL;
}
