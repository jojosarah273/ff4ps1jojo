#include "common.h"
extern u32 *D_8019ED50;
void func_800F6048(u8 *p) {
    u8 v = *p + 1;
    *p = v;
    *D_8019ED50 = v;
}
