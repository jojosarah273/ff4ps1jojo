#include "common.h"
extern u8 *func_800F3B9C(void);
void func_800F65C8(void) {
    u8 *src = func_800F3B9C();
volatile u8 *port = (volatile u8 *)0x1F800000;
*port = src[0x3C8];
}
