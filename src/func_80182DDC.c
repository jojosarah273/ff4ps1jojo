#include "common.h"
s32 func_80182DDC(u32 a0, s16 a1)
{
    s32 m = (s32)a0 * func_80197FB8(a1);
    return (s32)(m << 4) >> 16;
}
