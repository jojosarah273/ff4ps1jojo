#include "common.h"
void func_80109774(void)
{
    /* shop choose (twin): 0x7F/0xDF/0xBB windows, 0x4209/0x420A
       texts; gate 6434(0x202). */
    func_800F6630(0x7F);
    if (func_800F6434(0x202) != 0)
        goto L109824;
    func_800F6630(0xDF);
    func_800F5410();
    func_800F4008(0x14);
    func_800F8188(0x4209);
    func_800F8F74(0x420A);
    func_800F6630(0xBB);
    return;
L109824:
    func_800F6630();
    func_800F5410();
    func_800F4008(5);
    func_800F654C();
    func_800F8188(0x4200);
    return;
}
