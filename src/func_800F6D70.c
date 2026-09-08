#include "common.h"
extern u16 *D_8019ED58;
void func_800F6D70(u32 a0)
{
    *(volatile u8 *)0x1F8003C8u = *(u8 *)func_800F3B04(a0 + *D_8019ED58);
}
