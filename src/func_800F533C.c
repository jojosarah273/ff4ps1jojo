#include "common.h"
extern u8 *D_8019ED40;
extern u16 *D_8019ED44;
extern u32 *D_8019ED50;
extern u8 *D_8019ED68;
u8 func_800F533C(u32 a0)
{
    /* window state (u16 variant): D50 <- a0&0xFFFF; merge 0xC000
       bits >> 8; mask with D44. */
    D_8019ED50[0] = a0 & 0xFFFF;
    D_8019ED68[0] &= 0x3D;
    D_8019ED68[0] |= ((D_8019ED50[0] & 0xC000) >> 8);
    D_8019ED50[0] &= D_8019ED44[0];
    if ((u16)D_8019ED50[0] == 0)
        D_8019ED68[0] |= 2;
    return D_8019ED68[0];
}
