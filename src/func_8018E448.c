#include "common.h"
extern u32 *D_8019B150;
u32 func_8018E448(u32 a0)
{
    u32 old = *D_8019B150;
    if (a0 != old) {
        *D_8019B150 = a0;
        func_8018E488();
    }
    return old;
}
