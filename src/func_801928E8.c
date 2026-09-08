#include "common.h"
void func_801928E8(void)
{
    /* event: v1/v0 spin loop L19290C; a0/v0 latches; 2x 80192A60
       rows with spin loops; returns at L192A4C. */
    for (;;) {
        if (func_800F53D4() != 0)
            continue;
        break;
    }
    /* a0/v0 latch -> L192A48 / L19298C */
    func_80192A60();
    func_80192A60();
    if (func_800F53D4() != 0)
        goto L1929F4;
    return;
L1929F4:
    for (;;) {
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
L192A48:
    return;
}
