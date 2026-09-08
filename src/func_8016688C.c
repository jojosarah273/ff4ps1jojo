#include "common.h"
void func_8016688C(void)
{
    u8 *b = (u8 *)func_800F3B04(0x8000);
    u16 i;
    for (i = 0; i < 8; i = (u16)(i + 1)) {
        u8 x = b[i + 0x9B5];
        u8 y = b[i + 0x7123];
        b[i + 0x712B] = x;
        b[i + 0x9B5] = y;
    }
}
