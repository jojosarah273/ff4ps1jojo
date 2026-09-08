#include "common.h"
extern u8 *D_8019ED68;
extern u32 *D_8019ED50;
void func_800F4F4C(void)
{
    u8 x = *D_8019ED68;
    u8 r = (*D_8019ED50 & 0x100) ? (u8)((x & 0x7C) | 1) : (u8)(x & 0x7C);
    u8 v = (u8)(r | ((u8)*D_8019ED50 & 0x80));
    if ((u8)*D_8019ED50 != 0)
        r = (u8)(v & 0xFF);
    else
        r = (u8)(v | 2);
    *D_8019ED68 = r;
}
