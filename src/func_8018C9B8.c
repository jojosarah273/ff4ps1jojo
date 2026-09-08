#include "common.h"
extern s16 *D_8019B12C;
extern u32 D_8019B13C;
u32 func_8018C9B8(u32 a0)
{
    if (!((u32)0x7EFE8 < (a0 - 0x1010)))
        return 0;
    *D_8019B12C = (s16)func_8018AB08(-1);
    return ((u32)(u16)*D_8019B12C << D_8019B13C);
}
