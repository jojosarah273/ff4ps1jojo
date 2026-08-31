#include "common.h"
extern u8 *volatile D_8019ED40;
void func_800F8160(u8 *p) { p[0] = D_8019ED40[0]; p[1] = D_8019ED40[1]; }
