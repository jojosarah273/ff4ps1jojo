#include "common.h"
void func_801665C0(void)
{
    /* options/status band: 0x12/0x13/0x10/0x14/0x11 windows, 78C4
       (3C3C(0x1A)) heading, 6434(2)/5B8C(0x202) gates. */
    func_800F9200();
    func_800F4248(0x1F);
    func_800F5574(0x1F);
    if (func_800F53D4() == 0)
        goto L166600;
    func_800F93DC();
    goto L166738;
L166600:
    func_800F6C68();
    func_800F8960();
    func_800F6630(0x12);
    func_800F8960();
    func_800F6630(0x13);
    func_800F8960();
    func_800F93DC();
    func_800F5140();
    func_800F4248(0xC0);
    func_800F78C4(func_800F3C3C(0x1A));
    func_800F8960();
    func_800F6564();
    if (func_800F6434(2) != 0)
        goto L166718;
    func_800F6D70();
    func_800F8960();
    func_800F6630(0x10);
    func_800F5CCC();
    func_800F5410();
    func_800F3F38(func_800F3C3C(0x14));
    func_800F8960();
L166718:
    func_800F63BC();
    func_800F63BC();
    func_800F63BC();
    func_800F63BC();
L166738:
    func_800F6630(0x12);
    func_800F5410();
    func_800F4008(0x10);
    func_800F824C(0x12);
    func_800F5DA0(0x10);
    if (func_800F5B8C(0x202) != 0)
        goto L1667D8;
    func_800F6630(0x14);
    func_800F824C(0x12);
    func_800F6630(0x13);
    func_800F5410();
    func_800F4008(0x10);
    func_800F824C(0x13);
    func_800F6564();
    func_800F824C(0x10);
    func_800F5DA0(0x11);
    if (func_800F5B8C(0x202) != 0)
        goto L1667D8;
    func_800F5410();
    return;
L1667D8:
    func_800F5480();
    return;
}
