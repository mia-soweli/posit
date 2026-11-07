#include <posit_impl/posit_impl.h>
#include <posit_impl/posit_impl_string.h>

#include <u.h>
#include <libc.h>

void*
__posit_impl_memcpy(void *restrict s1, const void *restrict s2, size_t n)
{
	return memcpy(s1, s2, n);
}
