#include "common.h"
void func_8010CB08(void)
{
    func_800F8F74(0x8FD);
    func_8010D24C();
    func_800F6564(0xFDE);
    func_800F8FB8(0x3E);
    func_800F5140();
    func_800F4F4C();
    func_800F7A40(func_800F3C3C(0x3E));
    func_800F824C(0x3D);
    func_800F6564(0xFE5);
    if (func_800F6434(0x80) != 0)
        goto Lb88;
    func_800F6564(0x1701);
    if (func_800F6434(2) != 0)
        goto Lb98;
Lb88:
    func_800F62BC(0x3E);
    func_800F62BC(0x3E);
Lb98:
    func_800F7270(0x3D);
    func_800F6C68();
    func_800F824C(0x3D);
    func_800F6C68();
    func_800F824C(0x3E);
    func_800F7270(0x3D);
    func_800F8D00(0x9CF);
    func_800F8D00(0x9D1);
    func_800F8F74(0x8FE);
    func_800F7210(0x9CF);
    for (;;) {
        func_800F6C68();
        if (func_800F6434(2) != 0)
            break;
        func_800F6240(0x8FE);
    }
    func_800F6564(0x8FE);
    if (func_800F6434(0x202) == 0)
        return;
    func_800F8FB8(0xAE);
    func_800F71DC();
    func_800F8D6C(0xAF);
Lc64:
    for (;;) {
        func_800F7210(0x9CF);
        func_800F6C68();
        func_8010D61C();
        func_800F6630(6);
        func_800F5574(0x2E);
        if (func_800F53C0() != 0)
            goto Lcb0;
        func_800F654C();
        goto Ld08;
    Lcb0:
        func_800F5574(0x30);
        if (func_800F53C0() != 0)
            goto Lcd8;
        func_800F654C(3);
        goto Ld08;
    Lcd8:
        func_800F5574(0x46);
        if (func_800F53C0() != 0)
            goto Ld00;
        func_800F654C(2);
        goto Ld08;
    Ld00:
        func_800F654C(1);
    Ld08:
        func_800F824C(7);
        func_800F7210(0x9CF);
        func_800F7594(0xAF);
        func_800F6C68();
        func_800F8960(0x901);
        func_800F4248(3);
        func_800F8960(0x909);
        func_800F61E8();
        func_800F8960(0x902);
        func_800F6D70(0x901);
        func_800F4248(0xFC);
        func_800F78C4(func_800F3C3C(7));
        func_800F8960(0x901);
        func_800F6630(6);
        func_800F5574(0xE);
        if (func_800F53C0() != 0)
            goto Ldc8;
        func_800F6C68();
        goto Le04;
    Ldc8:
        func_800F6C68();
        func_800F4248(0xC);
        func_800F5410();
        func_800F4008(4);
    Le04:
        func_800F8960(0x90D);
        func_800F7210(0x9CF);
        func_800F6C68();
        func_800F8960(0x907);
        func_800F6C68();
        if (func_800F6434(0x80) != 0)
            goto Le54;
        func_800F654C();
        func_800F8960(0x902);
    Le54:
        func_800F6C68();
        func_800F4248(0x3F);
        func_800F8960(0x904);
        func_800F824C(0xC);
        func_800F6C68();
        func_800F8960(0x906);
        func_800F824C(0xE);
        func_800F6D70(0x907);
        func_8010D894();
        func_800F8960(0x90B);
        func_800F5574();
        if (func_800F53D4() == 0)
            func_8010D4EC();
        func_800F654C();
        func_800F8960(0x8FF);
        func_800F8960(0x903);
        func_800F8960(0x905);
        func_800F8960(0x900);
        func_800F8960(0x908);
        func_800F8960(0x90C);
        func_800F6D70(0x904);
        func_800F824C(0x3D);
        func_800F6D70(0x906);
        func_800F824C(0x3E);
        func_800F7270(0x3D);
        func_800F6C68();
        func_800F824C(0x3D);
        func_800F8FB8(0x3E);
        func_800F4F28(func_800F3C3C(0x3D));
        func_800F4F4C();
        func_800F7A40(func_800F3C3C(0x3E));
        func_800F7270(0x3D);
        func_800F6B68(0xEDC);
        func_800F7270(0xAF);
        func_800F4248(8);
        func_800F8768(0x90A);
        func_800F7210(0x9CF);
        func_800F8D00(0x9CF);
        func_800F6630(0xAF);
        func_800F5410();
        func_800F4008(0xF);
        func_800F824C(0xAF);
        func_800F62BC(0xAE);
        func_800F6630(0xAE);
        if (func_800F54D4(func_800F3B04(0x8FE)) == 0)
            continue;
        func_800F654C(0xC);
        func_800F824C(0xAE);
        func_800F654C(0x18);
        func_8010D6A0();
        func_800F654C(0x1B);
        func_800F62BC(0xAE);
        func_8010D6A0();
        func_800F654C(0x1C);
        func_800F62BC(0xAE);
        func_8010D6A0();
        func_800F6564(0xFE1);
        func_800F4248(0xF);
        func_800F7500();
        func_8010D0D8();
        func_800F6564(0xFE1);
        func_800F7500(0x40);
        func_8010D0D8();
        func_8017F8F8();
        return;
    }
}
