#include "common.h"
extern u16 *D_8019ED54;
extern u8 *func_800F3C3C(u32 a0);
void func_800F6A78(u32 a0) {
    volatile u8 *port;
    u8 *base;
    base = func_800F3C3C(a0 & 0xFFFF);
    port = (volatile u8 *)0x1F800000;
    port[0x3C8] = base[*D_8019ED54];
}
