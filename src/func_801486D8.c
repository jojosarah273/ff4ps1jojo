#include "common.h"
void func_801486D8(void)
{
    /* battle item detail: 0xE/0x10/0x11 windows, 0x500/0x301-0x303
       cells, 78C4(3C3C(0x10)) rows, 6434(2)/6CC0 gates. */
    func_800F6564();
    if (func_800F6434(2) != 0)
        return;
    func_800F6564();
    func_800F824C(0xE);
    func_800F6630();
    func_800F4248(3);
    func_800F6C68();
    func_800F824C(0x10);
    func_800F6C68();
    func_800F824C(0x11);
    func_800F6D70(0x500);
    func_800F4370(0x11);
    func_800F78C4(func_800F3C3C(0x10));
    func_800F8960(0x500);
    func_800F6630(0xE);
    func_800F9644(0x20);
    func_800F971C();
    func_800F9660(0x20);
    func_800F6564();
    func_800F8768(0x301);
    func_800F6564();
    func_800F8768(0x302);
    func_800F6564(0x6CC0);
    if (func_800F6434(2) != 0)
        goto L1488A4;
    func_800F6564();
    func_800F5480();
    func_800F8058(0x10);
    func_800F8768(0x300);
    func_800F6564(0x303);
    func_800F8768();
    return;
L1488A4:
    func_800F6564();
    func_800F8768(0x300);
    func_800F6564();
    func_800F8768(0x303);
    return;
}
