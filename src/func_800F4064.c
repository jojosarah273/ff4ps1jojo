#include "common.h"
extern u16 *D_8019ED44;
extern u8 *D_8019ED68;
extern u8 *D_8019ED40;
extern u32 *D_8019ED50;
void func_800F4064(u16 a0)
{
    u8 x = *D_8019ED68;
    u16 a = (u16)(*D_8019ED44 + a0 + (x & 1));
    u8 r = (u8)((x & 0x3E) | (D_8019ED40[1] & 0xC0));
    if (a & 0x10000)
        r |= 0x1;
    *D_8019ED44 = a;
    *D_8019ED68 = r;
    *D_8019ED50 = a;
}
