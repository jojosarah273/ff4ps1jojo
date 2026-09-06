#include "common.h"
extern u8 *D_8019ED60;
extern u8 *func_800F3CC4(u32 a0, u8 a1);
void func_800F8B68(u32 a0) {
    u8 *dst = func_800F3CC4(0, *D_8019ED60);
    volatile u8 *port = (volatile u8 *)0x1F800000;
    *dst = port[0x3C8];
}
