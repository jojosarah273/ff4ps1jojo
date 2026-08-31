#include "common.h"
extern u32 func_800F3C3C(void);
extern void func_800F5480(u32 v);
extern void func_800F6630(u32 v);
extern void func_800F7F48(u32 v);
extern void func_800F824C(u32 v);
extern void func_800F971C(u32 v);
void func_8014EDD0(void) { func_800F6630(0x8); func_800F824C(0x6); func_800F971C(); func_800F5480(); func_800F3C3C(0x8); func_800F7F48(func_800F3C3C()); func_800F824C(0x7); }
