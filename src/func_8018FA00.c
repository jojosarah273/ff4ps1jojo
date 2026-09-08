#include "common.h"
void func_8018FA00(void)
{
    /* event: s1/v0 + v0/s1 latches; 80190004(1)/80190078/80190088
       rows with 8018F0C8 polls; returns at L18FC9C. */
    if (func_80190004(1) != 0)
        goto L18FA74;
    func_8018F0C8();
    goto L18FC9C;
L18FA74:
    if (func_80190078() == 0)
        goto L18FAB4;
    func_8018F0C8();
    goto L18FC9C;
L18FAB4:
    if (func_80190004(1) != 0)
        goto L18FB0C;
    func_8018F0C8();
    goto L18FC9C;
L18FB0C:
    if (func_800F53D4() != 0)
        goto L18FB30;
    func_8018F0C8();
L18FB30:
    if (func_800F53D4() == 0)
        goto L18FC44;
    for (;;) {
        if (func_800F53D4() == 0)
            goto L18FC44;
        func_80190088();
        if (func_800F53D4() != 0)
            goto L18FC2C;
        func_8018F0C8();
        goto L18FC2C;
    L18FC2C:
        if (func_800F53D4() == 0)
            goto L18FC6C;
        if (func_800F53D4() != 0)
            continue;
        break;
    }
L18FC44:
    if (func_800F53D4() == 0)
        goto L18FC6C;
L18FC6C:
    if (func_800F53D4() != 0)
        goto L18FC9C;
    func_8018F0C8();
    return;
L18FC9C:
    return;
}
