#include "common.h"
extern u8 D_8019EE42;
extern u16 D_8019EE56;
extern u8 D_800D1A37;
extern u8 D_800D1A38;
extern u8 D_800D1A39;
extern u16 D_8019A068[];
void func_80135B54(void)
{
    /* ability bank select: D_8019EE56 <- D_8019A068[bank-char][idx]. */
    u8 v = D_8019EE42;
    u8 idx;
    D_8019EE56 = 0;
    switch (v) {
    case 1: idx = D_800D1A37; break;
    case 2: idx = D_800D1A38; break;
    case 3: idx = D_800D1A39; break;
    default: return;
    }
    D_8019EE56 = D_8019A068[idx];
}
