#include "common.h"
void func_800FEF7C(void)
{
    /* shop/battle: v0 + v1/v0 gates pick 800FEE34 pair, 80138F68
       pair or 80073D58 row; returns at L800FF014. */
    if (func_800F53D4() != 0)
        goto L800FF014;
    /* v1/v0 gate -> L800FEFF4 / L800FEFC8 */
    if (func_800F53D4() == 0)
        return;
    func_800FEE34();
    func_800FEE34();
    goto L800FF014;
L800FEFF4:
    func_80138F68();
    func_80138F68();
    goto L800FF014;
L800FF00C:
    func_80073D58();
    return;
L800FF014:
    return;
}
