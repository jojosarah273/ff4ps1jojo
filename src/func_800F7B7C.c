#include "common.h"
extern u8 *D_8019ED68;
extern u32 *D_8019ED50;
void func_800F7B7C(void)
{
    u8 r = (*D_8019ED50 & 0x10000) ? (u8)((*D_8019ED68 & 0x7C) | 1)
                                   : (u8)(*D_8019ED68 & 0x7C);
    if (*D_8019ED50 & 0x8000)
        r |= 0x80;
    if ((u16)*D_8019ED50 != 0)
        r &= 0xFF;
    else
        r |= 0x2;
    *D_8019ED68 = r;
}
