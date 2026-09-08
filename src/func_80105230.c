#include "common.h"
void func_80105230(void)
{
    /* shop detail cells: 0xE/0x19/0x18/0xC windows with 76BC/7CC8
       pairs and 3F38(3C3C(0x18)) rows; 4248(0x10)/4120 gate. */
    func_800F6630(0xE);
    func_800F4248(0xF);
    func_800F824C(0x19);
    func_800F8FB8(0x18);
    func_800F76BC(func_800F3C3C(0x19));
    func_800F76E8();
    func_800F7CC8(func_800F3C3C(0x18));
    func_800F76BC(func_800F3C3C(0x19));
    func_800F76E8();
    func_800F7CC8(func_800F3C3C(0x18));
    func_800F6630(0xC);
    func_800F4248(0xF);
    func_800F5140();
    func_800F5410();
    func_800F3F38(func_800F3C3C(0x18));
    func_800F824C(0x18);
    func_800F6630(0x19);
    func_800F5410();
    func_800F4008(0x18);
    func_800F824C(0x19);
    func_800F6630(0xC);
    func_800F4248(0x10);
    if (func_800F4120(2) != 0)
        goto L105340;
    func_800F6630(0x19);
    func_800F5410();
    func_800F4008(4);
    func_800F824C(0x19);
L105340:
    func_800F7270(0x18);
    return;
}
