#include "common.h"
extern u8 *func_800F3C3C(u32 a0);
void func_800F824C(u32 a0) {
    u8 *dst = func_800F3C3C(a0);
volatile u8 *port = (volatile u8 *)0x1F800000;
*dst = port[0x3C8];
}
