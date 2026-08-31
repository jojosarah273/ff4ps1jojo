#include "common.h"
extern u8 *D_8019ED68;
extern u32 *D_8019ED50;
void func_800F7DDC(u8 *p) {
    s32 v = (p[0] | (p[1] << 8)) | ((*D_8019ED68 & 0x1) << 16);
    u16 r = (u16)(v >> 1);
    p[0] = r;
    p[1] = r >> 8;
    *D_8019ED50 = v;
}
