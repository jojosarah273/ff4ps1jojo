#include "common.h"
void func_8018D1AC(void)
{
    /* event: 8018A75C(2) + v1/v0 gate; spin loops L18D300/L18D340;
       8018A75C(1) closes. */
    if (func_800F53D4() != 0)
        goto L18D21C;
    goto L18D258;
L18D21C:
    func_8018A75C(2);
L18D258:
    /* v1/v0 gate -> L18D3A8 */
    for (;;) {
        if (func_800F53D4() != 0)
            continue;
        break;
    }
    if (func_800F53D4() == 0)
        goto L18D368;
    /* spin loop L18D340 */
    goto L18D3A8;
L18D368:
    for (;;) {
        if (func_800F53D4() != 0)
            goto L18D3A0;
        if (func_800F53D4() != 0)
            continue;
        break;
    }
L18D3A8:
    func_8018A75C(1);
    return;
}
