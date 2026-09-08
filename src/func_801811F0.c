#include "common.h"
void func_801811F0(void)
{
    /* battle anim: v0 gates; 80180BB4 row loop L1812B0. */
    if (func_800F53D4() != 0)
        goto L181240;
    goto L181240;
L181240:
    if (func_800F53D4() == 0)
        goto L1812E4;
    do {
        if (func_80180BB4() == 0)
            goto L1812E4;
    } while (func_800F53D4() != 0);
    return;
L1812E4:
    return;
}
