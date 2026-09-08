#include "common.h"
void func_800FA5B8(void)
{
    /* battle item-use confirm: 0xD5/0x50/2 window gates, 0x1700/0x1704
       headers, 0xA04 name row, 801163E8 executes the use. */
    func_800F6630(0xD5);
    if (func_800F6434(0x202) == 0)
        return;
    func_800F6630(0x50);
    if (func_800F6434(2) == 0)
        return;
    func_800F6630(2);
    func_800F4248(0x40);
    if (func_800F4120(0x202) == 0)
        return;
    func_800F654C(1);
    func_800F824C(0x50);
    func_800F6564(0x1700);
    func_800F5574(3);
    if (func_800F53D4() == 0)
        goto LFA66C;
    func_800F6564(0xFD8);
    func_800F4248(0x30);
    goto LFA69C;
LFA66C:
    func_800F6564(0x1704);
    if (func_800F6434(0x202) != 0)
        goto LFA694;
    func_800F654C(0x40);
    goto LFA69C;
LFA694:
    func_800F654C();
LFA69C:
    func_800F8188(0x1A04);
    func_800FC5A8();
    func_8011EA7C();
    func_800F6564(0x1700);
    func_800F5574(3);
    if (func_800F53D4() == 0)
        goto LFA6E4;
    func_800F7210(0x16AA);
    func_800F8D00(0xCDD);
LFA6E4:
    func_800FC5D8();
    func_800F6564(0x1A03);
    if (func_800F6434(2) != 0)
        return;
    func_800F654C(1);
    func_800F824C(0xB1);
    func_800F8FB8(0xAB);
    func_800F6564(0x1A03);
    func_800F5574(3);
    if (func_800F53C0() != 0)
        goto LFA75C;
    func_800F6564(0x1A03);
    func_800F5410();
    func_800F4008(0x76);
    goto LFA80C;
LFA75C:
    func_800F5574(3);
    if (func_800F53D4() == 0)
        goto LFA784;
    func_800F654C(0x87);
    goto LFA80C;
LFA784:
    func_800F5574(4);
    if (func_800F53D4() == 0)
        goto LFA7AC;
    func_800F654C(0x86);
    goto LFA80C;
LFA7AC:
    func_800F5574(5);
    if (func_800F53D4() == 0)
        goto LFA7D4;
    func_800F654C(0xFB);
    goto LFA80C;
LFA7D4:
    func_800F5574(6);
    if (func_800F53D4() == 0)
        goto LFA804;
    func_800F654C(1);
    func_800F824C(0xC0);
    goto LFA814;
LFA804:
    func_800F654C(0xDB);
LFA80C:
    func_801163E8();
LFA814:
    func_800F8FB8(0xB1);
    func_800FD718();
    return;
}
