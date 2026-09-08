#include "common.h"
void func_80144F24(void)
{
    /* battle magic-cast: 8014D528 prep, 80140558/80140310 loops
       (L144F6C wait, L145038 scroll), 8009A0A0/8014202C/8013DC04
       rows, 0x34C4 text. */
    func_800F971C();
    func_800F8D00();
    func_800F8D00();
    func_800F654C(3);
    func_8014D528();
L144f6c:
    for (;;) {
        func_80140558();
        func_80140310();
        func_800F9644(0x20);
        func_800F658C();
        func_800F5480();
        func_800F80D0(8);
        func_800F81B0();
        func_800F971C();
        func_800F9660(0x20);
        func_800F5958();
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_80140310();
    func_800F654C(0x2C);
    func_8009A0A0();
    func_800F71DC(0x10);
    func_8014202C();
    func_800F654C(0x2A);
    func_8009A0A0();
    func_800F7210(0x34C4);
    func_800F8D00();
    func_8013DC04();
    func_800F8F74(0x38E2);
L145038:
    for (;;) {
        func_80140558();
        func_80140310();
        func_800F9644(0x20);
        func_800F658C();
        func_800F5410();
        func_800F4064(8);
        func_800F81B0();
        func_800F922C();
        func_800F971C();
        func_800F9660(0x20);
        func_800F95A0();
        if (func_800F7170(0x202) != 0)
            continue;
        break;
    }
    func_80140310();
    return;
}
