#include "common.h"
extern u8 *D_8019ED54;
extern u8 *func_800F3B04(u32 a0);
void func_800F9140(u32 a0) { *(u8 *)func_800F3B04(a0 + *D_8019ED54) = 0; }
