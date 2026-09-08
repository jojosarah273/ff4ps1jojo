#include "common.h"
extern u32 *D_8019ED50;
extern u8 *D_8019ED68;
extern u8 *D_8019ED5C;
void func_800F58BC(u8 a0)
{
    *D_8019ED50 = a0;
    *D_8019ED68 &= 0x7C;
    if ((u8)*D_8019ED50 == *D_8019ED5C)
        *D_8019ED68 |= 0x3;
    else if ((u8)*D_8019ED50 < *D_8019ED5C)
        *D_8019ED68 |= 0x80;
    else
        *D_8019ED68 |= 0x1;
}
