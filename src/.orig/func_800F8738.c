#include "common.h"
extern u8 *D_8019ED5C;
extern u8 *func_800F3B04(u32 a0);
void func_800F8738(u32 a0) {
    u8 *dst = func_800F3B04(a0 + *D_8019ED5C);
    volatile u8 *port = (volatile u8 *)0x1F800000;
    *dst = port[0x3C8];
}
