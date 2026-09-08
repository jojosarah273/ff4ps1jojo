#include "common.h"
extern u8 *D_8019ED5C;
void func_800F9114(u32 a0)
{
    u8 *q = (u8 *)func_800F3B04(a0 + *D_8019ED5C);
    q[0] = 0;
    q[1] = 0;
}
