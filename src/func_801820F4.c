#include "common.h"
void func_801820F4(void)
{
    /* battle anim: 80194640 row + v0 spin loops L18220C/L182200. */
    func_80194640();
    for (;;) {
        if (func_800F53D4() != 0)
            goto L18220C;
        if (func_800F53D4() != 0)
            continue;
        break;
    }
    goto L18225C;
L18220C:
    func_80194640();
    return;
L18225C:
    return;
}
