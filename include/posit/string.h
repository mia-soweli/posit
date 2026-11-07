#ifndef __posit_string_h__
#define __posit_string_h__
#define __posit_string_h_included__

#include <posit_impl/posit_impl.h>
#include <posit_impl/posit_impl_type_size.h>

/* ISO/IEC 9899:1999 §7.21.2 copying functions */
extern void *memcpy(void * restrict, const void * restrict, size_t);
extern void *memmove(void *, const void *, size_t);
extern char *strcpy(char * restrict, const char * restrict);
extern char *strncpy(char * restrict, const char * restrict, size_t);

/* ISO/IEC 9899:1999 §7.21.3 concatenation functions */
extern char *strcat(char *restrict, const char * restrict);
extern char *strncat(char * restrict, const char * restrict, size_t);

/* ISO/IEC 9899:1999 §7.21.4 comparision functions */
extern int memcmp(const void *, const void *, size_t);
extern int strcmp(const char *, const char *);
extern int strncmp(const char *, const char *, size_t);

/* ISO/IEC 9899:1999 §7.21.5 search functions */
extern void *memchr(const void *, int, size_t);
extern char *strchr(const char *, int);
extern size_t strcspn(const char *, const char *);
extern char *strpbrk(const char *, const char *);
extern char *strrchr(const char *, int);
extern size_t strspn(const char *, const char *);
extern char *strstr(const char *, const char *);
extern char *strtok(const char * restrict, const char * restrict);

/* ISO/IEC 9899:1999 §7.21.6 miscellaneous functions */
extern void* memset(void *, int, size_t);
extern size_t strlen(const char *);

#endif
