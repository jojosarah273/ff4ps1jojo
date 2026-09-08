#include "common.h"
u32 func_80191748(u32 a0)
{
    if (a0 == 2) {
        func_8019119C();
        return 1;
    }
    if (func_801911E8() != 0)
        return 0;
    if (a0 == 1)
        return func_801910AC() == 0;
    return 1;
}
