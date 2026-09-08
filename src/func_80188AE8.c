#include "common.h"
extern u32 D_8019EF88;
extern s32 D_8019EF8C;
extern u32 D_8019EF40;
u32 func_80188AE8(u32 a0)
{
    u32 a1 = D_8019EF88;
    s32 v1 = D_8019EF8C;
    if ((s32)v1 < (s32)a1)
        return !(a0 < (u32)((s32)a1 - v1));
    return (u32)(D_8019EF40 - (u32)(v1 - 1)) + a1 < a0;
}
