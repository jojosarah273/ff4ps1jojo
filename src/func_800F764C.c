#include "common.h"
extern u8 *D_8019ED5C;
extern u8 *D_8019ED60;
void func_800F764C(u32 a0)
{
    *D_8019ED60 = *(u8 *)func_800F3B04(a0 + *D_8019ED5C);
}
