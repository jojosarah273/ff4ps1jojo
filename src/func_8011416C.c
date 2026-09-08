#include "common.h"
void func_8011416C(void)
{
    u8 v = 0xAA;
    s32 i = 7;
    u8 *p = (u8 *)0x800D0507u;
    do {
        *p = v;
        p--;
    } while (--i >= 0);
}
