#include "common.h"
void func_800F88E4(void)
{
    u8 *p = (u8 *)func_800F3B9C;
    p[0] = ((volatile u8 *)0x1F8003C0u)[8];
    p[1] = ((volatile u8 *)0x1F8003C0u)[9];
}
