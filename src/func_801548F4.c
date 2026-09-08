#include "common.h"
void func_801548F4(void)
{
    func_800F6564(0x29A0);
    func_800F4248(3);
    if (func_800F4120(2) != 0)
        goto ab0;
    func_800F5574(1);
    if (func_800F53D4() == 0)
        goto reset_ask;
    func_800F971C();
    for (;;) {
        func_800F6B68(0x29B5);
        func_800F5574(1);
        if (func_800F53D4() != 0)
            break;
        func_800F6364();
    }
    func_80155658();
    goto ab0;
reset_ask:
    func_800F5574(2);
    if (func_800F53D4() == 0)
        goto save_ask;
    func_800F971C();
    func_800F8D6C(0xC7);
    for (;;) {
        func_800F7270(0xC7);
        func_800F6B68(0x29B5);
        if (func_800F6434(2) != 0)
            goto r_skip;
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            goto ab0;
        func_80155658();
    r_skip:
        func_800F62BC(0xC7);
    }
save_ask:
    func_800F971C();
    func_800F8D6C(0xC7);
    for (;;) {
        func_800F7270(0xC7);
        func_800F6B68(0x29B5);
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            goto ab0;
        func_800F5574(2);
        if (func_800F53D4() == 0)
            goto s_skip;
        func_800F53D4();
        func_80155658();
    s_skip:
        func_800F62BC(0xC7);
    }
ab0:
    func_800F6564(0x3581);
    func_800F4248(8);
    if (func_800F4120(2) != 0)
        goto ae8;
    func_800F654C(0x80);
    func_800F8188(0x38D8);
    goto f0c;
ae8:
    func_800F6564(0x3582);
    if (func_800F6434(0x202) != 0)
        goto f0c;
    func_800F6564(0x38E5);
    func_800F4248(1);
    if (func_800F4120(0x202) != 0)
        goto f0c;
    func_800F6564(0x38EF);
    if (func_800F6434(0x202) != 0)
        goto f0c;
    func_800F971C();
    func_800F8D6C(0xA9);
    func_800F8D6C(0xAB);
    func_800F8D6C(0xAD);
    for (;;) {
        func_800F6D70(0x3540);
        if (func_800F6434(0x202) == 0) {
            func_800F5410();
            func_800F6B68(0x2002);
            func_800F3F38(func_800F3C3C(0xA9));
            func_800F824C(0xA9);
            func_800F654C();
            func_800F3F38(func_800F3C3C(0xAA));
            func_800F824C(0xAA);
            func_800F62BC(0xAD);
        }
        func_8015330C();
        func_800F63BC();
        func_800F5A90(5);
        if (func_800F53D4() != 0)
            break;
    }
    for (;;) {
        func_800F6D70(0x3540);
        if (func_800F6434(0x202) == 0) {
            func_800F5410();
            func_800F6B68(0x2002);
            func_800F3F38(func_800F3C3C(0xAB));
            func_800F824C(0xAB);
            func_800F654C();
            func_800F3F38(func_800F3C3C(0xAC));
            func_800F824C(0xAC);
            func_800F62BC(0xAE);
        }
        func_8015330C();
        func_800F63BC();
        func_800F5A90(8);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F7270(0xA9);
    func_800F8D00(0x3945);
    func_800F6630(0xAD);
    func_800F8D00(0x3947);
    func_8015254C();
    func_800F7210(0x3949);
    func_800F8188(0x38D4);
    func_800F971C();
    func_800F7270(0xAB);
    func_800F8D00(0x3945);
    func_800F6630(0xAE);
    func_800F8D00(0x3947);
    func_8015254C();
    func_800F7210(0x3949);
    func_800F8188(0x38D5);
    func_800F971C();
    func_800F971C();
    func_800F8D6C(0xA9);
    func_800F62BC(0xA9);
    func_800F62BC(0xAA);
    func_800F654C(0x63);
    func_80152224();
    if (func_800F54D4(func_800F3B04(0x38D4)) == 0)
        func_800F62BC(0xA9);
    func_801531CC();
    if (func_800F54D4(func_800F3B04(0x38D5)) == 0)
        func_800F62BC(0xAA);
    func_800F6630(0xA9);
    if (func_800F54D4(func_800F3C3C(0xAA)) != 0)
        goto f0c;
    if (func_800F53C0() == 0)
        goto e7c;
    func_800F6240(0x38D7);
    func_800F6240(0x38D8);
    goto f0c;
e7c:
    func_800F654C(0x80);
    func_800F8188(0x38D7);
    func_800F8188(0x38D8);
    func_800F6564(0x38D5);
    func_800F7864();
    func_800F824C(0xA9);
    func_800F971C();
    func_800F6564(0x38D4);
    func_80152224();
    if (func_800F54D4(func_800F3C3C(0xA9)) == 0) {
        func_800F654C(8);
        func_800F8188(0x3581);
    }
f0c:
    func_800F971C();
    func_800F8D6C(0xC7);
    for (;;) {
        func_800F6D70(0x3540);
        if (func_800F6434(0x202) != 0)
            goto fc0;
        func_800F6630(0xC7);
        if (func_800F6434(0x202) != 0)
            goto s080;
        func_800F6B68(0x2000);
        func_800F4248(0x1F);
        func_800F5574(1);
        if (func_800F53D4() != 0)
            goto s080;
        func_800F5574(0xB);
        if (func_800F53D4() != 0)
            goto s078;
    fc0:
        func_800F9644(0x20);
        func_800F5410();
        func_800F4064(0x80);
        func_800F971C();
        func_800F9660(0x20);
        func_800F63BC();
        func_800F5A90(5);
        func_800F53D4();
        func_800F62BC(0xC7);
        func_800F971C();
    }
s078:
    func_800F8E50(0x355E);
s080:
    func_800F6B68(0x2015);
    func_800F8D00(0x393D);
    func_800F71DC(0x32);
    func_800F8D00(0x393F);
    func_8015236C();
    func_800F7210(0x3941);
    func_800F8D6C(0xCB);
    func_800F971C();
    func_800F8D6C(0xC7);
    func_800F8D6C(0xC9);
    for (;;) {
        func_800F7270(0xC9);
        func_800F6B68(0x3540);
        if (func_800F6434(0x202) != 0)
            goto l1c0;
        func_800F7270(0xC7);
        func_800F6B68(0x2015);
        func_800F824C(0xDF);
        func_800F654C(0xA);
        func_800F824C(0xE1);
        func_8015240C();
        func_800F7270(0xCB);
        func_800F8D00(0x3945);
        func_800F7270(0xE3);
        func_800F8D00(0x3947);
        func_8015254C();
        func_800F7210(0x3949);
        if (func_800F7170(0x202) == 0)
            func_800F6240(0x3949);
        func_800F7270(0xC7);
        func_800F6564(0x3949);
        func_800F8768(0x2060);
        func_800F6564(0x394A);
        func_800F8768(0x2061);
    l1c0:
        func_800F9644(0x20);
        func_800F5410();
        func_800F6658(0xC7);
        func_800F4064(0x80);
        func_800F8274(0xC7);
        func_800F971C();
        func_800F9660(0x20);
        func_800F62BC(0xC9);
        func_800F6630(0xC9);
        func_800F5574(0xD);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F971C();
    func_800F8D6C(0xC7);
    for (;;) {
        func_800F7270(0xC7);
        func_800F6B68(0x3540);
        if (func_800F6434(0x202) != 0)
            goto l488;
        func_800F824C(0xDF);
        func_800F654C(0x80);
        func_800F824C(0xE1);
        func_8015240C();
        func_800F7270(0xE3);
        func_800F6B68(0x2003);
        if (func_800F6434(0x80) != 0)
            goto l488;
        func_800F6630(0xC7);
        func_800F5574(5);
        if (func_800F53C0() != 0)
            goto l35c;
        func_800F6564(0x3581);
        func_800F4248(8);
        if (func_800F4120(2) != 0)
            goto l35c;
        func_800F6B68(0x2001);
        func_800F9200();
        func_800F4248(0x7F);
        func_800F824C(0xA9);
        func_800F93DC();
        func_800F4248(0x80);
        func_800F78C4(func_800F3C3C(0xA9));
        func_800F8768(0x2001);
    l35c:
        func_800F8FB8(0xD6);
        func_800F7270(0xC7);
        func_8015A374();
        func_800F6564(0x38D8);
        if (func_800F6434(2) != 0)
            goto l478;
        if (func_800F53FC() != 0)
            goto l440;
        func_800F6630(0xC7);
        func_800F5574(5);
        if (func_800F53C0() == 0)
            goto l460;
    l3d0:
        func_800F4F28(func_800F3C3C(0xD4));
        func_800F4F4C();
        func_800F7A40(func_800F3C3C(0xD5));
        func_800F6630(0xD4);
        func_800F78C4(func_800F3C3C(0xD5));
        if (func_800F7918(0x202) != 0)
            goto l478;
        func_800F61E8();
        func_800F61E8();
        func_800F824C(0xD4);
        goto l478;
    l440:
        func_800F6630(0xC7);
        func_800F5574(5);
        if (func_800F53C0() == 0)
            goto l3d0;
    l460:
        func_800F654C(1);
        func_800F824C(0xD4);
        func_800F8FB8(0xD5);
    l478:
        func_800F654C(3);
        func_80153374();
    l488:
        func_800F62BC(0xC7);
        func_800F6630(0xC7);
        func_800F5574(0xD);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F9644(0x20);
    func_800F6558(0xFFFF);
    func_800F8274(0xA9);
    func_800F7500(0xD);
    func_800F971C();
    for (;;) {
        func_800F6BE0(0x2A07);
        if (func_800F64EC(2) != 0)
            goto l534;
        func_800F3F38(func_800F3C3C(0xA9));
        func_800F5520();
        if (func_800F53C0() != 0)
            goto l534;
        func_800F8274(0xA9);
    l534:
        func_800F5410();
        func_800F4064(0x15);
        func_800F5EA0();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F5DD4(0xA9);
    for (;;) {
        func_800F5480();
        func_800F6BE0(0x2A07);
        if (func_800F64EC(2) != 0)
            goto l5e0;
        func_800F3F38(func_800F3C3C(0xA9));
        func_800F7FCC();
        func_800F87DC(0x2A07);
    l5e0:
        func_800F5410();
        func_800F4064(0x15);
        func_800F63BC();
        func_800F5A90(0xD);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F971C();
    func_800F9660(0x20);
    return;
}
