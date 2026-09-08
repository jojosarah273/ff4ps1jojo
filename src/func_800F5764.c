#include "common.h"
extern u32 *D_8019ED50;
extern u8 *D_8019ED68;
extern u8 *D_8019ED60;
void func_800F5764(u8 *a0)
{
    *D_8019ED50 = *a0;
    *D_8019ED68 &= 0x7C;
    if ((u8)*D_8019ED50 == *D_8019ED60)
        *D_8019ED68 |= 0x3;
    else if ((u8)*D_8019ED50 < *D_8019ED60)
        *D_8019ED68 |= 0x80;
    else
        *D_8019ED68 |= 0x1;
}
