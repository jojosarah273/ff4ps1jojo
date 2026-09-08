#include "common.h"
void func_800FCCDC(void)
{
    func_800F6564(0x1704);
    if (func_800F6434(0x202) != 0)
        goto Ld64;
    func_800F6630(0xA2);
    func_800F4248(0x40);
    if (func_800F4120(2) != 0)
        goto Ld64;
    func_800F6630(0xC0);
    if (func_800F6434(0x202) != 0)
        goto Ldb4;
    func_800F6630(0xAB);
    if (func_800F6434(2) != 0)
        goto Ld64;
    func_800F6630(0xD5);
    if (func_800F6434(2) == 0)
        goto Ldb4;
Ld64:
    func_800F6630(0xC0);
    if (func_800F6434(2) != 0)
        return;
    func_800F8FB8(0xC0);
    func_800F654C(2);
    func_800F8188(0x1E00);
    func_800F654C(1);
    func_800F8188(0x1E01);
    func_80169128();
    return;
Ldb4:
    func_800F62BC(0x88);
    func_800F62BC(0x86);
    if (func_800F60A8(0x202) == 0) {
        func_800F6564(0x17EF);
        func_800F5410();
        func_800F4008(0x11);
        func_800F8188(0x17EF);
    }
    func_800F6564(0x1700);
    func_800F5574();
    if (func_800F53D4() == 0)
        goto Lf30;
    func_800F6564(0x1707);
    func_800F4248(0xF8);
    func_800F824C(6);
    func_800F6564(0x1706);
    func_800F5410();
    func_800F3F38(func_800F3C3C(6));
    func_800F9690();
    func_800F6C68();
    func_800F824C(6);
    func_800F9330();
    func_800F960C();
    func_800F6630(0xC0);
    if (func_800F6434(0x202) != 0)
        goto Lf0c;
    func_800F6630(0x86);
    func_800F9690();
    func_800F6C68();
    func_800F5410();
    func_800F3F38(func_800F3B04(0x17EF));
    if (func_800F54D4(func_800F3C3C(6)) != 0)
        return;
Lf0c:
    func_800F939C();
    func_800F95A0();
    func_800F6C68();
    goto Ld40;
Lf30:
    func_800F5574(1);
    if (func_800F53D4() == 0)
        goto Ld038;
    func_800F6630(0xC0);
    if (func_800F6434(0x202) != 0)
        goto Lfbc;
    func_800F6630(0x86);
    func_800F9690();
    func_800F6C68();
    func_800F5410();
    func_800F3F38(func_800F3B04(0x17EF));
    func_800F3B9C();
    func_800F54D4();
    if (func_800F53C0() != 0)
        return;
Lfbc:
    func_800F6564(0x1707);
    func_800F4248(0xFC);
    func_800F824C(6);
    func_800F6564(0x1706);
    func_800F5410();
    func_800F3F38(func_800F3C3C(6));
    func_800F9690();
    func_800F6C68();
    goto Ld40;
Ld038:
    func_800F5574(2);
    if (func_800F53D4() == 0)
        goto Ld1f4;
    func_800F6630(0xC0);
    if (func_800F6434(0x202) != 0)
        goto Ld0c4;
    func_800F6630(0x86);
    func_800F9690();
    func_800F6C68();
    func_800F5410();
    func_800F3F38(func_800F3B04(0x17EF));
    func_800F3B9C();
    func_800F54D4();
    if (func_800F53C0() != 0)
        return;
Ld0c4:
    func_800F8FB8(6);
    func_800F6564(0x1707);
    func_800F5574(0x20);
    if (func_800F53C0() != 0) {
        func_800F654C(2);
        func_800F824C(6);
    }
    func_800F6564(0x1706);
    func_800F5574(0x20);
    if (func_800F53C0() != 0)
        func_800F62BC(6);
    func_800F6630(6);
    func_800F9690();
    func_800F6C68();
Ld40:
    func_800FD494();
    func_800F8FB8(0x3E);
    func_800F7270(0x3D);
    func_800F6C68();
    func_800F8188(0x1800);
    func_800F6564(0x1701);
    if (func_800F6434(2) == 0)
        func_800F654C(1);
    func_800F8188(0x1801);
    func_800F6630(0xA2);
    func_800F4248(7);
    func_800F96E0(0x1802);
    func_800F8188();
    func_800F8FB8(0xC0);
    func_800F654C(1);
    func_800F824C(0x85);
    return;
Ld1f4:
    func_800F6564(0x1702);
    func_800F824C(0x3D);
    func_800F6564(0x1701);
    if (func_800F6434(2) == 0)
        func_800F654C(1);
    func_800F824C(0x3E);
    func_800F7270(0x3D);
    func_800F6C68();
    if (func_800F6434(2) != 0)
        goto Ld2c4;
    func_800F824C(6);
    func_800F6630(0xC0);
    if (func_800F6434(0x202) != 0)
        goto Ld30c;
    func_800F6630(0x86);
    func_800F9690();
    func_800F6C68();
    func_800F5410();
    func_800F3F38(func_800F3B04(0x17EF));
    if (func_800F54D4(func_800F3C3C(6)) == 0)
        goto Ld30c;
Ld2c4:
    func_800F6630(0xC0);
    if (func_800F6434(2) != 0)
        return;
    func_800F8FB8(0xC0);
    func_800F654C(2);
    func_800F8188(0x1E00);
    func_800F8F74(0x1E01);
    func_80169128();
    return;
Ld30c:
    func_800F7270(0x3D);
    func_800F6C68();
    func_800FD494();
    func_800F7270(0x3D);
    func_800F6C68();
    func_800F8188(0x1800);
    func_800FD37C();
    func_800F8FB8(0xC0);
    func_800F654C(1);
    func_800F824C(0x85);
    func_800F8FB8(0x88);
    return;
}
