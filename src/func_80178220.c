#include "common.h"
extern u16 *D_801DFD68;
void func_80178220(u8 *base)
{
    s32 n = 0x3FF;
    u8 *p = base + 0x88;
    do {
        func_80197378((u32)p);
        p[4] = 0x80;
        p[5] = 0x80;
        p[6] = 0x80;
        p[0x10] = 0x8;
        p[0x12] = 0x8;
        func_801972D8(p, 1);
        func_80197308(p, 1);
        p[0xC] = 0;
        p[0xD] = 0;
        p[0xE] = (u8)*D_801DFD68;
        n--;
        p += 0x14;
    } while (n >= 0);
}
