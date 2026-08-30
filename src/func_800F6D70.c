#include "common.h"
extern u16 *D_8019ED58;
extern u8 *func_800F3B04(u32 a0);
void func_800F6D70(u32 a0) {
    u8 *src = func_800F3B04(a0 + *D_8019ED58);
    volatile u8 *port = (volatile u8 *)0x1F800000;
    *port = src[0x3C8];
}
