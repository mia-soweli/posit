#ifndef __posit_stdlib_h__
#define __posit_stdlib_h__
#define __posit_stdlib_h_included__

#include <posit_impl/posit_impl.h>
#include <posit_impl/posit_impl_type_null.h>
#include <posit_impl/posit_impl_type_size.h>
#include <posit_impl/posit_impl_type_wchar.h>

/* ISO/IEC 9899:1999 §7.20.1.1 numeric conversion functions */
double atof(const char *);

/* ISO/IEC 9899:1999 §7.20.1.2 numeric conversion functions */
int atoi(const char *);
long int atol(const char *);
long long int atoll(const char *);

/* ISO/IEC 9899:1999 §7.20.1.3 numeric conversion functions */
double strtod(const char * restrict nptr, char ** restrict endptr);
float strtof(const char * restrict nptr, char ** restrict endptr);

/* ISO/IEC 9899:1999 §7.20.1.4 numeric conversion functions */
signed long int strtol(const char * restrict nptr, char ** restrict endptr, int);
signed long long int strtoll(const char * restrict nptr, char ** restrict endptr, int);
unsigned long int strtoul(const char * restrict nptr, char ** restrict endptr, int);
unsigned long long int strtoull(const char * restrict nptr, char ** restrict endptr, int);

/* ISO/IEC 9899:1999 §7.20.3 memory management functions */
extern void* calloc(size_t nmemb, size_t size);
extern void* free(void *ptr);
extern void* malloc(size_t size);
extern void* realloc(void *ptr, size_t size);

/* ISO/IEC 9899:1999 §7.20.4 communication with the environment */
extern void abort(void);

#endif
