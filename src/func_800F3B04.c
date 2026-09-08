#include "common.h"
u32 func_800F3B04(u32 a0)
{
    /* catalog base + offset. Bank tag byte at scratch 0x1F8003D2
       selects the base; overflow path uses the saved bank offset. */
    u8 v = *(volatile u8 *)0x1F8003D2;
    if (v == 0x7E) {
        if (a0 < 0x2000)
            return 0x800D0000 + a0;
        return 0x800D2400 + a0;
    }
    if (v < 0x7F) {
        if (v == 0x70)
            return 0x800D2200 + a0;
        if (0x7FFF < (s32)a0)
            return 0x7FFC8000 + (*(volatile u32 *)0x1F8003C0 >> 1) + a0;
        return 0x800D0000 + a0;
    }
    if (v == 0x7F)
        return 0x800E2400 + a0;
    if (0x7FFF < (s32)a0)
        return 0x7FFC8000 + (*(volatile u32 *)0x1F8003C0 >> 1) + a0;
    return 0x800D0000 + a0;
}
