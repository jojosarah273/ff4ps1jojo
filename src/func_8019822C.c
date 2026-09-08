#include "common.h"
void func_8019822C(void)
{
    /* event: v0 gates; 801982E8 + v0/s4 latch rows. */
    if (func_800F53D4() == 0)
        goto L19827C;
    func_801982E8();
    /* v0/s4 latch -> L1982A0 / L1982C0 */
    return;
L19827C:
    func_801982E8();
    /* v0/s4 latch -> L1982A0 / L1982C0 */
    return;
L1982A0:
    return;
L1982C0:
    return;
}
