#include "common.h"
extern s16 D_8019DB58;
extern s16 D_8019DB5A;
u32 func_80195668(u32 a0, u32 a1)
{
    /* GPU E300 word: clamp (x,y) into the sprite grid then pack. */
    u32 x = 0, y = 0;
    if ((s16)a0 >= 0) {
        if ((s16)(D_8019DB58 - 1) < (s16)a0)
            x = (u32)(u16)(D_8019DB58 - 1);
        else
            x = a0;
    }
    if ((s16)a1 >= 0) {
        if ((s16)(D_8019DB5A - 1) < (s16)a1)
            y = (u32)(u16)(D_8019DB5A - 1);
        else
            y = a1;
    }
    return 0xE3000000u | (x & 0x3FF) | ((y & 0x3FF) << 10);
}
