#include "common.h"
extern u8 *D_8019ED68;
void func_800F63F8(void) { volatile u8 *r = (volatile u8 *)0x1F8003C0; u8 s = r[8]; u8 v = (r[0x13] & 0x7D) | (s & 0x80); if (s) v |= 0x2; *D_8019ED68 = v; }
