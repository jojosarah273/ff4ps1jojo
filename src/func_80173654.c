#include "common.h"
void func_80173654(void)
{
    /* shop banner: 0x15 window, 0xC8/0x7A/0xB9 windows, 0x4C0 gate;
       loop L173730 on 5A90(0x20). */
    func_800F926C();
    func_800F654C(0x15);
    func_800F9200();
    func_800F9448();
    func_800F6630(0xC8);
    if (func_800F6434(0x202) != 0)
        goto L173768;
    func_800F6630(0x7A);
    func_800F4248(1);
    if (func_800F4120(0x202) != 0)
        goto L173768;
    func_800F6630(0xB9);
    func_800F5480();
    func_800F8058(0x10);
    func_800F5574(0x10);
    if (func_800F53D4() == 0)
        goto L1736EC;
    func_800F5CCC();
L1736EC:
    func_800F4248(0xC);
    func_800F7500();
L173730:
    for (;;) {
        func_800F6B68();
        func_800F8960(0x4C0);
        func_800F6364();
        func_800F63BC();
        func_800F5A90(0x20);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
L173768:
    func_800F9448();
    return;
}
