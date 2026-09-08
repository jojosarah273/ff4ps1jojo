#include "common.h"
void func_80180F70(void)
{
    /* battle anim: v0 gates; 801811F0 (L181004) vs 801810B8
       (L181040) rows. */
    if (func_800F53D4() == 0)
        goto L180FEC;
    goto L180FEC;
L180FEC:
    if (func_800F53D4() == 0)
        goto L18102C;
    func_801811F0();
    goto L181060;
L18102C:
    if (func_800F53D4() == 0)
        goto L181060;
    func_801810B8();
    return;
L181060:
    return;
}
