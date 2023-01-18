#ifndef STDC_h
#define STDC_h

#include <stdint.h>
#if __STDC_VERSION__ < 199901L
#	define bool uint_fast8_t
#	define true ((bool)1)
#	define false ((bool)0)
#	define inline
#	define restrict
#	define CONST
#	define STATIC(s)
#else
#	include <stdbool.h>
#	define CONST const
#	define STATIC(s) static s
#endif /* __STDC_VERSION__ < 199901L */
#define ARRSIZ(a) (sizeof(a)/sizeof*(a))

#endif /* STDC_h */
