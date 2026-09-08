#include "common.h"
void func_801613D0(void)
{
    /* options screen: 0xC1 window + 0x33C4 title, 0x321B/0x321A stat
       rows, 8015329C alt + 80150C38 + 80062B08 commits; loop L161428
       polls 5574(0xCE)/5958(0xC0). */
    func_800F654C(0xC1);
    func_800F8188(0x33C4);
    func_800F971C();
L161428:
    for (;;) {
        func_800F6B68(0x321B);
        func_800F5574(0xCE);
        if (func_800F53D4() != 0)
            goto L1614A8;
        func_800F63BC();
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F5958(0xC0);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
L161488:
    func_8015329C();
    func_800F654C(0xF);
    func_800F8188(0x34CA);
    return;
L1614A8:
    func_800F6B68(0x321A);
    func_800F4248(0x7F);
    func_800F8768(0x321A);
    func_800F6B68(0x321C);
    func_800F5574(1);
    if (func_800F53C0() == 0)
        goto L161488;
    func_800F5480();
    func_800F6B68(0x321C);
    func_800F8058(1);
    func_800F8768(0x321C);
    if (func_800F53D4() == 0)
        goto L161530;
    func_800F90EC(0x321C);
    func_800F90EC(0x321B);
    func_800F654C(0x80);
    func_800F8768(0x321A);
L161530:
    func_800F824C(1);
    func_800F654C(6);
    func_80150C38();
    func_800F654C(0xF8);
    func_800F8188(0x26D4);
    func_800F654C(0xCE);
    func_800F8188(0x26D2);
    func_800F6240(0x352A);
    func_80062B08();
    func_800F654C(0xCE);
    func_800F8188(0x33C5);
    func_800F654C(0xA);
    func_800F8188(0x34C8);
    func_800F654C(0x10);
    func_800F8188(0x34C7);
    return;
}
