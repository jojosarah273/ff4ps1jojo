#include "common.h"
void func_80189E44(u16 *out, u32 a1, u32 a2, u32 a3, u8 *t0)
{
    /* sprite scale: two products folded into the panel size. */
    s16 t1 = (s16)((t0[2] + 1) * (a3 & 0xFF));
    s16 v1 = (s16)(a1 + 1);
    s16 t2 = (s16)(a2 + 1);
    u32 n = t0[3] + 1;
    if (n == 0x41) {
        out[0] = (s16)(((s32)t1 * v1) >> 7) - 1;
        out[1] = (s16)(((s32)t1 * t2) >> 7) - 1;
        return;
    }
    if (n < 0x41) {
        s32 p = (s32)t1 * (s32)n;
        out[0] = (s16)(((s32)t1 * v1) >> 7) - 1;
        out[1] = (s16)((p * (s32)t2) >> 13) - 1;
        return;
    }
    {
        s32 d = 0x81 - (s32)n;
        s32 p0 = (s32)t1 * d;
        out[1] = (s16)(((s32)t1 * t2) >> 7) - 1;
        out[0] = (s16)((p0 * (s32)v1) >> 13) - 1;
    }
}
