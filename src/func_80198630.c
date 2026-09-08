#include "common.h"
void func_80198630(void)
{
    /* event: v0 gates; 80198990(0x22) row; returns L1986C4. */
    if (func_800F53D4() != 0)
        goto L198650;
    goto L198648;
    func_80198990(0x22);
    return;
L198650:
    func_80198990(0x22);
    goto L1986C4;
L198648:
    goto L1986C4;
L1986C4:
    return;
}
