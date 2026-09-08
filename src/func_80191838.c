#include "common.h"
extern u32 D_8019B9EC[8];
void func_80191838(u32 a0)
{
    u32 tmp = D_8019B9EC[0];
D_8019B9EC[0] = a0;
    return tmp;
}
