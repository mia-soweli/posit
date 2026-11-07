#ifndef __posit_string_h__
#define __posit_string_h__
#define __posit_string_h_included__

#include <posit_impl/posit_impl.h>
#include <posit_impl/posit_impl_type_size.h>

extern void* memccpy(void *restrict, const void *restrict, int, size_t);
extern void* memchr(const void *, int, size_t);
extern int memcmp(const void *, const void *, size_t);
extern void* memcpy(void *restrict, const void *restrict, size_t);
extern void* memmove(void *, const void *, size_t);
extern void* memset(void *, int, size_t);

#endif
