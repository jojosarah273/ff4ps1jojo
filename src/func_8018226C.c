#include "common.h"
void func_8018226C(void)
{
    /* battle anim: v0 spin loops (L1822D4/L1822EC); 80194640 row at
       L182388 gated by L182350; returns at L1823D0. */
    for (;;) {
        if (func_800F53D4() != 0)
            continue;
        break;
    }
    if (func_800F53D4() != 0)
        goto L182388;
    /* spin loops -> L182364/L1823B0 */
L1823B0:
    if (func_800F53D4() != 0)
        goto L182364;
    if (func_800F53D4() != 0)
        goto L182350;
    if (func_800F53D4() == 0)
        goto L1823D0;
    func_80194640();
    return;
L182388:
    func_80194640();
    return;
L182364:
    goto L1823B0;
}
