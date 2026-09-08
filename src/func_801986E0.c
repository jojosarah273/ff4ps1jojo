#include "common.h"
s32 func_801986E0(u32 a0)
{
    /* float-bits builder: extract the exponent/mantissa layout. */
    s32 e = 0x9D;
    u32 sign = 0;
    u32 u;
    if (a0 == 0)
        return 0;
    if (a0 == 0x80000000)
        return 0xCF000000;
    u = a0;
    if ((s32)u < 0) {
        sign = 0x80000000;
        u = -(s32)u;
    }
    while (u <= 0xFFFFFF) {
        u <<= 4;
        e -= 4;
    }
    while (u <= 0x3FFFFFFF) {
        u <<= 1;
        e -= 1;
    }
    u += 0x40;
    if ((s32)u < 0) {
        e += 1;
        u >>= 8;
    } else {
        u >>= 7;
    }
    return (sign | ((u32)e << 23)) | (u & 0xFF7FFFFF);
}
