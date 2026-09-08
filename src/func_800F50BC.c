#include "common.h"
extern u32 *D_8019ED50;
extern u8 *D_8019ED68;
u8 func_800F50BC(u32 a0)
{
    /* window flags: repack D68 status bits from D50 state; xor the
       latched byte with a0's high byte. */
    u8 f = D_8019ED68[0] & 0x7C;
    if (D_8019ED50[0] & 0x10000)
        f |= 1;
    if (D_8019ED50[0] & 0x8000)
        f |= 0x80;
    if ((u16)D_8019ED50[0] == 0)
        f |= 2;
    D_8019ED68[0] = f;
    return (u8)((f & (u8)a0) ^ (u8)((s32)a0 >> 8));
}
