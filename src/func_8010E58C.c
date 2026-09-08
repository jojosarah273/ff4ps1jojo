#include "common.h"
void func_8010E58C(void)
{
    func_800FB3F8();
    func_80103FE8();
    func_80194518();
    func_80194394();
    func_8017F8F8();
    func_800F654C(0x22);
    func_800F8188(0x2123);
    func_800F654C();
    func_800F8188(0x420C);
    func_800F654C(0xF7);
    func_800F81E8();
    func_800F654C(0x80);
    func_800F81E8();
    func_800F654C(0xEB);
    func_800F81E8();
    func_800F654C(0xF7);
    func_800F81E8();
    func_800F654C(0x78);
    func_800F81E8();
    func_800F654C(0xEC);
    func_800F81E8();
    func_800F654C();
    func_800F81E8();
    func_800F654C(0x41);
    func_800F8188(0x4360);
    func_800F654C(0x26);
    func_800F8188(0x4361);
    func_800F71DC(0x5A00);
    func_800F8D00(0x4362);
    func_800F654C(0x7F);
    func_800F8188(0x4364);
    func_800F654C(0x16);
    func_800F8188(0x4367);
    func_800F654C(3);
    func_800F8188(0x1700);
    func_800F654C();
    func_800F8188(0x2100);
    func_800F654C(0x81);
    func_800F8188(0x4200);
    func_800F8FB8(0x24);
LE738:
    for (;;) {
        func_800FE7B0();
        func_800F654C(0x40);
        func_800F8188(0x420C);
        func_800F6630(0x24);
        func_800F8188(0x2100);
        func_8010E878();
        func_800F62BC(0x24);
        func_800F6630(0x24);
        func_800F5574(0x10);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
LE790:
    for (;;) {
        func_800FE7B0();
        func_800F654C(0x40);
        func_800F8188(0x420C);
        func_8010E878();
        func_800F6630(2);
        if (func_800F6434(0x202) != 0)
            goto LE7e0;
        func_800F6630(3);
        if (func_800F6434(0x202) == 0)
            continue;
        break;
    }
LE7e0:
    func_800F654C(0xF);
    func_800F824C(0x24);
LE7f0:
    for (;;) {
        func_800FE7B0();
        func_800F654C(0x40);
        func_800F8188(0x420C);
        func_800F6630(0x24);
        func_800F8188(0x2100);
        func_8010E878();
        func_800F5DA0(0x24);
        func_800F6630(0x24);
        if (func_800F6434(0x202) != 0)
            continue;
        break;
    }
    func_800F654C(0x33);
    func_800F8188(0x2123);
    func_800F654C();
    func_800F8188(0x420C);
    func_8011EA5C();
    return;
}
