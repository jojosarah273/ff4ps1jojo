#include "common.h"
void func_80197308(u8 *a0, u32 a1)
{
    u8 v = a0[7];
    if (a1 != 0)
        v |= 0x1;
    else
        v &= 0xFE;
    a0[7] = v;
}
