#include "common.h"
extern u8 *func_800F3B9C(void);
void func_800F65C8(void) { *(volatile u8 *)0x1F8003C8 = *(u8 *)func_800F3B9C(); }
