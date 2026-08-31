#include "common.h"
extern u8 *D_8019ED68;
extern u16 *D_8019ED44;
void func_800F9820(u8 *p) {
    s32 w = p[0] | (p[1] << 8);
    *D_8019ED68 &= 0xFD;
    u16 c = *D_8019ED44;
    u8 v = *D_8019ED68;
    if (c | w) v |= 0x2;
    *D_8019ED68 = v;
}
