#include "common.h"
extern u32 D_8019CF14[16];
void func_8019328C(u32 a0, u32 a1)
{
    if (a1 != D_8019CF14[a0])
        D_8019CF14[a0] = a1;
}
