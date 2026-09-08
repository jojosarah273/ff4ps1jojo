#include "common.h"
extern u8 *D_8019ED68;
extern u8 *D_8019ED60;
extern u16 *D_8019ED58;
u8 func_800F7494(u32 a0)
{
    u8 x = *D_8019ED68;
    u8 r = (u8)((x & 0x7D) | (D_8019ED60[1] & 0x80));
    if (*D_8019ED58 != 0)
        r &= 0xFF;
    else
        r = (u8)((x & 0x7D) | 0x2);
    *D_8019ED68 = r;
    return (u8)((r & (u8)a0) ^ ((s32)a0 >> 8));
}
