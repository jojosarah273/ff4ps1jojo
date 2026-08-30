#include "common.h"
extern u8 *func_800F3B04(void);
void func_800F6564(void) { *(volatile u8 *)0x1F8003C8 = *(u8 *)func_800F3B04(); }
