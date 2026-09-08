#include "common.h"
void func_8016E668(void)
{
    /* battle stat overlay: 0xA9/0xAB/0xB5/0xB7/0xB1/0xB3 windows,
       0x3591/0x3593 titles; 7B40/7B7C row pair draws + 7FCC/3F94(3C3C)
       value cells; loops L16E688/L16E6F0. */
    func_800F7270(0xAB);
    func_800F9330();
    func_800F71DC(0xF);
L16e688:
    for (;;) {
        func_800F902C(0xA9);
        func_800F5E48();
        if (func_800F5C64() != 0)
            continue;
        break;
    }
    func_800F95A0();
    func_800F8D6C(0xAD);
    func_800F7210(0x3591);
    func_800F8D6C(0xA9);
    func_800F6564(0x3593);
    func_800F824C(0xAB);
    func_800F9644(0x20);
    func_800F5410();
    func_800F71DC(0x20);
L16e6f0:
    for (;;) {
        func_800F7B40(func_800F3C3C(0xA9));
        func_800F7B7C();
        func_800F7B40(func_800F3C3C(0xAB));
        func_800F7B7C();
        func_800F7B40(func_800F3C3C(0xB5));
        func_800F5480();
        func_800F6658(0xB5);
        func_800F7FCC(func_800F3C3C(0xAD));
        func_800F8274(0xB5);
        func_800F6658(0xB7);
        func_800F7FCC(func_800F3C3C(0xAF));
        func_800F8274(0xB7);
        if (func_800F53C0() != 0)
            goto L16E7E8;
        func_800F6658(0xB5);
        func_800F3F94(func_800F3C3C(0xAD));
        func_800F8274(0xB5);
        func_800F6658(0xB7);
        func_800F3F94(func_800F3C3C(0xAF));
        func_800F8274(0xB7);
        func_800F5410();
    L16E7E8:
        func_800F7B40(func_800F3C3C(0xB1));
        func_800F7B7C();
        func_800F7B40(func_800F3C3C(0xB3));
        func_800F7B7C();
        func_800F5E48();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F6658(0xB1);
    func_800F8274(0xAD);
    func_800F6658(0xB3);
    func_800F8274(0xAF);
    func_800F971C();
    func_800F9660(0x20);
    return;
}
