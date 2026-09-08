#include "common.h"
void func_80162D20(void)
{
    /* options timeline: 0xCD window, 0x2009/0x2007/0x2003 gates,
       80152BC4/80162DF8 rows; 53C0/6434(0x80) gates. */
    func_800F6630(0xCD);
    if (func_800F6434(0x80) != 0)
        goto L162DD0;
    func_800F9644(0x20);
    func_800F7270(0xA6);
    func_800F6BE0(0x2009);
    func_80152BC4();
    func_800F8274(0xA9);
    func_800F5480();
    func_800F6BE0(0x2007);
    func_800F7FCC(func_800F3C3C(0xA9));
    func_800F87DC(0x2007);
    if (func_800F53C0() != 0)
        goto L162DC0;
    func_800F6558();
    func_800F87DC(0x2007);
    func_800F6558(0x80);
    func_800F87DC(0x2003);
L162DC0:
    func_800F971C();
    func_800F9660(0x20);
L162DD0:
    func_800F654C(1);
    func_800F824C(0xC1);
    func_80162DF8();
    return;
}
