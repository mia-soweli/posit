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

#endif
