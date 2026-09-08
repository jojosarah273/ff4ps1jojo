#include "common.h"
extern u16 *D_8019B114;
extern u32 D_8019B13C;
u32 func_8018ABAC(u32 a0, s32 a1)
{
    u16 v = D_8019B114[a0];
    if (a1 == -1)
        return v;
    return (u32)v << D_8019B13C;
}
