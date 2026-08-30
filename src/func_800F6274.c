#include "common.h"
extern u8 *func_800F3B04(void);
void func_800F6274(void) {
    u8 *p = func_800F3B04();
    s32 w = p[0] | (p[1] << 8);
    w += 1;
    p[0] = w;
    p[1] = (u8)(w >> 8);
}
