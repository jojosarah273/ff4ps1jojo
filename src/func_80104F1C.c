#include "common.h"
void func_80104F1C(void)
{
    /* shop buy-row: 0x709/0x1706/0x1707 texts, 0xD2/0xC/0xE/0x3D/0xEE
       windows, 8010D54C; 6A78(0xA1) gate. */
    func_800F6564(0x709);
    func_800F96E0();
    func_800F5140();
    func_800F9690();
    func_800F6A78(0xA1);
    func_800F4248(4);
    if (func_800F4120(2) != 0)
        goto L104F94;
    func_800F6630(0xD2);
    func_800F5574(1);
    if (func_800F53D4() != 0)
        goto L104F94;
    func_800F654C();
    return;
L104F94:
    func_800F9330();
    func_800F6564(0x1706);
    func_800F5410();
    func_800F4008();
    func_800F824C(0xC);
    func_800F5574(0x20);
    if (func_800F53C0() != 0)
        goto L105078;
    func_800F6564(0x1707);
    func_800F5410();
    func_800F4008();
    func_800F824C(0xE);
    func_800F5574(0x20);
    if (func_800F53C0() != 0)
        goto L105078;
    func_8010D54C();
    func_800F7270(0x3D);
    func_800F6C68();
    if (func_800F6434() != 0)
        goto L105078;
    func_800F824C(0xEE);
    goto L105080;
L105078:
    func_800F654C();
L105080:
    func_800F95A0();
    return;
}
