#include <posit_impl/posit_impl.h>
#include <posit_impl/posit_impl_string.h>

#include <u.h>
#include <libc.h>

void*
__posit_impl_memccpy(void *restrict s1, const void *restrict s2, int c, size_t n)
{
	return memccpy(s1, s2, c, n);
}
