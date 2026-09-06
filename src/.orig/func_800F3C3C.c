#include "common.h"
u32 func_800F3C3C(u16 a0) {
    u32 v = *(volatile u16 *)0x1F8003D0 + a0;
    u32 base = (v > 0x7FFF) ? 0x7FFC8000 : 0x800D0000;
    return base + v;
}
