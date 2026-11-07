#include <posit_impl/posit_impl.h>
#include <posit_impl/posit_impl_exit.h>

#include <u.h>
#include <libc.h>

void
__posit_impl_exit(int status)
{
	_exits(status == 0 ? "" : "error");
}
