#include "common.h"
void func_80167914(void)
{
    /* shop: 3C3C/3B04 x3 gates; t0/t1 regcmp latch loop; returns
       at L167A14. */
    func_800F3C3C();
    func_800F3B04(0x7992);
    func_800F3B04();
    if (func_800F53D4() != 0)
        goto L167A14;
    func_800F3B04();
    /* v1/v0 gate -> L167A14 */
    return;
L167A14:
    return;
}
