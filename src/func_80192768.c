#include "common.h"
extern u8 *D_8019BDD4;
extern u8 *D_8019BDD8;
extern u32 *D_8019BDDC;
extern u32 *D_8019BDE0;
extern u32 *D_8019BDE4;
extern u32 *D_8019BDE8;
extern u32 *D_8019BDEC;
extern u32 *D_8019BDF0;
s32 func_80192768(u32 a0, u32 a1)
{
    /* device command chain (variant): same handshake, 0x11400100
       kick, no completion poll. */
    *D_8019BDD4 = 0;
    *D_8019BDD8 = 0x80;
    *D_8019BDE0 = 0x21020843;
    *D_8019BDDC = 0x1325;
    *D_8019BDE4 |= 0x8000;
    *D_8019BDEC = a0;
    *D_8019BDF0 = a1 | 0x10000;
    while ((*D_8019BDD4 & 0x40) == 0)
        ;
    *D_8019BDE8 = 0x11400100;
    return 0;
}
