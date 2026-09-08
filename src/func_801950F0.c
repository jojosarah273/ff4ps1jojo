#include "common.h"
extern u32 **D_8019DB4C;
u32 func_801950F0(void)
{
    return ((u32(*)(void))D_8019DB4C[14])() >> 31;
}
