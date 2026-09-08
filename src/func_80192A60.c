#include "common.h"
void func_80192A60(void)
{
    /* event: v0/v1 latch loop L192A88 on 80191620/80197798(3)/
       801977B8 rows. */
    if (func_800F53D4() == 0)
        goto L192AE8;
    for (;;) {
        /* v0/v1 latch -> L192AD0 */
        func_80191620();
        func_80197798(3);
        func_801977B8();
        goto L192AE8;
    L192AD0:
        if (func_800F53D4() != 0)
            continue;
        break;
    }
    return;
L192AE8:
    return;
}
