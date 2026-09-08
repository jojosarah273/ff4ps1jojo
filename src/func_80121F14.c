#include "common.h"
extern u16 *D_8019ED54;
void func_80121F14(void)
{
    do {
        func_800F8768(0);
        *D_8019ED54 = (u16)(*D_8019ED54 + 2);
        func_800F5DA0(0x1D);
    } while (func_800F5B8C(0x202) != 0);
}
