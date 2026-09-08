#include "common.h"
void func_80152224(void)
{
    /* config banner: 0x96/0x97 windows, 0x3947-0x394B texts, 8015254C
       rows; gates 58BC(0xFF)/54D4(3C3C(0x96)); loop on 5574(0xFF). */
    func_800F9660(0x10);
    func_800F8D40(0x96);
    func_800F58BC(0xFF);
    if (func_800F53D4() != 0)
        goto L152354;
    func_800F5574();
    if (func_800F53D4() != 0)
        goto L152354;
    if (func_800F54D4(func_800F3C3C(0x96)) != 0)
        goto L152354;
    func_800F7248(0x97);
    func_800F5480();
    func_800F7F48(func_800F3C3C(0x96));
    func_800F5574(0xFF);
    if (func_800F53D4() == 0)
        goto L1522D4;
    func_800F6B38(0x1900);
    goto L152354;
L1522D4:
    func_800F61E8();
    func_800F8188(0x3947);
    func_800F8F74(0x3948);
    func_800F6B38(0x1900);
    func_800F8CD4(0x3945);
    func_800F9644(0x10);
    func_8015254C();
    func_800F9660(0x10);
    func_800F5410();
    func_800F6564(0x394B);
    func_800F3F38(func_800F3C3C(0x96));
    func_800F62BC(0x97);
    return;
L152354:
    func_800F9644(0x10);
    return;
}
