#include "common.h"
void func_800FDF34(void)
{
    /* shop title: 0x7C window, 0x2115 title + 0x4209 row, 800FDA9C +
       8018226C(0x3800); close via 62BC(0x7C). */
    func_800F654C(0x80);
    func_800F8188(0x2115);
    func_800F6630(0x7C);
    func_800F7864();
    func_800F4248(0xF);
    func_800F9690();
    func_800F9690();
    func_800FDA9C();
    func_800F6630(0x7C);
    func_800F7864();
    func_800F4248(0xF);
    func_800F9690();
    func_800F5410();
    func_800F4008(0x40);
    func_800F9690();
    func_800FDA9C();
    func_8018226C(0x3800);
    func_800F62BC(0x7C);
    return;
}
