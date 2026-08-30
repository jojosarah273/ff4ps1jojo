#include "common.h"
extern u16 *D_8019ED58;
extern u8 *func_800F3CC4(u32 a0, u16 a1);
void func_800F8B98(u32 a0) {
    u8 *dst = func_800F3CC4(0, *D_8019ED58);
    volatile u8 *port = (volatile u8 *)0x1F800000;
    *dst = port[0x3C8];
}
