#include "common.h"
extern u8 *D_8019ED40;
extern u32 *D_8019ED50;
void func_800F5CCC(void) { *D_8019ED40 = *D_8019ED40 - 1; *D_8019ED50 = *D_8019ED40; }
