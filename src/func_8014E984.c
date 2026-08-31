#include "common.h"
extern void func_80072720(u32 v);
extern void func_800F6630(u32 v);
extern void func_800F824C(u32 v);
extern void func_8014E9C4(u32 v);
void func_8014E984(void) { func_800F824C(0x26); func_8014E9C4(); func_800F824C(0x28); func_80072720(); func_800F6630(0x2B); }
