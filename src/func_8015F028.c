#include "common.h"
void func_8015F028(void)
{
    /* options row: 0x354D/0x3550/0x2703/0x354F texts, 0xA9/0xAB
       windows, 801531CC/80160A4C/8015330C/8015240C rows; loops
       L15F090/L15F110. */
    func_800F654C(1);
    func_800F8188(0x354D);
    func_801531CC();
    func_800F5574(0x32);
    if (func_800F53C0() == 0)
        goto L15F0D0;
    func_800F971C();
    func_800F8188(0x3550);
    func_800F8D6C(0xA9);
L15f090:
    for (;;) {
        func_80160A4C();
        func_8015330C();
        func_800F62BC(0xA9);
        func_800F6630(0xA9);
        func_800F5574(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
L15F0D0:
    func_800F6564(0x2703);
    func_800F8188();
    func_800F8FB8(0xAB);
    func_800F6564(0x354F);
    func_800F824C(0xA9);
L15f110:
    for (;;) {
        func_800F3C3C(0xA9);
        func_800F4F28();
        if (func_800F4FAC(0x101) != 0)
            goto L15F198;
        func_800F5410();
        func_800F6630(0xAB);
        func_800F4008(5);
        func_800F824C(0xDF);
        func_800F654C(0x80);
        func_800F824C(0xE1);
        func_8015240C();
        func_800F7270(0xE3);
        func_800F6B68(0x2003);
        func_800F8768();
    L15F198:
        func_800F62BC(0xAB);
        func_800F6630(0xAB);
        func_800F5574(8);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
