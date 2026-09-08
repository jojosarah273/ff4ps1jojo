#include "common.h"
void func_80180314(void)
{
    /* battle anim: v0 spin loops (L180338/L180350) then 80194640. */
L180338:
    for (;;) {
        if (func_800F53D4() != 0)
            goto L180350;
        if (func_800F53D4() != 0)
            continue;
        break;
    }
    func_80194640();
    return;
L180350:
    if (func_800F53D4() != 0)
        goto L180350;
    goto L180338;
}
