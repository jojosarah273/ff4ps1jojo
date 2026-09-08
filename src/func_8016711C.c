#include "common.h"
void func_8016711C(void)
{
    /* battle: 3B04(0x1000/0x2000)x3 gates; 80167074 rows; a0/a1
       regcmp latch loop; 5480 tail. */
    func_800F3B04(0x1000);
    func_800F3B04(0x2000);
    func_800F3B04();
    if (func_80167074() != 0)
        goto L1671C4;
    if (func_800F53D4() != 0)
        goto L1671C4;
L167194:
    /* a0/v1 + a1/v1 regcmp latches */
    func_800F5410();
    goto L1671CC;
L1671C4:
    func_800F5480();
L1671CC:
    return;
}
