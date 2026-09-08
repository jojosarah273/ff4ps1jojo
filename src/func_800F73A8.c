#include "common.h"
extern u8 *D_8019ED68;
extern u8 *D_8019ED60;
void func_800F73A8(void)
{
    u8 x = *D_8019ED68;
    u8 y = *D_8019ED60;
    u8 r = (x & 0x7D) | (y & 0x80);
    if (y != 0)
        ;
    else
        r = (x & 0x7D) | 0x2;
    *D_8019ED68 = r;
}
