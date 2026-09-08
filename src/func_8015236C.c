#include "common.h"
void func_8015236C(void)
{
    u8 *p = (u8 *)func_800F3B04(0x2000);
    u32 a = p[0x193D] | (p[0x193E] << 8);
    u32 b = p[0x193F] | (p[0x1940] << 8);
    u32 m = a * b;
    p[0x1941] = (u8)m;
    p[0x1942] = (u8)(m >> 8);
    p[0x1943] = (u8)(m >> 16);
    p[0x1944] = (u8)(m >> 24);
}
