#include "common.h"
extern u16 *D_8019ED58;
extern u8 *D_8019ED5C;
void func_800F7358(u32 a0)
{
    u8 *q = (u8 *)func_800F3B04(a0 + *D_8019ED58);
    D_8019ED5C[0] = q[0];
    D_8019ED5C[1] = q[1];
}
