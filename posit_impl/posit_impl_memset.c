#include <posit_impl/posit_impl.h>
#include <posit_impl/posit_impl_string.h>

#include <u.h>
#include <libc.h>

void*
__posit_impl_memset(void *s, int c, size_t n)
{
	return memset(s, c, n);
}
