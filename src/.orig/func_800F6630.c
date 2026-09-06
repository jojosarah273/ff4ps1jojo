#include "common.h"
extern u8 *func_800F3C3C(u32 a0);
void func_800F6630(u32 a0) {
    u8 *src = func_800F3C3C(a0);
volatile u8 *port = (volatile u8 *)0x1F800000;
*port = src[0x3C8];
}
