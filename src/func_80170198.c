#include "common.h"
void func_80170198(void)
{
    /* shop: 3C3C/3B04(0x1000)x2/3B9C gates; a0/a2 latch |
       v0 gates; returns at L1702C4. */
    func_800F3C3C();
    func_800F3B04(0x1000);
    func_800F3B04(0x1000);
    func_800F3B9C();
    /* v0 gates -> L170258 / L17026C */
    /* a0/a2 latch -> L170298 / L170284 */
    return;
L1702C4:
    return;
}
