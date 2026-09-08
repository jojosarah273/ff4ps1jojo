#include "common.h"
void func_8010B5DC(void)
{
    /* battle: 3C3C/3B04 gates; v0 run to L10B6D0. */
    func_800F3C3C();
    func_800F3B04();
    if (func_800F53D4() == 0)
        goto L10B6AC;
    if (func_800F53D4() != 0)
        goto L10B6D0;
    return;
L10B6AC:
    return;
L10B6D0:
    return;
}
