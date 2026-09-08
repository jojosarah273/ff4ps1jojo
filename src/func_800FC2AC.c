#include "common.h"
void func_800FC2AC(void)
{
    /* battle confirm-dialog: two 5958/53C0 key-gates select the 0x1802
       header, then the 0x1700-0x1702 option rows, then 0x1803 dispatch
       (801762D0/80187B00 vs the 0x1804-0x180B detail fill), 0x2100 title,
       and 8010CA74 confirm. */
    func_800F7210(0x1800);
    func_800F5958(0x1B7);
    if (func_800F53C0() == 0)
        goto LFC2FC;
    func_800F5958(0x1B9);
    if (func_800F53C0() != 0)
        goto LFC2FC;
    func_800F654C(0x10);
    func_800F8188(0x1802);
LFC2FC:
    func_800F6564(0x1700);
    func_800F5574(3);
    if (func_800F53D4() == 0)
        goto LFC3C0;
    func_800F6564(0x1701);
    if (func_800F6434(2) != 0)
        goto LFC3C0;
    func_800F6564(0x1702);
    func_800F5574(0x5A);
    if (func_800F53C0() == 0)
        goto LFC36C;
    func_800F5574(0x5D);
    if (func_800F53C0() == 0)
        goto LFC39C;
LFC36C:
    func_800F5574(0x67);
    if (func_800F53C0() == 0)
        goto LFC3C0;
    func_800F5574(0x7F);
    if (func_800F53C0() != 0)
        goto LFC3C0;
LFC39C:
    func_800F6564(0x1801);
    func_800F8188();
LFC3C0:
    func_800FB3F8();
    func_800F92D8();
    func_800F54B8();
    func_8015084C();
    func_800FC548();
    func_800F9538();
    func_800F6564(0x1803);
    if (func_800F6434() != 0)
        goto LFC434;
    func_801762D0();
    func_80187B00();
    goto LFC538;
LFC434:
    func_800F6630(0xC6);
    if (func_800F6434(2) != 0)
        goto LFC464;
    func_800F8188(0x1804);
    func_800F8FB8(0xC6);
    goto LFC4EC;
LFC464:
    func_800F6564(0x1804);
    func_800F78C4(func_800F3B04(0x1805));
    func_800F78C4(func_800F3B04(0x1806));
    func_800F78C4(func_800F3B04(0x1807));
    func_800F78C4(func_800F3B04(0x1808));
    func_800F78C4(func_800F3B04(0x1809));
    func_800F78C4(func_800F3B04(0x180A));
    func_800F78C4(func_800F3B04(0x180B));
    if (func_800F7918(2) != 0)
        goto LFC4FC;
LFC4EC:
    func_8011EB5C();
    func_800FC548();
LFC4FC:
    func_800F654C(0x80);
    func_800F8188(0x2100);
    func_800F6564(0x1700);
    func_800F5574(3);
    if (func_800F53D4() == 0)
        goto LFC538;
    func_8010CA74();
    return;
LFC538:
    return;
}
