#include "common.h"
extern u32 *D_8019ED28;
void func_80189698(void) { u16 *p = (u16 *)(*D_8019ED28 + 0x3F0); s32 i = 0x3F; do { *p = -1; p -= 8; i--; } while (i >= 0); }
