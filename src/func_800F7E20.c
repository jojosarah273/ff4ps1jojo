#include "common.h"
extern u8 *D_8019ED68;
extern u32 *D_8019ED50;
void func_800F7E20(void)
{
    u8 a2 = (u8)((*D_8019ED68 & 0x7C) | ((u8)*D_8019ED50 & 0x1));
    u8 r = (*D_8019ED50 & 0x10000) ? (u8)(a2 | 0x80) : a2;
    if ((u16)*D_8019ED50 != 0)
        r &= 0xFF;
    else
        r |= 0x2;
    *D_8019ED68 = r;
}
