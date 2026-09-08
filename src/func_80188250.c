#include "common.h"
void func_80188250(void)
{
    /* battle: v1/v0 + v0 gates; 8018DC58(4) row at L188328. */
    if (func_800F53D4() != 0)
        goto L188350;
    /* v0 gates -> L1882B0 / L188308 */
    func_8018DC58(4);
    return;
L188350:
    return;
}
