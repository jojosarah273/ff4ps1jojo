#include "common.h"
extern u16 *D_8019ED44;
extern u32 *D_8019ED50;
void func_800F516C(void) { *D_8019ED50 = *D_8019ED44 << 1; *D_8019ED44 = *D_8019ED50; }
