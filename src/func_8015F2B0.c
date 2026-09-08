#include "common.h"
void func_8015F2B0(void)
{
    /* options: 0x289D/0x38FE/0x2709/0x270A texts, 0xA9 window,
       80160AAC/80160B8C/8006508C/8015254C rows; 6434/53C0 gates. */
    func_800F6564(0x289D);
    func_800F824C(0xA9);
    func_80160AAC();
    func_800F6564(0x38FE);
    if (func_800F6434() != 0)
        goto L15F308;
    func_800F4248(0x7F);
    func_800F8188(0x38FE);
    func_8006508C();
    return;
L15F308:
    func_80160B8C();
    func_800F6564(0x38FE);
    func_800F5574(2);
    if (func_800F53C0() != 0)
        goto L15F348;
    func_800F654C(0xA);
    func_800F824C(0xA9);
    goto L15F370;
L15F348:
    func_800F5574(4);
    if (func_800F53C0() == 0)
        goto L15F370;
    func_800F76BC(func_800F3C3C(0xA9));
L15F370:
    func_800F6630(0xA9);
    func_800F8D00(0x3947);
    func_800F6564(0x2709);
    func_800F8188(0x3945);
    func_800F6564(0x270A);
    func_800F8188(0x3946);
    func_8015254C();
    func_800F7210(0x3949);
    func_800F8D6C(0xA4);
    return;
}
