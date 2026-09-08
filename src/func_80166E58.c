#include "common.h"
void func_80166E58(void)
{
    /* shop: 3C3C/3B04(0x2000)x2 gates; s0/v0 + a1/v0 latch loops
       with 9330/95A0 rows. */
    func_800F3C3C();
    func_800F3B04(0x2000);
    func_800F3B04();
    /* s0/v0 latch -> L166ED4 / L166F78 */
    func_800F9330();
    func_800F95A0();
    return;
L166EA8:
    /* a1/v0 latch -> loop */
    return;
}
