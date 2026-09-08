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
    /* v0 gate at L195E6C: 801968CC spin rows until v0 != 0 */
    do {
        if (func_801968CC() != 0)
            goto L195FF8;
    } while (func_800F53D4() != 0);
    goto L195FF8;
L195FF8:
    return;
}
