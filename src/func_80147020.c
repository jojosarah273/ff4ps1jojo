#include "common.h"
void func_80147020(void)
{
    /* battle: 3C3C/3B9C gates; 800728AC rows + 5480/5410 tails. */
    func_800F3C3C();
    func_800F3B9C();
    if (func_800F53D4() == 0)
        goto L1470B0;
    func_800728AC();
L1470A0:
    func_800F5480();
    goto L1470D4;
L1470B0:
    func_800728AC();
    if (func_800F53D4() != 0)
        goto L1470A0;
    func_800F5410();
    return;
L1470D4:
    return;
}
