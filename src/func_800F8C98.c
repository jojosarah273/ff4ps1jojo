#include "common.h"
extern u8 *volatile D_8019ED60;
void func_800F8C98(u8 *p) { p[0] = D_8019ED60[0]; p[1] = D_8019ED60[1]; }
