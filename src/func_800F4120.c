#include "common.h"
extern u8 *D_8019ED68;
extern u8 *D_8019ED40;
void func_800F4120(void)
{
    u8 x = *D_8019ED68;
    u8 r = (u8)((x & 0x7D) | (*D_8019ED40 & 0xFF));
    if (*D_8019ED40 != 0)
        r = (u8)((x & 0x7D) | 0x2);
    else
        r &= 0xFF;
    *D_8019ED68 = r;
}
