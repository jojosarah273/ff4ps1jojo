#include "common.h"
void func_80171E18(void)
{
    /* shop rows: 0xC/0xE/0xAD windows, 0x4F1/0x4F0/0x4F2/0x4F3 texts,
       gates 5480/8058(2/4/5)/53C0. */
    func_800F5480();
    func_800F8058(2);
    func_800F6630(0xC);
    func_800F5480();
    func_800F8058(4);
    if (func_800F53C0() != 0)
        goto L171EC0;
    func_800F654C(0xF8);
    func_800F8960(0x4F1);
    goto L171EE8;
L171EC0:
    func_800F8960(0x4F0);
    func_800F6630(0xE);
    func_800F5480();
    func_800F8058(5);
    func_800F8960(0x4F1);
L171EE8:
    func_800F6630(0xAD);
    func_800F824C(6);
    func_800F5140();
    func_800F5410();
    func_800F3F38(func_800F3C3C(6));
    func_800F4008(0x30);
    func_800F8960(0x4F2);
    func_800F6C68();
    func_800F8960(0x4F3);
    func_800F9448();
    return;
}
