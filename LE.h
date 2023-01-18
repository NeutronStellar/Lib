#ifndef LE_h
#define LE_h

#include "STDC.h"
inline static uint16_t LU16(const uint8_t b[CONST STATIC(2)]) {
	return b[0]|(uint16_t)b[1]<<8;
}
inline static uint32_t LU32(const uint8_t b[CONST STATIC(4)]) {
	return LU16(b)|(uint32_t)LU16(b+2)<<16;
}
inline static uint64_t LU64(const uint8_t b[CONST STATIC(8)]) {
	return LU32(b)|(uint64_t)LU32(b+4)<<32;
}
inline static void U16L(uint8_t b[CONST STATIC(2)], const uint16_t n) {
	b[0] = n;
	b[1] = n>>8;
}
inline static void U32L(uint8_t b[CONST STATIC(4)], const uint32_t n) {
	U16L(b, n);
	U16L(b+2, n>>16);
}
inline static void U64L(uint8_t b[CONST STATIC(8)], const uint64_t n) {
	U32L(b, n);
	U32L(b+4, n>>32);
}

#endif /* LE_h */
