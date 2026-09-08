#include "common.h"
extern u8 *D_8019ED60;
void func_800F8930(u32 a0)
{
    u8 *q = (u8 *)func_800F3B04(a0 + *D_8019ED60);
    *q = *(volatile u8 *)0x1F8003C8u;
}
