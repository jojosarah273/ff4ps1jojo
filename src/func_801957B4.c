#include "common.h"
u32 func_801957B4(u8 *a0)
{
    /* sprite/quad command word from the (w,h,sx,sy) sprite struct. */
    s32 sy;
    s32 uy;
    if (a0 == 0)
        return 0;
    sy = (u8)(-(s32)(s16) * (s16 *)&a0[4]) >> 3;
    uy = (u8)(-(s32)(s16) * (s16 *)&a0[6]) >> 3;
    return 0xE2000000u | ((u32)(a0[0] >> 3) << 10) |
           ((u32)(a0[2] >> 3) << 15) | ((u32)uy << 5) | (u32)sy;
}
