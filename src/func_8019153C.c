#include "common.h"
void func_8019153C(void)
{
    /* event: 80190098 poll loop L191570; returns at L1915E8. */
L191570:
    if (func_80190098() == 0)
        goto L1915B4;
    if (func_800F53D4() == 0)
        goto L1915B0;
    goto L191570;
L1915B0:
    return;
L1915B4:
    if (func_800F53D4() == 0)
        goto L191570;
    if (func_800F53D4() == 0)
        goto L191570;
    goto L191570;
L1915E8:
    return;
}
