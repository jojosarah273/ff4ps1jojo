#include "common.h"
extern u8 *D_8019ED5C;
extern u8 *D_8019ED40;
void func_800F4998(u32 a0)
{
    u8 *q = (u8 *)func_800F3B04(a0 + *D_8019ED5C);
    D_8019ED40[0] &= q[0];
    D_8019ED40[1] &= q[1];
}
