#include "common.h"
extern u8 *D_8019ED40;
extern u8 *D_8019ED68;
u8 func_800F97D0(u8 *a0)
{
    /* window state (set): *a0 |= D40; clear flag bits. */
    a0[0] |= D_8019ED40[0];
    D_8019ED68[0] &= 0xFD;
    if (a0[0] == 0)
        D_8019ED68[0] |= 2;
    return D_8019ED68[0];
}
