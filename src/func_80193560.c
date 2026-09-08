#include "common.h"
void func_80193560(u32 *a0, s32 a1)
{
    /* clear a1 u32 cells (countdown from a1-1 to -1). */
    s32 v0 = a1 - 1;
    if (a1 != 0) {
        do {
            *a0++ = 0;
        } while (--v0 != -1);
    }
}
