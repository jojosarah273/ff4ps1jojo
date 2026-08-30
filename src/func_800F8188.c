#include "common.h"
extern u8 *func_800F3B04(void);
void func_800F8188(void) { *(u8 *)func_800F3B04() = *(volatile u8 *)0x1F8003C8; }
