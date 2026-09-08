#include "common.h"
void func_8016838C(void)
{
    /* shop: 3B04(0x7000) x2 + v1/t0 latch loop. */
    func_800F3B04(0x7000);
    func_800F3B04();
    for (;;) {
        if (func_80197288() != 0)
            continue;
        break;
    }
    return;
}
