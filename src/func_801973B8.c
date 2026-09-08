#include "common.h"
void func_801973B8(u8 *t0, u32 a1, u32 a2, u32 a3, u8 *t1)
{
    /* anim command header: GPU-ish control word + optional 2nd word. */
    u32 v1 = 0xE1000200;
    u32 v0;
    t0[3] = 2;
    if (a2 != 0)
        v1 |= 0x200;
    v0 = a3 & 0x9FF;
    if (a1 != 0)
        v0 |= 0x400;
    v0 |= v1;
    *(u32 *)&t0[4] = v0;
    if (t1 == 0) {
        *(u32 *)&t0[8] = 0;
        return;
    }
    {
        s16 sx = *(s16 *)&t1[4];
        s16 sy = *(s16 *)&t1[6];
        u32 w = 0xE2000000;
        w |= ((u32)(t1[2] >> 3)) << 15;
        w |= ((u32)(t1[0] >> 3)) << 10;
        w |= ((u32)(-(s32)sy) << 2) & 0x3E0;
        w |= (u8)(-(s32)sx) >> 3;
        *(u32 *)&t0[8] = w;
    }
}
