#include "common.h"
extern u8 *D_8019ED68;
extern u8 *D_8019ED50;
void func_800F5B4C(void)
{
    u8 x = *D_8019ED68;
    u8 r = (u8)((x & 0x7D) | (*D_8019ED50 & 0x80));
    if (*D_8019ED50 != 0)
        r &= 0xFF;
    else
        r = (u8)((x & 0x7D) | 0x2);
    *D_8019ED68 = r;
}
