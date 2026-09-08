#include "common.h"
extern u32 *D_8019B14C;
extern u32 *D_8019B148;
u32 func_8018C7F8(u32 a0, u32 a1)
{
    u32 s0 = a1;
    if ((u32)0x7EFF0 < s0)
        s0 = 0x7EFF0;
    func_8018A9DC(a0, s0);
    if (*D_8019B14C == 0)
        *D_8019B148 = 0;
    return s0;
}
