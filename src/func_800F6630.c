#include "common.h"
extern u8 *func_800F3C3C(u32 a0);
void func_800F6630(u32 a0) { *(volatile u8 *)0x1F8003C8 = *(u8 *)func_800F3C3C(a0); }
