#include "common.h"
void func_80119E7C(void)
{
    func_800F6564(0x1706);
    func_800F5480();
    func_800F8058(7);
    func_800F824C(0x3D);
    func_800F6564(0x1707);
    func_800F5480();
    func_800F8058(7);
    if (func_800F53FC() == 0)
        goto L19EF8;
    func_800F5410();
    func_800F4008(0xF);
    func_800F824C(7);
    func_800F8FB8(0x3E);
    goto L19F18;
L19EF8:
    func_800F4248(0x1F);
    func_800F824C(0x3E);
    func_800F654C(0xF);
    func_800F824C(7);
L19F18:
    func_800F7270(0x3D);
    func_800F7500(0x10);
L19f2c:
    for (;;) {
        func_800F6C68();
        func_800F5574(0x60);
        if (func_800F53D4() != 0)
            goto L19FB4;
        func_800F6364();
        func_800F5EA0();
        if (func_800F5C64(0x202) != 0)
            continue;
        func_800F62BC(0x3E);
        func_800F6630(0x3E);
        func_800F5574(0x20);
        if (func_800F53C0() != 0)
            goto L1A1EC;
        func_800F5DA0(7);
        if (func_800F5B8C(0x202) != 0)
            goto L19F18;
        goto L1A1EC;
    L19FB4:
        func_800F8D6C(0x3D);
        func_800F654C(0x64);
        func_800F885C();
        func_800F61E8();
        func_800F885C();
        func_800F61E8();
        func_800F885C();
        func_800F61E8();
        func_800F885C();
        func_8011A204();
        func_800F71DC();
        func_800F7500();
    L1a024:
        for (;;) {
            func_800F9644(0x20);
            func_800F6CF4();
            func_800F6CF4();
            func_800F6CF4();
            func_800F6CF4();
            func_800F89D4(0xA27);
            func_800F89D4(0xA29);
            func_800F89D4(0xA2F);
            func_800F89D4(0xA31);
            func_800F6558();
            func_800F9660(0x20);
            func_800F4248(7);
            if (func_800F4120(2) != 0)
                goto L1A19C;
            func_800F5410();
            func_800F4008(8);
        L1A19C:
            func_800F5958(8);
            if (func_800F53D4() == 0)
                continue;
            break;
        }
        func_800F654C(1);
        func_800F824C(0xE2);
        func_800F654C(0x31);
        func_800FD804();
    L1A1EC:
        func_8011EA5C();
        return;
    }
}
