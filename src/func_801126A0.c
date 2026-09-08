#include "common.h"
void func_801126A0(void)
{
    /* battle item-status (twin of 8011285C): 0x1706/0x1700 headers,
       0xACF-0xAD8 texts, 80115BCC/80115D2C sub-renders; loop L1127C0
       scrolls on 7170(0x202). */
    func_80176060();
    func_800F7210(0x1706);
    func_800F9330();
    func_800F71DC();
    func_800F8D00(0x1706);
    func_800F8F74(0x1700);
    func_800FB09C();
    func_800F654C(0x20);
    func_800F824C(0xAD);
    func_800F654C(0x10);
    func_8017559C();
    func_800F654C(0x81);
    func_800F8188(0x4200);
    func_800F654C(3);
    func_800FD85C();
    func_800F71DC(0x40);
    func_80116398();
    func_800F654C(1);
    func_800F824C(0xE3);
    func_800F654C(0x20);
    func_800F8188(0xACF);
    func_800F654C(2);
    func_800F8188(0xAD0);
    func_800F654C(2);
    func_800F8188(0xAD1);
    func_800F71DC(0x7070);
    func_800F8D00(0xAD4);
    func_800F71DC(0x40);
    func_800F8D00(0xAD2);
    func_800F8F74(0xACD);
    func_800F654C(2);
    func_800F8188(0xACE);
    func_800F654C(0x5E);
    func_800FD804();
    func_80115BCC();
L1127c0:
    for (;;) {
        func_800FE7D8();
        func_80115D2C();
        func_800F7210(0xAD2);
        func_800F5958(0x10);
        if (func_800F53C0() != 0)
            goto L11280C;
        func_800F8188(0x2100);
    L11280C:
        func_800F7210(0xAD2);
        if (func_800F7170(0x202) != 0)
            continue;
        break;
    }
    func_800F95A0();
    func_800F8D00(0x1706);
    func_800F8FB8(0xE3);
    func_800F8FB8(0x80);
    func_8011EA5C();
    return;
}
