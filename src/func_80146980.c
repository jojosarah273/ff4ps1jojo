#include "common.h"
void func_80146980(void)
{
    /* battle: 3C3C/3B04 gates pick 5410 vs 5480 rows. */
    func_800F3C3C();
    func_800F3B04();
    /* v0 gates -> L146A1C / L146A2C */
    func_800F5410();
    goto L146A34;
L146A2C:
    func_800F5480();
    return;
L146A34:
    return;
}
