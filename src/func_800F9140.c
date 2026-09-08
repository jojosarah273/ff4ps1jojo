#include "common.h"
extern u16 *D_8019ED54;
void func_800F9140(u32 a0)
{
    u8 *q = (u8 *)func_800F3B04(a0 + *D_8019ED54);
    q[0] = 0;
    q[1] = 0;
}
