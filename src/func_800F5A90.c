#include "common.h"
extern u32 *D_8019ED50;
extern u8 *D_8019ED68;
extern u16 *D_8019ED58;
void func_800F5A90(void)
{
    *D_8019ED68 &= 0x7C;
    if ((u8)*D_8019ED50 == (u8)*D_8019ED58)
        *D_8019ED68 |= 0x3;
    else if ((u8)*D_8019ED50 < (u8)*D_8019ED58)
        *D_8019ED68 |= 0x80;
    else
        *D_8019ED68 |= 0x1;
}
