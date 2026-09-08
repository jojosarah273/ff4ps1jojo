#include "common.h"
void func_800F6F50(void)
{
    u8 *p = (u8 *)func_800F3C94(0);
    ((volatile u8 *)0x1F8003C0u)[8] = p[0];
    ((volatile u8 *)0x1F8003C0u)[9] = p[1];
}
