#ifndef __posit_impl_limits_h__
#define __posit_impl_limits_h__
#define __posit_impl_limits_h_included__

/* ISO/IEC 9899:1999 §5.2.4.2.1 sizes of integer types */
#define CHAR_BIT 8

#define CHAR_MIN ((char)0x80)
#define SCHAR_MIN ((signed char)0x80)
#define INT_MIN ((int)0x80000000)
#define LONG_MIN ((long)0x80000000L)
#define LLONG_MIN ((long long)0x8000000000000000LL)

#define CHAR_MAX ((char)0x7f)
#define SCHAR_MAX ((signed char)0x7f)
#define INT_MAX ((int)0x7fffffff)
#define LONG_MAX ((long)0x7fffffffL)
#define LLONG_MAX ((long long)0x7fffffffffffffffLL)

#define UCHAR_MAX ((unsigned char)0xff)
#define UINT_MAX ((unsigned int)0xffffffff)
#define ULONG_MAX ((unsigned long)0xffffffffL)
#define ULLONG_MAX ((unsigned long long)0xffffffffffffffffLL)

#endif
