#include "common.h"
void func_8016B68C(void)
{
    /* battle prep: 0x118 x 0xF0 bytes at buffer(0x300). */
    u8 *buf = (u8 *)func_800F3B04(0x300);
    s32 i;
    for (i = 0; i < 0x118; i++)
        buf[i] = 0xF0;
}
