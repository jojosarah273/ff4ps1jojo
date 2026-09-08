#include "common.h"
void func_80180504(void)
{
    /* battle anim (twin): spin loops then 80194640. */
L180524:
    for (;;) {
        if (func_800F53D4() != 0)
            goto L180534;
        if (func_800F53D4() != 0)
            continue;
        break;
    }
    func_80194640();
    return;
L180534:
    if (func_800F53D4() != 0)
        goto L180534;
    goto L180524;
}
