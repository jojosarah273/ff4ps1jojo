#include "common.h"
extern u16 *D_8019ED54;
extern u8 *D_8019ED60;
void func_800F767C(u32 a0)
{
    u8 *q = (u8 *)func_800F3B04(a0 + *D_8019ED54);
    D_8019ED60[0] = q[0];
    D_8019ED60[1] = q[1];
}
