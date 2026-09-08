#include "common.h"
extern u8 *D_8019ED60;
extern u8 *D_8019ED40;
void func_800F4B78(u32 a0)
{
    *D_8019ED40 &= *(u8 *)func_800F3B04(a0 + *D_8019ED60);
}
