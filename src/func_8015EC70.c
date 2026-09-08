#include "common.h"
void func_8015EC70(void)
{
    func_80160AAC();
    func_800F6564(0x38FE);
    if (func_800F6434(0x8080) != 0)
        goto LECB8;
    func_800F4248(0x7F);
    func_800F8188(0x38FE);
    func_8006508C();
    return;
LECB8:
    func_80160B8C();
    func_80061860();
    func_800F6564(0x3906);
    if (func_800F54D4(func_800F3B04(0x354D)) == 0)
        return;
    func_800F6240(0x3553);
    func_800F7270(0xA4);
    func_800F9330();
    func_800F971C();
    func_800F8D6C(0xA9);
    func_800F8D6C(0xAB);
    func_800F8D00(0x291C);
    func_800F8D00(0x291E);
    func_800F8D00(0x2920);
LED50:
    for (;;) {
        func_800F7270(0xA9);
        func_800F6564(0x3540);
        if (func_800F6434(0x202) != 0)
            goto LEE28;
        func_800F6630(0xA9);
        func_800F824C(0xDF);
        func_800F654C(0x80);
        func_800F824C(0xE1);
        func_8015240C();
        func_800F7270(0xE3);
        func_800F6B68(0x2003);
        func_800F4248(0xC0);
        if (func_800F4120(0x202) != 0)
            goto LEE28;
        func_800F6B68(0x2005);
        func_800F4248(2);
        if (func_800F4120(0x202) != 0)
            goto LEE28;
        func_800F6B68(0x2006);
        if (func_800F6434(0x80) != 0)
            goto LEE28;
        func_800F62BC(0xAB);
        func_800F7270(0xA9);
        func_800F6048(func_800F3B04());
    LEE28:
        func_800F62BC(0xA9);
        func_800F6630(0xA9);
        func_800F5574(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F7270(0xA4);
    func_800F8D00(0x3945);
    func_800F7270(0xAB);
    func_800F8D00(0x3947);
    func_8015254C();
    func_800F7210(0x3949);
    func_800F8D6C(0xA4);
    func_800F971C();
    func_800F8D6C(0xA9);
LEEB0:
    for (;;) {
        func_800F7270(0xA9);
        func_800F6B68(0x291C);
        if (func_800F6434(2) != 0)
            goto LEFE0;
        func_800F6630(0xA9);
        func_800F824C(0xDF);
        func_800F654C(0x80);
        func_800F824C(0xE1);
        func_8015240C();
        func_800F9644(0x20);
        func_800F7270(0xE3);
        func_800F5410();
        func_800F6BE0(0x2007);
        func_800F3F94(func_800F3C3C(0xA4));
        func_800F5520(func_800F3B04());
        if (func_800F53C0() == 0)
            goto LEF60;
        func_800F6BE0(0x2009);
    LEF60:
        func_800F87DC(0x2007);
        func_800F971C();
        func_800F9660(0x20);
        func_80160A4C();
        func_800F6630(0xA9);
        func_800F5140(0xA4);
        func_800F6630();
        func_800F8768(0x34D4);
        func_800F6630(0xA5);
        func_800F8768(0x34D5);
    LEFE0:
        func_800F62BC(0xA9);
        func_800F6630(0xA9);
        func_800F5574(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F95A0();
    func_800F8D6C(0xA4);
    return;
}
