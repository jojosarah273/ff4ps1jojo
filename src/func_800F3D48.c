#include "common.h"
void func_800F3D48(void) {
    volatile u8 *r = (volatile u8 *)0x1F8003C0;
    u8 b = r[9];
    u8 a = r[8];
    r[8] = b;
    r[9] = a;
}
