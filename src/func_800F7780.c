#include "common.h"
extern u32 *D_8019ED50;
void func_800F7780(u8 *p) {
    *D_8019ED50 = p[0];
    *D_8019ED50 |= (u32)p[1] << 8;
    u16 r = (u16)(*D_8019ED50 >> 1);
    p[0] = r;
    p[1] = r >> 8;
}
