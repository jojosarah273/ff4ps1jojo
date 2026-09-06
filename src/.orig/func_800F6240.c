#include "common.h"
extern u32 *D_8019ED50;
extern u8 *func_800F3B04(void);
void func_800F6240(void) { u8 *p = func_800F3B04(); u8 v = *p + 1; *p = v; *D_8019ED50 = v; }
