#include "common.h"
extern u16 *D_8019ED54;
extern u8 *D_8019ED40;
void func_800F49E8(u32 a0)
{
    *D_8019ED40 &= *(u8 *)func_800F3B04(a0 + *D_8019ED54);
}
