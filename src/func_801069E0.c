#include "common.h"
void func_801069E0(void)
{
    /* shop choose: 0x7F/0xDA/0xBB windows, 0x4209/0x420A texts;
       gate 6434(0x202) picks the 0xDA vs 0x4200 paths. */
    func_800F6630(0x7F);
    if (func_800F6434(0x202) != 0)
        goto L106A84;
    func_800F6630(0xDA);
    func_800F5410();
    func_800F4008(0x90);
    func_800F8188(0x4209);
    func_800F8F74(0x420A);
    func_800F6630(0xBB);
    return;
L106A84:
    func_800F6630();
    func_800F5410();
    func_800F4008(0x89);
    func_800F654C();
    func_800F8188(0x4200);
    return;
}
