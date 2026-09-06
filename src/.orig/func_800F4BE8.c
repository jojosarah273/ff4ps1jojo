#include "common.h"
extern u8 *D_8019ED60;
extern void func_800F3B04(u32 a0);
void func_800F4BE8(u32 a0) { func_800F3B04(a0 + *D_8019ED60); }
