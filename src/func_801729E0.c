#include "common.h"
void func_801729E0(void)
{
    /* shop detail: WANTED: 0x4C0-0x4C7 texts, 0xF3/0x7A/0xA1/0xE5
       windows; 3F38(3C3C(6)) rows and 0x4C0-0x4C7 rank cells. */
    func_800F5574(0x10);
    if (func_800F53C0() == 0)
        goto L172A08;
    func_800F654C(0x10);
L172A08:
    func_800F4248(0xFC);
    func_800F5574();
    if (func_800F53D4() != 0)
        goto L172A60;
    func_800F6630(0x7A);
    func_800F4248(1);
    if (func_800F4120(0x202) != 0)
        return;
L172A60:
    func_800F6630(0xC8);
    if (func_800F6434(0x202) != 0)
        return;
    func_800F6630(0xA1);
    func_800F4248(8);
    if (func_800F4120(0x202) != 0)
        goto L172AB8;
    func_800F6630(0xA1);
    func_800F4248(4);
    if (func_800F4120(0x202) != 0)
        goto L172AC8;
L172AB8:
    func_800F654C(0xFE);
    goto L172AD0;
L172AC8:
    func_800F654C();
L172AD0:
    func_800F824C(6);
    func_800F654C(0x70);
    func_800F8188(0x4C0);
    func_800F654C(0x78);
    func_800F5410();
    func_800F3F38(func_800F3C3C(6));
    func_800F8188(0x4C1);
    func_800F6C68();
    func_800F8188(0x4C2);
    func_800F6C68();
    func_800F8188(0x4C3);
    func_800F654C(0x78);
    func_800F8188(0x4C4);
    func_800F654C(0x78);
    func_800F5410();
    func_800F3F38(func_800F3C3C(6));
    func_800F8188(0x4C5);
    func_800F6C68();
    func_800F8188(0x4C6);
    func_800F6C68();
    func_800F8188(0x4C7);
    return;
}
