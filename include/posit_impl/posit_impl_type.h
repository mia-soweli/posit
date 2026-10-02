#ifndef __posit_impl_type_h__
#define __posit_impl_type_h__
#define __posit_impl_type_h_included__

/* §7.18.1.1 ¶1 exact-width integer types */
typedef s8int int8_t;
typedef s16int int16_t;
typedef s32int int32_t;
typedef s64int int64_t;

/* §7.18.1.1 ¶2 exact-width integer types */
typedef u8int uint8_t;
typedef u16int uint16_t;
typedef u32int uint32_t;
typedef u64int uint64_t;

/* §7.18.1.2 ¶1 minimum-width integer types */
typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;

/* §7.18.1.2 ¶2 minimum-width integer types */
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;

/* §7.18.1.3 ¶1 fastest minimum-width integer types */
typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;

/* §7.18.1.3 ¶2 fastest minimum-width integer types */
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;

/* §7.18.1.4 ¶1 integer types capable of holding object pointers */
typedef intptr intptr_t;

/* §7.18.1.4 ¶2 integer types capable of holding object pointers */
typedef uintptr uintptr_t;

/* §7.18.1.5 ¶1 greatest-width integer types */
typedef s64int intmax_t;

/* §7.18.1.5 ¶1 greatest-width integer types */
typedef s64int intmax_t;

/* §7.18.2.1 limits of exact-width integer types */
#define INT8_MIN ((int8_t)0x80)
#define INT16_MIN ((int16_t)0x8000)
#define INT32_MIN ((int32_t)0x80000000L)
#define INT64_MIN ((int64_t)0x80000000000000LL)

#define INT8_MAX ((int8_t)0x7f)
#define INT16_MAX ((int16_t)0x7fff)
#define INT32_MAX ((int32_t)0x7fffffffL)
#define INT64_MAX ((int64_t)0x7fffffffffffffffLL)

#define UINT8_MAX ((uint8_t)0xff)
#define UINT16_MAX ((uint16_t)0xffff)
#define UINT32_MAX ((uint32_t)0xffffffffL)
#define UINT64_MAX ((uint64_t)0xffffffffffffffffLL)

/* §7.18.2.2 limits of minimum-width integer types */
#define INT_LEAST8_MIN INT8_MIN
#define INT_LEAST16_MIN INT16_MIN
#define INT_LEAST32_MIN INT32_MIN
#define INT_LEAST64_MIN INT64_MIN

#define INT_LEAST8_MAX INT8_MAX
#define INT_LEAST16_MAX INT16_MAX
#define INT_LEAST32_MAX INT32_MAX
#define INT_LEAST64_MAX INT64_MAX

#define UINT_LEAST8_MAX UINT8_MAX
#define UINT_LEAST16_MAX UINT16_MAX
#define UINT_LEAST32_MAX UINT32_MAX
#define UINT_LEAST64_MAX UINT64_MAX

/* §7.18.2.3 limits of fastest minimum-width integer types */
#define INT_FAST8_MIN INT8_MIN
#define INT_FAST16_MIN INT16_MIN
#define INT_FAST32_MIN INT32_MIN
#define INT_FAST64_MIN INT64_MIN

#define INT_FAST8_MAX INT8_MAX
#define INT_FAST16_MAX INT16_MAX
#define INT_FAST32_MAX INT32_MAX
#define INT_FAST64_MAX INT64_MAX

#define UINT_FAST8_MAX UINT8_MAX
#define UINT_FAST16_MAX UINT16_MAX
#define UINT_FAST32_MAX UINT32_MAX
#define UINT_FAST64_MAX UINT64_MAX

/* §7.18.2.5 limits of greatest-width integer types */
#define INTMAX_MIN INT64_MIN

#define INTMAX_MAX INT64_MAX

#define UINTMAX_MAX UINT64_MAX

#endif
