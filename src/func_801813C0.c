#include "common.h"
void func_801813C0(void)
{
    /* battle anim: v0 gates; 801808D8 row loop L181450. */
    if (func_800F53D4() != 0)
        goto L1813F8;
    goto L1813F8;
L1813F8:
    if (func_800F53D4() == 0)
        goto L181480;
    do {
        if (func_801808D8() == 0)
            goto L181480;
    } while (func_800F53D4() != 0);
    return;
L181480:
    return;
}
