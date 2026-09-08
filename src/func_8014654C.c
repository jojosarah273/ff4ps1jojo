#include "common.h"
void func_8014654C(void)
{
    /* battle: 3C3C/3B04/3B9C gate tree with v1/v0 + a0/v1 + a2/v0
       latches; returns at L1466CC. */
    func_800F3C3C();
    func_800F3B04();
    func_800F3B9C();
    /* v0 gates -> L1466CC / L1465D8 */
    /* v1/v0 + a0/v1 + a2/v0 latch tree -> L146610/L14662C/L146648 */
    if (func_800F53D4() == 0)
        goto L1466A0;
    return;
L1466A0:
    goto L1466CC;
L1466CC:
    return;
}
