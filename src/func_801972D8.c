#include "common.h"
void func_801972D8(u8 *a0, u32 a1)
{
    u8 v = a0[7];
    if (a1 != 0)
        v |= 0x2;
    else
        v &= 0xFD;
    a0[7] = v;
}
