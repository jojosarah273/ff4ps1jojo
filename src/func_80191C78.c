#include "common.h"
extern u8 *D_8019BD74;
extern u8 *D_8019BD78;
extern u32 *D_8019BD7C;
extern u32 *D_8019BD80;
extern u32 *D_8019BD84;
extern u32 *D_8019BD88;
extern u32 *D_8019BD8C;
extern u32 *D_8019BD90;
s32 func_80191C78(u32 a0, u32 a1)
{
    /* device command chain: seed registers, poll the start flag,
       kick the DMA chain, then finalize. */
    *D_8019BD74 = 0;
    *D_8019BD78 = 0x80;
    *D_8019BD80 = 0x20943;
    *D_8019BD7C = 0x1323;
    *D_8019BD84 |= 0x8000;
    *D_8019BD8C = a0;
    *D_8019BD90 = a1 | 0x10000;
    while ((*D_8019BD74 & 0x40) == 0)
        ;
    *D_8019BD88 = 0x11000000;
    while (*D_8019BD88 & 0x1000000)
        ;
    *D_8019BD7C = 0x1325;
    return 0;
}
