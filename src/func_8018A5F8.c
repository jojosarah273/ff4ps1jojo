#include "common.h"
void func_8018A5F8(void)
{
    /* event: 8018AC90 + v0 spins; 80197648 tail row. */
    if (func_800F53D4() != 0)
        goto L18A614;
    func_8018AC90();
L18A614:
    for (;;) {
        if (func_800F53D4() == 0)
            goto L18A668;
        if (func_800F53D4() != 0)
            continue;
        break;
    }
L18A668:
    if (func_800F53D4() == 0)
        goto L18A6A4;
    func_80197648();
    return;
L18A6A4:
    return;
}
