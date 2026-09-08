#include "common.h"
extern u8 *D_8019ED5C;
void func_800F6B38(u32 a0)
{
    u8 v = *D_8019ED5C;
    func_800F3B04(a0 + v);
    *(volatile u8 *)0x1F8003C8u = *D_8019ED5C;
}
