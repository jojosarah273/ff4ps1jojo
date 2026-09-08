#include "common.h"
void func_800F6EDC(void)
{
    u8 *p = (u8 *)func_800F3B9C;
    ((volatile u8 *)0x1F8003C0u)[0] = p[0];
    ((volatile u8 *)0x1F8003C0u)[1] = p[1];
}
