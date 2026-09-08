#include "common.h"
void func_80174CE4(void)
{
    /* shop stats: 0x30/0x32 windows, 0x33/0x34 profit cells, 3F94/
       7FCC(3B9C) rows; loops L174D04/L174D14 (5A90(0x10)). */
    func_800F9330();
    func_800F939C();
    func_800F71DC();
L174d04:
    for (;;) {
        func_800F7500(0x80);
        func_800F8FB8(0x33);
    L174d14:
        for (;;) {
            func_800F9644(0x20);
            func_800F6658(0x30);
            func_800F5480();
            func_800F7FCC(func_800F3B9C());
            func_800F8274(0x30);
            func_800F6658(0x32);
            func_800F7FCC(func_800F3B9C());
            func_800F8274(0x32);
            if (func_800F53C0() != 0)
                goto L174DC4;
            func_800F63BC();
        }
    L174DC4:
        func_800F6658(0x30);
        func_800F5410();
        func_800F3F94(func_800F3B9C());
        func_800F8274(0x30);
        func_800F6658(0x32);
        func_800F3F94(func_800F3B9C());
        func_800F8274(0x32);
        func_800F6558();
        func_800F9660(0x20);
        func_800F9330();
        func_800F7864();
        func_800F8674(0x34);
        func_800F95A0();
        func_800F6364();
        func_800F6364();
        func_800F5958(0x10);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F960C();
    func_800F95A0();
    return;
}
