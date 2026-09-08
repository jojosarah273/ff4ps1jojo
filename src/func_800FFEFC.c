#include "common.h"
void func_800FFEFC(void)
{
    func_800F6564(0x1705);
    if (func_800F6434(0x202) != 0)
        goto Lf5c;
    func_800F6630(0xA4);
    if (func_800F6434(0x8080) != 0)
        return;
    func_800F6564(0x1706);
    func_800F824C(0xC);
    func_800F6564(0x1707);
    func_800F5CCC();
    goto L014;
Lf5c:
    func_800F6564(0x1705);
    func_800F5574(1);
    if (func_800F53D4() == 0)
        goto Lfbc;
    func_800F6630(0xA6);
    if (func_800F6434(0x8080) != 0)
        return;
    func_800F6564(0x1706);
    func_800F61E8();
    func_800F824C(0xC);
    func_800F6564(0x1707);
    goto L014;
Lfbc:
    func_800F6564(0x1705);
    func_800F5574(2);
    if (func_800F53D4() == 0)
        goto L024;
    func_800F6630(0xA8);
    if (func_800F6434(0x8080) != 0)
        return;
    func_800F6564(0x1706);
    func_800F824C(0xC);
    func_800F6564(0x1707);
    func_800F61E8();
L014:
    func_800F824C(0xE);
    goto L064;
L024:
    func_800F6630(0xAA);
    if (func_800F6434(0x8080) != 0)
        return;
    func_800F6564(0x1706);
    func_800F5CCC();
    func_800F824C(0xC);
    func_800F6564(0x1707);
    func_800F824C(0xE);
L064:
    func_800F6564(0x711);
    if (func_800F6434(0x202) == 0)
        return;
    func_80100B30();
    func_800F7500();
    func_800F7270(0x3D);
    for (;;) {
        func_800F6C68();
        if (func_800F54D4(func_800F3C3C(0xC)) == 0)
            goto L0ec;
        func_800F6C68();
        if (func_800F54D4(func_800F3C3C(0xE)) != 0)
            goto L140;
    L0ec:
        func_800F63BC();
        if (func_800F54D4(func_800F3B04(0x711)) == 0)
            continue;
        return;
    }
L140:
    func_800F8D6C(0x40);
    func_800F5410();
    func_800F3F38(func_800F3B04(0xFE7));
    func_800F8188(0x8FC);
    func_801009E8();
    func_800F5574();
    if (func_800F53D4() == 0)
        goto L46c;
    func_800F6564(0x1705);
    func_800F9690();
    func_800F6B68(0x70C);
    func_800F5574(0x78);
    if (func_800F53D4() == 0)
        goto L250;
    func_800F6630(0xC);
    func_800F824C(0x3D);
    func_800F6630(0xE);
    func_800F824C(0x3E);
    func_800F7270(0x3D);
    func_800F654C(0x77);
    func_800F885C();
    func_80105230();
    func_800F8D00(0x6FE);
    func_80100894();
    func_800F654C(0x30);
    func_800FD804();
    func_800F654C(1);
    func_800F824C(0xD4);
    func_800F654C(1);
    func_800F824C(0xB2);
    goto L270;
L250:
    func_800F654C(0x16);
    func_800F824C(0xB2);
    func_800F654C(0x37);
    func_800FD804();
L270:
    func_800F7270(0x40);
    func_800F6C68();
    func_800F824C(9);
    func_800F6C68();
    func_800F824C(8);
    func_800F6630(9);
    func_800F4248(0x40);
    if (func_800F4120(2) != 0)
        goto L374;
    func_800F6630(8);
    func_800F824C(0xC6);
    func_800F6564(0x1701);
    func_800F824C(8);
    func_800F6630(9);
    func_800F4248(0x1F);
    func_800F5410();
    func_800F3F38(func_800F3C3C(8));
    func_800F5410();
    func_800F4008(0xC0);
    func_800F8188(0x1800);
    func_800F654C(1);
    func_800F8188(0x1801);
    func_800FD404();
    func_800F654C(1);
    func_800F824C(0x85);
    func_800F654C(3);
    func_800F824C(0xB2);
    goto L44c;
L374:
    func_800F6630(9);
    func_800F4248(0x80);
    if (func_800F4120(2) != 0)
        goto L3cc;
    func_800F6630(8);
    func_800F8188(0x8FB);
    func_801082C8();
    func_80107C98();
    func_80107F3C();
    func_801005DC();
    return;
L3cc:
    func_800F62BC(0xB2);
    func_800F6630(8);
    func_800F4248(0x7F);
    func_800F824C(0x18);
    func_800F8FB8(0x19);
    func_800F6630(8);
    func_800F4248(0x80);
    if (func_800F4120(0x202) != 0)
        goto L424;
    func_800F71DC(0xA);
    goto L42c;
L424:
    func_800F71DC(0x3E8);
L42c:
    func_800F8D6C(0x1A);
    func_80174F0C();
    func_801196B0();
    func_801004D4();
L44c:
    func_801082C8();
    func_80107C98();
    func_80107F3C();
    return;
L46c:
    func_800F6564(0x1705);
    func_800F9690();
    func_800F6B68(0x70C);
    func_800F5574(0x77);
    if (func_800F53D4() == 0)
        return;
    func_800F654C(4);
    func_800F824C(0xB2);
    func_801082C8();
    func_80107C98();
    func_80107F3C();
    return;
}
