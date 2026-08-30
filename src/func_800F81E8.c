#include "common.h"
extern u8 *func_800F3B9C(void);
void func_800F81E8(void) { *(u8 *)func_800F3B9C() = *(volatile u8 *)0x1F8003C8; }
