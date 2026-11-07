#include <posit_impl/posit_impl.h>
#include <posit_impl/posit_impl_string.h>

#include <u.h>
#include <libc.h>

void*
__posit_impl_memmove(void *s1, const void *s2, size_t n)
{
	return memmove(s1, s2, n);
}
