#include "common.h"
extern u16 D_801CFD68[16384];
void func_80138408(void)
{
    u32 i = 0;
    do {
        u16 *p = D_801CFD68 + (0x6821 + i * 32);
        s32 k = 0xF;
        do {
            *p++ = 0x30FF;
        } while (--k >= 0);
        i = i + 1;
    } while (i < 2);
}
