#include "common.h"
extern u8 D_8019FFE8[];
extern u32 D_8019EE28;
void func_80178890(void)
{
    /* battle anim prep: clears 0x9F panel records (0xE stride) and
       writes the master header; D_8019EE28 = 0. */
    s32 i;
    for (i = 0; i < 0x9F; i++) {
        u8 *r = &D_8019FFE8[0xE * i];
        r[0] = 0; r[1] = 0;
        r[2] = 0; r[3] = 0;
        r[4] = 0; r[5] = 0;
        r[6] = 0; r[7] = 0;
        r[8] = 0; r[9] = 1;
        r[0xA] = 0xF0; r[0xB] = 0;
        r[0xC] = 0x24;
        r[0xD] = 1;
    }
    D_8019FFE8[0x28] = 0x28;
    D_8019FFE8[0x1A] = 0;
    D_8019FFE8[0xC] = 0;
    D_8019FFE8[0x12] = 0; D_8019FFE8[0x13] = 1;
    D_8019FFE8[0xC0] = 0x50; D_8019FFE8[0xC1] = 0;
    D_8019FFE8[0xCE] = 0x50; D_8019FFE8[0xCF] = 0;
    D_8019EE28 = 0;
}
