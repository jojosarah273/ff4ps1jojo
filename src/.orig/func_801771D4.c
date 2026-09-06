#include "common.h"
extern u32 func_800F3C3C(void);
extern void func_800F3F38(u32 v);
extern void func_800F4F4C(u32 v);
extern void func_800F5140(u32 v);
extern void func_800F824C(u32 v);
extern void func_801773D4(u32 v);
void func_801771D4(void) { func_800F5140(); func_800F824C(0x45); func_800F5140(); func_800F4F4C(); func_800F3C3C(0x45); func_800F3F38(func_800F3C3C()); func_801773D4(); }
