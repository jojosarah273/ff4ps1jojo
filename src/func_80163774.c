#include "common.h"
void func_80163774(void)
{
    /* options: 0x11/0x34C8/0x34C7/0xA6/0x2017 texts, 8015329C row;
       gate 5574(0x63). */
    func_800F654C(0x11);
    func_800F8188(0x34C8);
    func_800F654C(0x10);
    func_800F8188(0x34C7);
    func_800F7270(0xA6);
    func_800F5410();
    func_800F6B68(0x2017);
    func_800F4008(0x10);
    func_800F5574(0x63);
    if (func_800F53C0() == 0)
        goto L1637DC;
    func_800F654C(0x63);
L1637DC:
    func_800F8768(0x2017);
    func_800F654C(0x12);
    func_800F8188(0x34CA);
    func_8015329C();
    return;
}
