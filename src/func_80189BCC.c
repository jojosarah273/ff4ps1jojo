#include "common.h"
void func_80189BCC(void)
{
    /* event: 8018CB88 row; v0 gates; returns at L189C24. */
    func_8018CB88();
    if (func_800F53D4() == 0)
        goto L189C10;
    return;
L189C10:
    if (func_800F53D4() == 0)
        goto L189C24;
    return;
L189C24:
    return;
}
