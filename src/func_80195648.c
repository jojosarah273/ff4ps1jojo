#include "common.h"
u32 func_80195648(u32 a0, u32 a1, u16 a2)
{
    u32 r = 0;
    if (a1 != 0)
        r |= 0xE1000200u;
    if (a0 != 0)
        r |= (u32)((a2 & 0x9FF) | 0x400);
    return r;
}
