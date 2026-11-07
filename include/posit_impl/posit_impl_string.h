#ifndef __posit_impl_mem_h__
#define __posit_impl_mem_h__
#define __posit_impl_mem_h_included__

#include <posit_impl/posit_impl_type_size.h>

extern void* __posit_impl_memccpy(void *restrict, const void *restrict, int, size_t);
extern void* __posit_impl_memchr(const void *, int, size_t);
extern int __posit_impl_memcmp(const void *, const void *, size_t);
extern void* __posit_impl_memcpy(void *restrict, const void *restrict, size_t);
extern void* __posit_impl_memmove(void *, const void *, size_t);
extern void* __posit_impl_memset(void *, int, size_t);

#endif
