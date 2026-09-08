#include "common.h"
void func_801466E0(void)
{
    /* battle: 3C3C/3B04(0x2000)x3/3B9C gates; 9330/939C rows with
       the v0/v1 latch loop L146824; closes 960C/95A0. */
    func_800F3C3C();
    func_800F3B04(0x300);
    func_800F3B04(0x2000);
    func_800F3B04();
    func_800F3B9C();
    func_800F9330();
    func_800F939C();
    /* v0 gates -> L146924 / L1467D8 */
L146824:
    /* v0/v1 latch -> L146824 */
    func_800F960C();
    func_800F95A0();
    return;
}
