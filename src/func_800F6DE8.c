#include "common.h"
extern u8 *D_8019ED58;
extern void func_800F3B04(u32 a0);
void func_800F6DE8(u32 a0) { func_800F3B04(a0 + *D_8019ED58); }
