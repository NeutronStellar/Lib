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
#ifdef __cplusplus
#	define C_BEGIN extern "C" {
#	define C_END }
#else
#	define C_BEGIN
#	define C_END
#endif /* __cplusplus */
#define ARRSIZ(a) (sizeof(a)/sizeof*(a))

#endif /* STDC_h */
