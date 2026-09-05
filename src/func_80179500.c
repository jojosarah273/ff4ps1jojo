#include "common.h"
void func_80179500(void) {
    u32 *p = (u32 *)0x80014000;
    u32 i;
    for (i = 0; i <= 0x177FF; i++) {
        u32 a = p[0];
        u32 b = p[1];
        p[0] = b;
        p[1] = a;
        p += 2;
    }
}
