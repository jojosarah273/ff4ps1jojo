#include "common.h"
extern u8 *D_8019EE84;
extern u8 *D_8019EE88;
void func_8017BDB0(void)
{
    u8 x = *D_8019EE84;
    u8 r = (u8)((x & 0x7) | (*D_8019EE88 & 0x1000));
    if (*D_8019EE88 == 0)
        r = (u8)((x & 0x7) | 0xFF);
    else
        r &= 0xFF;
    *D_8019EE84 = r;
}
