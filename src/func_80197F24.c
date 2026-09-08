#include "common.h"
extern s16 D_8019CCC4[];
extern s16 D_8019DCC4[];
s16 func_80197F24(u32 a0)
{
    /* trig table with quadrant folds. */
    if (a0 < 0x401)
        return D_8019DCC4[a0];
    if (a0 < 0x801)
        return D_8019DCC4[0x800 - a0];
    if (a0 < 0xC01)
        return -D_8019CCC4[a0];
    return -D_8019DCC4[0x1000 - a0];
}
