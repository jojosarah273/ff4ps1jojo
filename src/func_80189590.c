#include "common.h"
extern u32 *D_8019EF88;
extern u32 *D_8019ED28;
extern u32 *D_8019EF40;
u32 func_80189590(u32 a0)
{
    u32 r = func_801917F8(1, 0);
    if (r == 2) {
        u32 idx = *D_8019EF88;
        *(s16 *)((u8 *)*D_8019ED28 + idx * 16) = -1;
        *D_8019EF88 = (*D_8019EF88 == *D_8019EF40) ? *D_8019EF88 : (*D_8019EF88 + 1);
        return 0;
    }
    if (r == 5)
        return 0;
    return a0;
}
