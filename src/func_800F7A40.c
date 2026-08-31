#include "common.h"
extern u8 *D_8019ED68;
extern u32 *D_8019ED50;
void func_800F7A40(u8 *p) { u8 v = (*D_8019ED68 & 0x1) + (p[0] << 1); p[0] = v; *D_8019ED50 = v; }
