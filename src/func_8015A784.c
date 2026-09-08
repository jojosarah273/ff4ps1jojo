#include "common.h"
void func_8015A784(void)
{
    /* options value row: 0x3558/0x202F/0x2018 texts, 0xAD/0xA9/0xAA/
       0xAB windows, 8015ABEC/8015254C/8015A56C rows; 6434(2) gate
       picks the 0x3558/0x2018 title. */
    func_800F6564(0x3558);
    if (func_800F6434(2) != 0)
        goto L15A7B4;
    func_800F6B68(0x202F);
    goto L15A7BC;
L15A7B4:
    func_800F6B68(0x2018);
L15A7BC:
    func_800F824C(0xAD);
    func_800F4F28(func_800F3C3C(0xAD));
    func_800F4F28(func_800F3C3C(0xAD));
    func_800F5480();
    func_800F654C(0x2C);
    func_800F7F48(func_800F3C3C(0xAD));
    func_800F824C(0xA9);
    func_800F654C(1);
    func_800F8058();
    func_800F824C(0xAA);
    if (func_800F53C0() != 0)
        goto L15A844;
    func_800F71DC(1);
    func_800F8D6C(0xA9);
L15A844:
    func_8015ABEC();
    func_800F7270(0xAB);
    func_800F8D00(0x3945);
    func_800F71DC(6);
    func_800F8D00(0x3947);
    func_8015254C();
    func_800F7210(0x3949);
    func_800F8D6C(0xAB);
    func_8015A56C();
    return;
}
