#include "common.h"
void func_80193560(u32 *a0, s32 a1)
{
    /* clear a1 u32 cells. */
    while (a1-- > 0)
        *a0++ = 0;
}
