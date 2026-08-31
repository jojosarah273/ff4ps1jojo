#include "common.h"
extern u32 func_800F3A70(void);
extern u32 func_800F3B04(void);
extern void func_800F3F38(u32 v);
extern void func_800F54B8(u32 v);
extern void func_800F94B8(u32 v);
void func_80172998(void) { func_800F94B8(); func_800F54B8(); func_800F3A70(0x2D); func_800F3B04(func_800F3A70()); func_800F3F38(func_800F3B04()); func_800F94B8(); }
