#include "common.h"
extern u16 D_8019EEF8;
extern s16 D_8019EF02;
extern u32 D_8019EF24;
extern s32 D_8019EF28;
void func_801860A0(u32 a0)
{
    /* DF/battle timer: decrement the countdown; when expired, set the
       delay and adjust the active-panel counter (a0 = command). */
    if (D_8019EF02 > 0) {
        D_8019EF02 = (u16)(D_8019EF02 - 1);
        return;
    }
    if (a0 != 0)
        D_8019EF02 = 0xA;
    if (a0 == 1)
        D_8019EEF8 += 1;
    else if (a0 == 2)
        D_8019EEF8 -= 1;
    else if (a0 == 3) {
        D_8019EF24 = 1;
        D_8019EF28 = D_8019EEF8;
    }
}
