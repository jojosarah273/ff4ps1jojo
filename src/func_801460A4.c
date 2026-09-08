#include "common.h"
void func_801460A4(void)
{
    /* battle: 3C3C/3B04/3B9C gates; s0/v0+v1 regcmp latches on the
       5480 row; returns at L1462C0. */
    func_800F3C3C();
    func_800F3B04();
    func_800F3B9C();
    /* s0 latches -> L146158 / L1461C0 / L1461AC */
    func_800F5480();
    /* v0 gates -> L14629C / L1462C0 */
    return;
}
