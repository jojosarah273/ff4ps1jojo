#include "common.h"
void func_80195D98(void)
{
    /* event: 80196898 gate; 801968CC spin rows (L195E9C/L195F48);
       s0/v0 + s0/v1 latch loops; returns at L195FF8. */
    if (func_80196898() == 0)
        goto L195DF8;
    goto L195DF8;
L195DF8:
    if (func_800F53D4() == 0)
        goto L195E38;
    goto L195E34;
L195E34:
    goto L195FF8;
L195E38:
    goto L195FF8;
L195E6C:
    for (;;) {
        func_801968CC();
        if (func_800F53D4() != 0)
            break;
        if (func_800F53D4() != 0)
            continue;
        goto L195E9C;
    }
    /* s0/v0 + s0/v1 latch loops L195F88/L195FA8 */
    return;
L195FF8:
    return;
}
