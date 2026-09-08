#include "common.h"
void func_80163B88(void)
{
    /* options confirm: 0x2683/0x2684/0x2685/0x26D2/0x26D0/0x26D5
       texts, 80163D68 alt, 80062B08 commit; key ladders 0xCA/0xB0/
       0x61 codes. */
    func_800F6564(0x2683);
    func_800F4248(0xC0);
    if (func_800F4120(0x202) != 0)
        return;
    func_800F6564(0x2684);
    func_800F4248(0x3C);
    if (func_800F4120(0x202) != 0)
        return;
    func_800F6564(0x2685);
    func_800F4248(0xC6);
    if (func_800F4120(0x202) != 0)
        return;
    func_800F6564(0x26D2);
    func_800F9200();
    func_800F6564(0x26D2);
    func_800F5574(0xCA);
    if (func_800F53D4() == 0)
        goto L163C30;
    func_80163D68();
    goto L163D00;
L163C30:
    func_800F5574(0xB0);
    if (func_800F53C0() == 0)
        goto L163C68;
    func_800F6564(0x26D0);
    func_800F4248(0x10);
    if (func_800F4120(2) != 0)
        goto L163CF8;
L163C68:
    func_800F7210(0x26D5);
    func_800F8D6C(0x80);
    func_800F6564(0x26D2);
    func_800F5574(0x61);
    if (func_800F53C0() == 0)
        goto L163CA8;
    func_800F654C();
    goto L163CE8;
L163CA8:
    func_800F6C68();
    func_800F8188(0x38EC);
    func_800F6240(0x38EB);
    func_800F7500(3);
    func_800F66D8(0x80);
L163CE8:
    func_800F8188(0x26D2);
    goto L163D00;
L163CF8:
    func_800F6240(0x352A);
L163D00:
    func_80062B08();
    func_800F6564(0x38ED);
    if (func_800F6434(2) != 0)
        goto L163D30;
    func_800F93DC();
    goto L163D40;
L163D30:
    func_800F93DC();
    func_800F8188(0x33C5);
L163D40:
    func_800F8188(0x34C8);
    func_800F654C(0x20);
    func_800F8188(0x34C7);
    return;
}
