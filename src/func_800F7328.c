#include "common.h"
extern u8 *D_8019ED60;
extern u8 *D_8019ED5C;
void func_800F7328(u32 a0)
{
    *D_8019ED5C = *(u8 *)func_800F3B04(a0 + *D_8019ED60);
}
