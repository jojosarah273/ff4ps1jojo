#include "common.h"
extern u8 *D_8019ED40;
extern u8 *func_800F3B04(void);
void func_800F4280(void) { *D_8019ED40 &= *func_800F3B04(); }
