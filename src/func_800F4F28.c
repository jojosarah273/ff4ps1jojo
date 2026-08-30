#include "common.h"
extern u32 *volatile D_8019ED50;
void func_800F4F28(u8 *p) {
    *D_8019ED50 = (u32)*p << 1;
    *p = *(u8 *)D_8019ED50;
}
