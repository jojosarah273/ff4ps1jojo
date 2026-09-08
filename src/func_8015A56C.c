#include "common.h"
void func_8015A56C(void)
{
    /* options: s16 cursor from buf[0xAB:AC], sign-clean 0x8000,
       latched into buf[0xD4:D5]. */
    u8 *p = (u8 *)func_800F3C3C(0);
    u16 v = (u16)(p[0xAB] | (p[0xAC] << 8));
    if (v & 0x8000)
        v = 0;
    p[0xD4] = v & 0xFF;
    p[0xD5] = v >> 8;
}
