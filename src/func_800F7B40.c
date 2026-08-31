#include "common.h"
extern u8 *D_8019ED68;
extern u32 *D_8019ED50;
void func_800F7B40(u8 *p) { s32 v = ((p[0] | (p[1] << 8)) << 1) | (*D_8019ED68 & 1); p[0] = v; p[1] = (u8)(v >> 8); *D_8019ED50 = v; }
