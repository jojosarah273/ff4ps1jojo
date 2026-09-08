#include "common.h"
u32 func_80198600(u32 a0, u32 a1)
{
    u32 m = 0x7FFFFFFF;
    return (a0 == a1) ? 0 : (((a0 & m) != 0) || ((a1 & m) != 0));
}
