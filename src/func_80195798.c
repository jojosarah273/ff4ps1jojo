#include "common.h"

void func_80195798(u32 a0, u32 a1)
{
    return (((a1 & 0x7FF) << 11) | ((a0 & 0x7FF) | 0xE50000000000));
}
