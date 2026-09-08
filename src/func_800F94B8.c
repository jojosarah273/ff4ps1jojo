#include "common.h"
extern u16 *D_8019ED48;
extern u16 *D_8019ED4C;
extern u8 *D_8019ED68;
u16 func_800F94B8(void)
{
    /* window cursor: reads the u16 table entry at 0x800D0000 + idx,
       sets flags, advances idx by 2. */
    u8 f = D_8019ED68[0];
    u16 idx = D_8019ED4C[0];
    u8 *p = (u8 *)(0x800D0000 + idx);
    u16 v = (u16)(p[1] << 8) | p[2];
    if (v & 0x8000) {
        f &= 0x7D;
        f |= 0x80;
    }
    if (v == 0)
        f |= 2;
    D_8019ED48[0] = v;
    D_8019ED68[0] = f;
    D_8019ED4C[0] = idx + 2;
    return idx + 2;
}
