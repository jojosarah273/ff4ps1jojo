#include "common.h"
void func_8015F3E0(void)
{
    /* options/music screen: 0x38FE gate, 0x2724/0x2704 texts, 0xAA/0xD6/
       0xCF windows, 80160AAC prep, 8006508C/801608C4/800654CC/
       8015A374/80153374 rows. */
    func_80160AAC();
    func_800F6564(0x38FE);
    if (func_800F6434() != 0)
        goto L15F428;
    func_800F4248(0x7F);
    func_800F8188(0x38FE);
    func_8006508C();
    return;
L15F428:
    func_800F6564(0x2724);
    func_800F4280(0x28A4);
    if (func_800F4120(2) != 0)
        goto L15F458;
    func_801608C4();
    return;
L15F458:
    func_800F6564(0x2704);
    func_800F4248(0xFC);
    func_800F824C(0xAA);
    func_800F6564(0x2704);
    func_800F4248(3);
    func_800F5410();
    func_800F4008(1);
    func_800F5574(4);
    if (func_800F53C0() == 0)
        goto L15F4C8;
    func_800F6630(0xAA);
    func_800F8188(0x2704);
    func_800654CC();
    return;
L15F4C8:
    func_800F78C4(func_800F3C3C(0xAA));
    func_800F8188(0x2704);
    func_800F654C(7);
    func_800F824C(0xD6);
    func_800F6630(0xCF);
    func_8015A374();
    func_800F654C(0xC);
    func_80153374();
    func_800F654C(0x40);
    func_800F8768(0x2A06);
    func_800F6630(0xCF);
    func_800F5140();
    func_800F6B68(0x29EB);
    func_800F8768();
    func_800F6630(0xD4);
    func_800F8768(0x2B2C);
    func_800F6630(0xD5);
    func_800F8768(0x2B2D);
    return;
}
