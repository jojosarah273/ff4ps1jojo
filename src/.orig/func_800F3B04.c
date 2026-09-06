#include "common.h"
u32 func_800F3B04(u32 a0) {
    u32 base;
    u8 m = *(volatile u8 *)0x1F8003D2;
    if (m == 0x7E)
        base = (a0 < 0x2000) ? 0x800D2400 : 0x800D0000;
    else if (m < 0x7F) {
        if (m == 0x70)
            base = 0x800D2200;
        else
            base = (a0 > 0x7FFF) ? 0x7FFC8000 + (*(volatile u32 *)0x1F8003C0 >> 1) : 0x800D0000;
    } else if (m == 0x7F)
        base = 0x800E2400;
    else
        base = (a0 > 0x7FFF) ? 0x7FFC8000 + (*(volatile u32 *)0x1F8003C0 >> 1) : 0x800D0000;
    return base + a0;
}
