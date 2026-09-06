#include "common.h"
extern u32 *D_8019B128;
void func_8018AC68(void) { *D_8019B128 = (*D_8019B128 & 0xF0FFFFFF) | 0x22000000; }
