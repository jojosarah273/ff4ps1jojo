#include "common.h"
void func_80179500(u32 *p) { s32 i = 0; do { u32 a = p[0], b = p[1]; p[0] = b; p[1] = a; p += 2; i++; } while (i <= 0x177FF); }
