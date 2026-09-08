#include "common.h"
void func_801681C0(void)
{
    /* shop: 3C3C/3B04(0x2000)/3B9C gates; 971C loop on s2 latch. */
    func_800F3C3C();
    func_800F3B04(0x2000);
    func_800F3B9C();
    func_800F971C();
    do {
        func_800F971C();
    } while (func_80197288() != 0);
    func_800F971C();
    return;
}
