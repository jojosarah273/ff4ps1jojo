#include "common.h"
extern u16 D_801CFD68[];
void func_80138664(void)
{
    u32 row;
    u16 n;
    for (row = 0; row < 8; row++) {
        u16 *p = D_801CFD68 + (0x7834 + row * 32);
        for (n = 0; n < 10; n++)
            p[n] = (u16)((s16)(p[n] & 0xE3FF) | 0x400);
    }
}
