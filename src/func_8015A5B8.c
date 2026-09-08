#include "common.h"
void func_8015A5B8(void)
{
    u8 *s = (u8 *)func_800F3C3C(0);
    s[0xA9] = 0;
    s[0xAA] = 0;
    if (*(u8 *)func_800F3B04(0x3558) != 0)
        s[0xA9] = 1;
    func_8015ABEC();
    func_8015A56C();
}
