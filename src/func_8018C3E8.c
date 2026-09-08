#include "common.h"
extern u32 *D_8019B0B0;
extern u32 *D_8019B0AC;
u32 func_8018C3E8(u32 a0)
{
    u32 r = 0;
    if (a0 != 0 && func_8018B9A8(*D_8019B0B0) == 0)
        r = 1;
    *D_8019B0AC = r;
    return r;
}
