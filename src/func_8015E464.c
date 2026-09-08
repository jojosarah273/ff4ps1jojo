#include "common.h"
void func_8015E464(void)
{
    /* options stat row: 0xA6/0xA9/0xAB/0xE3/0xA6 windows, 0x2050-0x2053
       cells, 80152224 + 8015240C + 80153098/8015316C rows; loop
       L15E4BC polls 6434(0x202)/4120(0x202). */
    func_800F7270(0xA6);
    func_800F654C(0x80);
    func_800F8768(0x2050);
    func_800F90EC(0x2051);
    func_800F90EC(0x2054);
    func_800F90EC(0x2053);
    func_800F6B68(0x2004);
    func_800F4248(8);
    if (func_800F4120(2) != 0)
        goto L15E5D0;
L15e4bc:
    for (;;) {
        func_800F71DC();
        func_800F654C(4);
        func_80152224();
        func_800F824C(0xA9);
        func_800F824C(0xDF);
        func_800F6B68(0x3540);
        if (func_800F6434(0x202) != 0)
            continue;
        func_800F654C(0x80);
        func_800F824C(0xAB);
        func_8015240C();
        func_800F7270(0xE3);
        func_800F6B68(0x2003);
        func_800F4248(0xC0);
        if (func_800F4120(0x202) != 0)
            continue;
        func_800F6B68(0x2005);
        func_800F4248(0x82);
        if (func_800F4120(0x202) != 0)
            continue;
        func_800F6B68(0x2006);
        if (func_800F6434(0x80) != 0)
            continue;
        func_800F6630(0xA9);
        func_800F971C();
        func_80153098();
        func_800F7270(0xA6);
        func_800F8768(0x2054);
        break;
    }
    return;
L15E5D0:
    func_8015316C();
    func_800F824C(0xA9);
    func_800F5410();
    func_800F4008(5);
    func_800F6B68(0x3540);
    if (func_800F6434(0x202) != 0)
        goto L15E5D0;
    func_800F6630(0xA9);
    func_800F971C();
    func_80153098();
    func_800F7270(0xA6);
    func_800F8768(0x2053);
    return;
}
