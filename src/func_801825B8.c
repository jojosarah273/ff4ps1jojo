#include "common.h"
void func_801825B8(void)
{
    /* battle anim: v1/v0 + v0 gates; spin loops L182608/L18266C. */
    if (func_800F53D4() != 0)
        goto L182668;
    if (func_800F53D4() != 0)
        goto L182668;
    return;
L182668:
    for (;;) {
        if (func_800F53D4() != 0)
            goto L182668;
        break;
    }
    return;
}
