#include "common.h"
void func_8011DFE4(void)
{
    /* battle: 3C3C/3B9C gates; a1/v0 latch loops L11E044/L11E068. */
    func_800F3C3C();
    func_800F3B9C();
L11E044:
    if (func_800F53D4() == 0)
        goto L11E0A0;
    if (func_800F53D4() == 0)
        goto L11E144;
    if (func_800F53D4() != 0)
        goto L11E044;
    goto L11E0A0;
L11E0A0:
    /* a1/v0 latches -> L11E0DC */
    if (func_800F53D4() == 0)
        goto L11E144;
    if (func_800F53D4() != 0)
        goto L11E044;
    return;
L11E144:
    return;
}
