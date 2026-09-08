#include "common.h"
void func_80197964(void)
{
    /* event: v0 gates; 8018F078 spin loop L1979E8. */
    if (func_800F53D4() != 0)
        goto L1979A4;
    goto L1979A4;
L1979A4:
    if (func_800F53D4() == 0)
        goto L197A28;
L1979E8:
    func_8018F078();
    if (func_800F53D4() != 0)
        goto L197A14;
    goto L197A24;
L197A14:
    if (func_800F53D4() != 0)
        goto L1979E8;
    return;
L197A24:
    return;
L197A28:
    return;
}
