#include "common.h"
extern u8 *D_8019ED60;
extern u8 *func_800F3B04(void);
void func_800F750C(void) { *D_8019ED60 = *func_800F3B04(); }
