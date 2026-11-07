#include <posit_impl/posit_impl.h>
#include <posit_impl/posit_impl_string.h>

#include <u.h>
#include <libc.h>

int
__posit_impl_memcmp(void *s1, void *s2, size_t n)
{
	return memcmp(s1, s2, n);
}
