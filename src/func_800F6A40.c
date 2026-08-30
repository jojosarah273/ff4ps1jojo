#include "common.h"
extern u8 *D_8019ED5C;
extern u8 *extern u8 *func_800F3C3C(u32 a0);
void func_800F6A40(u32 a0) {
    u32 base = func_800F3C3C(a0);
    volatile u8 *port = (volatile u8 *)0x1F800000;
*port = *(u8 *)(base + *D_8019ED5C);
}
