#include "common.h"
extern u16 *D_8019ED44;
extern u32 *D_8019ED50;
extern u8 *D_8019ED68;
u8 func_800F521C(u8 *a0)
{
    /* window load u16: D50 <- u16(a0); flag merge (0x3D/0xC000/2). */
    D_8019ED50[0] = (u32)(a0[0] | (a0[1] << 8));
    D_8019ED68[0] &= 0x3D;
    D_8019ED68[0] |= ((D_8019ED50[0] & 0xC000) >> 8);
    D_8019ED50[0] &= D_8019ED44[0];
    if ((u16)D_8019ED50[0] == 0)
        D_8019ED68[0] |= 2;
    return D_8019ED68[0];
}
