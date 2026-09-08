#include "common.h"
extern u32 D_8019B13C;
extern u32 D_8019B17C;
extern u32 D_8019B178;
extern u32 D_8019B174;
s32 func_8018ADC8(s32 a0, void *a1)
{
    /* DMA-ish prep: writes 0x40001010 header + shifted size into
       a1 unless a0 <= 0. */
    if (a0 <= 0)
        return 0;
    *(u32 *)a1 = 0x40001010;
    D_8019B17C = (u32)a1;
    D_8019B178 = 0;
    D_8019B174 = a0;
    *(u32 *)((u8 *)a1 + 4) = (0x10000 << D_8019B13C) - 0x1010;
    return 0;
}
