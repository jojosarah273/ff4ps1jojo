#include "common.h"
extern u8 *D_8019ED68;
extern u8 *D_8019ED5C;
void func_800F7084(void) { u8 d = *D_8019ED68; u8 s = *D_8019ED5C; u8 v = (d & 0x7D) | (s & 0x80); if (s) v |= 0x2; *D_8019ED68 = v; }
