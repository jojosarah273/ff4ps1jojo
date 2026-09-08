#include "common.h"
void func_800F8210(u32 a0)
{
    u8 *p = (u8 *)func_800F3B9C(a0, 0);
    p[0] = ((volatile u8 *)0x1F8003C0u)[8];
    p[1] = ((volatile u8 *)0x1F8003C0u)[9];
}
