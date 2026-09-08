#include "common.h"
void func_80174F0C(void)
{
    u8 *p = (u8 *)func_800F3C3C(0);
    u32 a = ((u32)p[0x19] << 8) | p[0x18];
    u32 b = ((u32)p[0x1B] << 8) | p[0x1A];
    u32 m = a * b;
    p[0x30] = (u8)m;
    p[0x31] = (u8)(m >> 8);
    p[0x32] = (u8)(m >> 16);
}
