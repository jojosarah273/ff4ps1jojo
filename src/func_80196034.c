#include "common.h"
extern u32 *D_8019DC5C;
extern u32 *D_8019DC58;
u32 func_80196034(u32 *src, s32 n)
{
    *D_8019DC5C = 0x4000000;
    if (n == 0)
        return 0;
    s32 i = n - 1;
    do {
        *D_8019DC58 = *src++;
    } while (i-- != -1);
    return 0;
}
