#include "common.h"
extern u32 *D_801FEBA8;
u32 func_80197468(u32 a0)
{
    s32 r = func_801974CC(*D_801FEBA8, a0);
    if (r != -1) {
        *D_801FEBA8 += (u32)r * 4;
        return a0;
    }
    return 0;
}
