#include "common.h"
void func_8015E158(void)
{
    func_800F7210(0x3536);
    func_800F8D6C(0xA9);
    func_800F7500(0x30);
LE178:
    for (;;) {
        func_800F6B68(0x2C7A);
        if (func_800F6434(0x8080) != 0)
            goto LE1D8;
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F5EA0();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F62BC(0x90);
    return;
LE1D8:
    func_800F971C();
    func_800F654C(0x2F);
    func_80152224();
    func_800F8D00(0x393D);
    func_800F71DC(4);
    func_800F8D00(0x393F);
    func_8015236C();
    func_800F5410();
    func_800F6630(0xA9);
    func_800F3F38(func_800F3B04(0x3941));
    func_800F824C(0xAB);
    func_800F6630(0xAA);
    func_800F3F38(func_800F3B04(0x3942));
    func_800F824C(0xAC);
    func_800F7270(0xAB);
    func_800F6B68(0x2C7A);
    func_800F824C(0xAD);
    if (func_800F6434(0x80) != 0)
        goto LE1D8;
    func_800F6B68(0x2C7B);
    func_800F7270(0xA6);
    func_800F8768(0x2052);
    func_800F654C(0x20);
    func_800F8768(0x2050);
    func_800F654C(2);
    func_800F8768(0x2051);
    func_800F6630(0xAD);
    func_800F4248(0x40);
    if (func_800F4120(0x202) != 0)
        goto LE3CC;
    func_800F6630(0xAD);
    func_800F4248(0x10);
    if (func_800F4120(2) != 0)
        goto LE3AC;
LE328:
    for (;;) {
        func_8015316C();
        func_800F824C(0xAB);
        func_800F5410();
        func_800F4008(5);
        func_800F6B68(0x3540);
        if (func_800F6434(0x202) != 0)
            continue;
        break;
    }
    func_800F6630(0xAB);
    func_800F971C();
    func_80153098();
    goto LE3B4;
LE3AC:
    func_800F654C(0xFF);
LE3B4:
    func_800F7270(0xA6);
    func_800F8768(0x2053);
    return;
LE3CC:
    func_800F6630(0xAD);
    func_800F4248(0x10);
    if (func_800F4120(2) != 0)
        goto LE43C;
LE3EC:
    for (;;) {
        func_8015319C();
        func_800F6B68(0x3540);
        if (func_800F6434(0x202) != 0)
            continue;
        break;
    }
    func_800F971C();
    func_80153098();
    goto LE444;
LE43C:
    func_800F654C(0xF8);
LE444:
    func_800F7270(0xA6);
    func_800F8768(0x2054);
    return;
}
