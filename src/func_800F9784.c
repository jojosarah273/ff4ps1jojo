#include "common.h"
extern u16 *D_8019ED44;
extern u8 *D_8019ED68;
u8 func_800F9784(u8 *a0)
{
    /* window state (u16 clear): D68 &= 0xFD; flag if the
       D44-masked u16 from a0 == 0. */
    u16 v = (u16)(a0[0] | (a0[1] << 8));
    u16 mask = ~D_8019ED44[0];
    D_8019ED68[0] &= 0xFD;
    if ((v & mask) == 0)
        D_8019ED68[0] |= 2;
    return D_8019ED68[0];
}
