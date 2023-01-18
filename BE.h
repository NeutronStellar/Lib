#ifndef BE_h
#define BE_h

#include "STDC.h"
inline static uint16_t BU16(const uint8_t b[CONST STATIC(2)]) {
	return b[1]|(uint16_t)b[0]<<8;
}
inline static uint32_t BU32(const uint8_t b[CONST STATIC(4)]) {
	return BU16(b+2)|(uint32_t)BU16(b)<<16;
}
inline static uint64_t BU64(const uint8_t b[CONST STATIC(8)]) {
	return BU32(b+4)|(uint64_t)BU32(b)<<32;
}
inline static void U16B(uint8_t b[CONST STATIC(2)], const uint16_t n) {
	b[0] = n>>8;
	b[1] = n;
}
inline static void U32B(uint8_t b[CONST STATIC(4)], const uint32_t n) {
	U16B(b, n>>16);
	U16B(b+2, n);
}
inline static void U64B(uint8_t b[CONST STATIC(8)], const uint64_t n) {
	U32B(b, n>>32);
	U32B(b+4, n);
}

#endif /* BE_h */
