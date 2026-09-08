#include "common.h"
void func_80100A98(void)
{
    /* shop rows: 0x8FC/0x1701 texts; gate 6434(2) picks the 0x8FC
       reads. */
    func_800F6564(0x8FC);
    func_800F9690();
    func_800F6564(0x1701);
    if (func_800F6434(2) != 0)
        goto L100B00;
    func_800F5410();
    func_800F4008(0x20);
    func_800F9690();
L100B00:
    func_800F6564(0x8FC);
    func_800F4248(7);
    func_800F61E8();
    func_800F96E0();
    return;
}
