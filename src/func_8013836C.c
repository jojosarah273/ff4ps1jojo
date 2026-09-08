#include "common.h"
extern u8 D_801CF568[];
void func_8013836C(u32 mode)
{
    u8 *buf = (u8 *)D_801CF568;
    u8 *ram = (u8 *)0x800D1000u;
    s32 n = 0x7FF;
    if (mode == 0) {
        do {
            *buf++ = *ram++;
        } while (--n >= 0);
    } else {
        do {
            *ram++ = *buf++;
        } while (--n >= 0);
    }
}
