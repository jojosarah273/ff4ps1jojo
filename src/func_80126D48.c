#include "common.h"
void func_80126D48(void)
{
    /* rows: 0x48 window, 80132178 row; loop L126D58 (4120(0x202)
       gate), closes on 0xE7/0x1B3E/0x1B2A texts. */
    func_800F8FB8(0x48);
L126d58:
    for (;;) {
        func_800F6630(0x48);
        func_80132178();
        func_800F6B68();
        func_800F4248(0x3F);
        if (func_800F4120(0x202) != 0)
            goto L126DB0;
        func_800F62BC(0x48);
        func_800F6630(0x48);
        func_800F5574(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
L126DB0:
    func_800F6630(0x48);
    func_800F824C(0xE7);
    func_800F8188(0x1B3E);
    func_800F8188(0x1B2A);
    func_800F71DC();
    func_800F8D00(0x1BA5);
    func_800F6564(0x16A9);
    func_800F63F8();
    func_800F824C(0x1C);
    return;
}
