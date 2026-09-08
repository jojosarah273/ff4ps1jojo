#include "common.h"
void func_800F658C(void)
{
    u8 *p = (u8 *)func_800F3B04();
    ((volatile u8 *)0x1F8003C0u)[8] = p[0];
    ((volatile u8 *)0x1F8003C0u)[9] = p[1];
}
