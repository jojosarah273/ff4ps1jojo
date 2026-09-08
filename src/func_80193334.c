#include "common.h"
extern u32 **D_D_8019CF44;
u32 func_80193334(void)
{
    return ((u32(*)(void))D_D_8019CF44[0])() >> 24;
}
