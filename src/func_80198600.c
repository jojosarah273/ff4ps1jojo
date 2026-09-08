#include "common.h"
u32 func_80198600(u32 a0, u32 a1)
{
    u32 v = 1;
    if (a0 == a1 || ((a0 & 0x7FFFFFFFu) == 0 && (a1 & 0x7FFFFFFFu) == 0))
        v = 0;
    return v;
}
