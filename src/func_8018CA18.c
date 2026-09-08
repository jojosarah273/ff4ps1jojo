#include "common.h"
extern u32 D_8019B0A4[8];
extern u32 D_8019B130[8];
void func_8018CA18(u32 a0)
{
    D_8019B0A4[0] = a0;
    D_8019B130[0] = (a0 == 1);
}
