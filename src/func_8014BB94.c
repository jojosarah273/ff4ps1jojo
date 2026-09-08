#include "common.h"
void func_8014BB94(void)
{
    func_800F8188(0xF133);
    func_800F6564(0x34C5);
    if (func_800F6434(0x202) == 0)
        return;
    func_800F654C(4);
    func_800F8188(0xF2D0);
    func_800F71DC(0x8060);
    func_800F8D00(0xF289);
    func_8014B98C();
    func_800F654C(0x8D);
    func_8014D780();
    func_8014096C();
    func_800F654C(2);
    func_800F8188(0xEF87);
    func_800F8F74(0xF2D0);
    func_800F971C();
    for (;;) {
        func_800F90EC(0xEBE6);
        func_800F8768(0xEBE7);
        func_800F9200();
        func_800F654C(0x80);
        func_800F8768(0xEC06);
        func_800F93DC();
        func_800F5410();
        func_800F4008(0x10);
        func_800F5958(0x20);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F654C(0xA0);
    func_800F8188(0xF29F);
Lbcb8:
    for (;;) {
        func_8007259C();
        func_8014D98C();
        func_800F71DC();
    Lbcd0:
        func_800F6B68(0xEBE7);
        if (func_800F6434(0x202) != 0)
            goto Lbd48;
        func_800F6564(0x34C4);
        if (func_800F6434(0x80) != 0)
            goto Lbd28;
        func_8014E9C4();
        func_800F4248(0x7F);
        func_800F5410();
        func_800F4008(0x60);
        goto Lbd30;
    Lbd28:
        func_8014E9C4();
    Lbd30:
        func_800F8768(0xEBE6);
        func_800F654C(0xF);
        func_800F8768(0xEC06);
    Lbd48:
        func_800F4248(7);
        func_800F5410();
        func_800F4008(3);
        func_800F824C(2);
        func_800F6564(0x34C4);
        if (func_800F6434(0x8080) != 0)
            goto Lbe10;
        func_800F654C(0x3F);
        func_800F824C();
        func_800F6B68(0xEBE6);
        func_800F5480();
        func_800F7F48(func_800F3C3C(2));
        func_800F8768(0xEBE6);
        if (func_800F53C0() != 0)
            goto Lbec0;
        func_800F6B68(0xEC06);
        func_800F8768(0xEC06);
        goto Lbec0;
    Lbe10:
        func_800F654C(0x7F);
        func_800F824C();
        func_800F6B68(0xEBE6);
        func_800F5410();
        func_800F3F38(func_800F3C3C(2));
        func_800F8768(0xEBE6);
        if (func_800F53C0() == 0)
            goto Lbec0;
        func_800F6B68(0xEC06);
        func_800F8768(0xEC06);
    Lbec0:
        func_800F6B68(0xEBE7);
        func_800F5410();
        func_800F4008(8);
        func_800F8768(0xEBE7);
        func_800F5958(0x20);
        if (func_800F53D4() == 0)
            goto Lbcd0;
        break;
    }
    func_800F71DC();
    func_800F7500();
Lbf20:
    for (;;) {
        func_800F6B68(0xEC06);
        if (func_800F6434(0x8080) != 0)
            goto Lbf58;
        func_800F654C(0xF0);
        func_800F8960(0x3C0);
        func_800F8960(0x3C1);
        goto Lc088;
    Lbf58:
        func_800F5B2C(func_800F3B04());
        func_800F6B68(0xEBE6);
        func_800F8960(0x3C0);
        func_800F6B68(0xEBE7);
        func_800F5480();
        func_800F8058(4);
        func_800F8960(0x3C1);
        func_800F6564(0xF133);
        func_800F5574(0xE4);
        if (func_800F53D4() != 0)
            goto Lbff0;
        func_800F6564(0x1813);
        func_800F4248(2);
        func_800F5410();
        func_800F3F38(func_800F3B04(0xF133));
    Lbff0:
        func_800F8960(0x3C2);
        func_800F6564(0x6CC0);
        if (func_800F6434(2) != 0)
            goto Lc078;
        func_800F6630(0x3C3);
        func_800F8960();
        func_800F6B68(0xEBE6);
        func_800F5480();
        func_800F8058(0x10);
        func_800F8960(0x3C0);
        goto Lc088;
    Lc078:
        func_800F6630();
        func_800F8960(0x3C3);
    Lc088:
        func_800F5958(0x20);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F5D24(0xF29F);
    if (func_800F5B8C(2) == 0)
        goto Lbcb8;
    func_800F8F74(0xEF87);
    func_800F71DC();
    func_800F8D00(0xF289);
    return;
}
