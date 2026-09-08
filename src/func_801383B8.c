#include "common.h"
extern u16 D_801CFD68[16384];
void func_801383B8(void)
{
    u32 i = 0;
    do {
        u16 *p = D_801CFD68 + (0x6953 + i * 32);
        s32 k = 0xB;
        do {
            *p++ = 0x2000;
        } while (--k >= 0);
        i = i + 1;
    } while (i < 4);
}
