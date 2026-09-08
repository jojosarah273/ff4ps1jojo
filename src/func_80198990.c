#include "common.h"
extern u32 *D_8019ECF4;
extern u32 *D_8019ECF8;
u32 func_80198990(u32 a0, u32 a1)
{
    *D_8019ECF4 = a0;
    *D_8019ECF8 = a1;
    if (a0 == 0x21)
        func_80197648(0xF4000002, 0x301);
    else if (a0 == 0x22)
        func_80197648(0xF4000002, 0x302);
    return 0;
}
