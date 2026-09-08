#include "common.h"
void func_80180414(void)
{
    /* battle anim (twin): spin loops then 80194640. */
L180438:
    for (;;) {
        if (func_800F53D4() != 0)
            goto L180450;
        if (func_800F53D4() != 0)
            continue;
        break;
    }
    func_80194640();
    return;
L180450:
    if (func_800F53D4() != 0)
        goto L180450;
    goto L180438;
}
