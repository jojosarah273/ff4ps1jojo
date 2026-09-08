#include "common.h"
void func_8011285C(void)
{
    /* battle item/status detail: 0xEC window + 0x1800-0x1802 title,
       0xFD6/0xAD-series texts, 800FC1CC/800FD6E8/80176060/800FB09C/
       80116398/80169128/80115BCC sub-renders, 80115D2C scroll loop. */
    func_800F654C(0xEC);
    func_800F8188(0x1800);
    func_800F8F74(0x1801);
    func_800F6564(0xFD6);
    func_800F4248(0x8F);
    func_800F8188(0x1802);
    func_800FC1CC();
    func_800FD6E8();
    func_80176060();
    func_800F7210(0x1706);
    func_800F9330();
    func_800F71DC(0x7763);
    func_800F8D00(0x1706);
    func_800F8F74(0x1700);
    func_800FB09C();
    func_800F654C(0x20);
    func_800F824C(0xAD);
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
    func_800F654C(3);
    func_800F8188(0xAD1);
    func_800F71DC(0x7070);
    func_800F8D00(0xAD4);
    func_800F71DC(0x40);
    func_800F8D00(0xAD2);
    func_800F8F74(0xACD);
    func_800F654C(2);
    func_800F8188(0xACE);
    func_800F654C(0x42);
    func_800F8188(0x1E01);
    func_800F654C(1);
    func_800F8188(0x1E00);
    func_80169128();
    func_80115BCC();
L1129c4:
    for (;;) {
        func_800FE7D8();
        func_80115D2C();
        func_800F7210(0xAD2);
        func_800F5958(0x10);
        if (func_800F53C0() != 0)
            goto L112A18;
        func_800F8188(0x2100);
        func_800FD6E8();
    L112A18:
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
