#include "common.h"
void func_8017E740(u8 *a0)
{
    s32 n = 0x28;
    u8 *p0 = a0 + 0x70;
    u8 *p1 = a0 + 0x114;
    do {
        func_80197208(p0, p1);
        n--;
        p0 += 4;
        p1 += 0xC;
    } while (n >= 0);
}
