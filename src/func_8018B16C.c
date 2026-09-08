#include "common.h"
u32 func_8018B16C(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 flag = (a2 & 0x40000000) != 0;
    if ((a2 & 0x0FFFFFFFu) < a0) {
        if (a1 != a3)
            return 2;
        return flag ? 2 : 1;
    }
    if (a1 != a3)
        return 1;
    return flag;
}
