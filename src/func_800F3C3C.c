#include "common.h"
u32 func_800F3C3C(u32 a0)
{
    u32 v = (u16)(*(volatile u16 *)0x1F8003D0u) + (u16)a0;
    u32 base = 0x7FFC8000u;
    if (!((s32)0x7FFF < (s32)v))
        base = 0x800D0000u;
    return base + v;
}
