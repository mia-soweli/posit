#ifndef __posit_stdarg_h__
#define __posit_stdarg_h__
#define __posit_stdarg_h_included__

/* ISO/IEC 9899:1999 §7.15 variable arguments */
typedef char* va_list;

/* ISO/IEC 9899:1999 §7.15.1 variable argument access macros */
#define va_arg(list, type) (\
	(sizeof(type) == 1) ? ((list += 8), (type*)list)[-8] : \
	(sizeof(type) == 2) ? ((list += 8), (type*)list)[-4] : \
	(sizeof(type) == 4) ? ((list += 8), (type*)list)[-2] : ((list += sizeof(type)), (type*)list)[-1])
#define va_copy(list, listfrom) ((list) = (listfrom))
#define va_end(list)
#define va_start(list, start) (list) = (sizeof(start) < 8 ? (va_list)((long long *)&(start)+1) : (va_list)(&(start)+1))

#endif
