#include "common.h"
void func_80100B30(void)
{
    /* shop rows: 0x1702/0x3D/0x3E windows, 0x1701 text; 4F28/7A40
       label pairs, then 62BC gates. */
    func_800F6564(0x1702);
    func_800F824C(0x3D);
    func_800F8FB8(0x3E);
    func_800F4F28(func_800F3C3C(0x3D));
    func_800F4F4C();
    func_800F7A40(func_800F3C3C(0x3E));
    func_800F6564(0x1701);
    if (func_800F6434(2) != 0)
        goto L100BA0;
    func_800F62BC(0x3E);
    func_800F62BC(0x3E);
L100BA0:
    func_800F7270(0x3D);
    func_800F6C68();
    func_800F824C(0x3D);
    func_800F6C68();
    func_800F824C(0x3E);
    return;
}
