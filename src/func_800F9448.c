#include "common.h"
extern u16 *D_8019ED4C;
extern u8 *D_8019ED68;
extern u32 *D_8019ED6C;
extern u8 *D_8019ED70;
void func_800F9448(void)
{
    u16 idx = (u16)(*D_8019ED4C + 1);
    u8 b = *(u8 *)(0x800D0000u + idx);
    u8 r = (u8)((*D_8019ED68 & 0x7D) | (b & 0x80));
    *D_8019ED6C = ((u32)b) << 16;
    if (b != 0)
        r &= 0xFF;
    else
        r |= 0x2;
    *D_8019ED70 = b;
    *D_8019ED68 = r;
    *D_8019ED4C = idx;
}
