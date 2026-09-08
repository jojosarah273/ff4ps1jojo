#include "common.h"
extern s16 D_8019EE00;
extern s16 D_8019EE02;
extern u32 D_8019EE28;
extern u16 D_8019EE2C;
s32 func_8017794C(u8 *a0)
{
    /* battle input gate: locks/clears the input latch; returns the
       clamped menu index when accepted, else 0. */
    if (!(D_8019EE2C & 0x1000))
        return 0;
    {
        u32 e = D_8019EE28;
        if (e != 0x100 && e != 0 && !(e & 0x10000))
            return 0;
    }
    {
        u8 cur = a0[0];
        D_8019EE28 = 0;
        if (cur < 0x11)
            return 0;
        if (D_8019EE00 != 0)
            return 0;
        if (D_8019EE02 != 0)
            return 0;
        D_8019EE28 = 0x10000;
        if (cur >= 0x21)
            cur = 0x20;
        return (cur & 0xFFE) - 0x10;
    }
}
