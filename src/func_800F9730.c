#include "common.h"
extern u8 *D_8019ED40;
extern u8 *D_8019ED68;
u8 func_800F9730(u8 *a0)
{
    /* window state (clear): clear D40-masked bits of *a0; flag. */
    a0[0] &= ~D_8019ED40[0];
    D_8019ED68[0] &= 0xFD;
    if (a0[0] == 0)
        D_8019ED68[0] |= 2;
    return D_8019ED68[0];
}
