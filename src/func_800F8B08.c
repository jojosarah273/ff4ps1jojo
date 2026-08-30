#include "common.h"
extern u8 *func_800F3C94(void);
void func_800F8B08(void) { *(u8 *)func_800F3C94() = *(volatile u8 *)0x1F8003C8; }
