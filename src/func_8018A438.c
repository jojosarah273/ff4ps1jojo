#include "common.h"
void func_8018A438(void)
{
    /* event: 8018AC90 intro/branches with 8018F0C8 spins; loops
       L18A49C/L18A500/L18A594 on regcmp latches. */
    func_8018AC90();
    if (func_800F53D4() == 0)
        goto L18A48C;
L18A48C:
L18A49C:
    for (;;) {
        if (func_800F53D4() != 0)
            continue;
        break;
    }
L18A4B8:
    func_8018AC90();
    if (func_800F53D4() == 0)
        goto L18A548;
L18A500:
    for (;;) {
        if (func_800F53D4() != 0)
            goto L18A528;
        func_8018F0C8();
        goto L18A548;
    L18A528:
        if (func_800F53D4() != 0)
            continue;
        break;
    }
L18A548:
    func_8018AC90();
    func_8018AC90();
L18A560:
    /* v0/a1 latch -> L18A5DC */
    for (;;) {
        if (func_800F53D4() != 0)
            goto L18A5BC;
        func_8018F0C8();
        goto L18A5DC;
    L18A5BC:
        /* v0/a1 latch -> L18A594 */
        continue;
    }
L18A5DC:
    return;
}
