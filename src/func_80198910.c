#include "common.h"
u32 func_80198910(u32 a0, u32 a1)
{
    if ((a1 & 0x7FFFFFFF) != 0) {
        if ((a0 & 0x7FFFFFFF) == 0)
            return func_80198970(a1);
        return func_80198300(a0, a1 ^ 0x80000000);
    }
    return a0;
}
