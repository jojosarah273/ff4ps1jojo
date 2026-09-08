#include "common.h"
void func_800FE8B4(void)
{
    /* battle: 3C3C/3B04 gates; 6364 loop on a0/v1 latch. */
    func_800F3C3C();
    func_800F3B04();
    do {
    } while (func_800F53D4() == 0);
    func_800F6364();
    return;
}
