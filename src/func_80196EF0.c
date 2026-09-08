#include "common.h"
void func_80196EF0(u8 *a0, u8 a1, s32 a2)
{
    /* fill a2 bytes with a1. */
    while (a2-- > 0)
        *a0++ = a1;
}
