#include "common.h"
extern u8 *D_8019ED28;
void func_80189698(void)
{
    s32 v = -1;
    s32 i = 0x3F;
    u16 *p = (u16 *)(D_8019ED28 + 0x3F0);
    do {
        *p = v;
        p -= 8;
    } while (--i >= 0);
}
