#include "common.h"
extern u16 *D_8019ED58;
void func_800F8960(u32 a0)
{
    u8 *q = (u8 *)func_800F3B04(a0 + *D_8019ED58);
    *q = *(volatile u8 *)0x1F8003C8u;
}
