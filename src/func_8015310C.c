#include "common.h"
extern u8 *D_8019ED40;
void func_8015310C(void)
{
    /* rows: buffer[0x1530:31] s16 + D40[0] -> stored back at
       0x1598:99. */
    u8 *buf = (u8 *)func_800F3B04(0x2000);
    u16 v = (u16)(buf[0x1530] | (buf[0x1531] << 8));
    v += D_8019ED40[0];
    buf[0x1598] = v & 0xFF;
    buf[0x1599] = v >> 8;
}
