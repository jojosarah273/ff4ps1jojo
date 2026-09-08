#include "common.h"
extern u8 *D_8019ED30;
void func_801048EC(void)
{
    if ((*(u8 *)func_800F3C3C(0) & 0x80) && *D_8019ED30 == 0)
        *D_8019ED30 = 1;
}
