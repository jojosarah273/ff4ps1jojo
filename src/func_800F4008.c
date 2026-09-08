#include "common.h"
extern u8 *D_8019ED40;
extern u8 *D_8019ED68;
extern u32 *D_8019ED50;
void func_800F4008(u8 a0)
{
    u8 y = *D_8019ED40;
    u8 x = *D_8019ED68;
    u8 a = (u8)(y + a0 + (x & 1));
    u8 a2 = (u8)((a & 0xC0) | (x & 0x3E));
    *D_8019ED40 = a;
    *D_8019ED68 = (a & 0x100) ? (u8)(a2 | 1) : a2;
    *D_8019ED50 = a;
}
