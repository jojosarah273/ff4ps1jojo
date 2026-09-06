#include "common.h"
extern u32 *D_8019ED50;
extern u8 *func_800F3C3C(u16 a0);
void func_800F5DA0(u16 a0) { u8 *p = func_800F3C3C(a0); u8 v = *p - 1; *p = v; *D_8019ED50 = v; }
