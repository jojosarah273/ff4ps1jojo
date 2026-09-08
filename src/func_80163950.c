#include "common.h"
void func_80163950(void)
{
    /* options row screen: 5574 key ladder (0xDE/0xB0/0x6D/0x61 codes)
       routes to the 0x289C/0x289F stat rows (801526F8 header, 80152BC4
       detail, 0x321D/0x3228 text cells, 0xC7 window); exit at L163B78. */
    if (func_800F53D4() != 0)
        return;
    func_800F5574(0xDE);
    if (func_800F53C0() != 0)
        return;
    func_800F5574(0xB0);
    if (func_800F53C0() != 0)
        goto L163AD0;
    func_800F5574(0x6D);
    if (func_800F53C0() != 0)
        return;
    func_800F5574(0x61);
    if (func_800F53C0() == 0)
        goto L1639E0;
    func_800F654C();
    if (func_800F6434(2) != 0)
        goto L163B70;
L1639E0:
    func_800F8D6C(0xE5);
    func_800F71DC();
    func_800F8D6C(0x80);
    func_800F654C(0xF);
    func_800F824C(0x82);
    func_800F654C(8);
    func_801526F8();
    func_800F9200();
    func_800F6564(0x289C);
    func_80152BC4();
    func_800F4248(8);
    func_800F824C(0xC7);
    func_800F93DC();
    func_800F8D6C(0xE5);
    func_800F71DC();
    func_800F8D6C(0x80);
    func_800F654C(0xF);
    func_800F824C(0x82);
    func_800F654C(6);
    func_801526F8();
    func_800F7270(0xAB);
    func_800F6564(0x289F);
    func_800F8768(0x321D);
    goto L163B48;
L163AD0:
    func_800F5480();
    func_800F8058(0xB0);
    func_800F8D6C(0xE5);
    func_800F71DC();
    func_800F8D6C(0x80);
    func_800F654C(0xF);
    func_800F824C(0x82);
    func_800F654C(6);
    func_801526F8();
    func_800F7270(0xAB);
    func_800F6564(0x289F);
    func_800F8768(0x321D);
L163B48:
    func_800F6564(0x289C);
    func_800F4248(0xE0);
    func_800F78C4(func_800F3C3C(0xC7));
    func_800F7864();
L163B70:
    func_800F8768(0x3228);
    return;
}
