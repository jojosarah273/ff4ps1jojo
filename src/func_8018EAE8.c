#include "common.h"
extern u16 D_8019B5B4[];
extern u16 D_8019B5CC[];
u16 func_8018EAE8(s32 a0, s32 a1, s32 a2, s32 a3)
{
    /* pan/step math: quantize, /3 via magic, two-table product. */
    u32 acc = (u32)(a3 + a1);
    u32 lo = acc & 0xFFFF;
    s32 s = a2 + (s32)(lo >> 7) - a0;
    s16 x = (s16)s;
    s32 d = x / 3;
    s32 rem = x - d * 12;
    s32 eq = d - 2;
    if (rem < 0) {
        rem += 12;
        eq = d - 3;
    }
    {
        u16 t1 = D_8019B5B4[rem];
        u16 t2 = D_8019B5CC[lo & 0x7F];
        s32 prod = (s32)(((u32)t1 * t2) >> 16);
        s16 v = (s16)eq;
        s32 r;
        if (v >= 0)
            r = 0x3FFF;
        else {
            s32 n = -v;
            r = prod + (1 << (n - 1));
            r = (s32)((u32)r >> n);
        }
        return (u16)r;
    }
}
