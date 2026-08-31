#include "common.h"
extern u8 *volatile D_8019ED5C;
void func_800F8C5C(u8 *p) { p[0] = D_8019ED5C[0]; p[1] = D_8019ED5C[1]; }
