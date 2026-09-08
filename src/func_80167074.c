#include "common.h"
void func_80167074(void)
{
    /* shop: 3B04 gate; 5410 loop on s0/v1 latch. */
    func_800F3B04();
    do {
        if (func_800F53D4() != 0)
            goto L1670F8;
        if (func_800F53D4() != 0)
            goto L1670F8;
        func_800F5410();
    } while (func_80197288() != 0);
    return;
L1670F8:
    func_800F5410();
    return;
}
