#include "common.h"
void func_801345B4(void)
{
    /* ability rows: 0x45/0x46 windows with 54D4 gates pick the
       5480/5410 tails. */
    func_800F8D6C(0x45);
    if (func_800F54D4(func_800F3C3C(0x45)) == 0)
        goto L134624;
    if (func_800F54D4(func_800F3C3C(0x46)) != 0)
        goto L134614;
    if (func_800F53C0() != 0)
        goto L134624;
L134614:
    func_800F5480();
    return;
L134624:
    func_800F5410();
    return;
}
