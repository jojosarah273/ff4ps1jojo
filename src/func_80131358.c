#include "common.h"
void func_80131358(void)
{
    /* ability/spell screen: 0x1B9B/0x1B8B texts, 0x45/0x46/0x43 windows,
       801224D0 cursor, 8011F724 commit; L1313A8 row loop on
       5DA0(0x45)/5B8C(0x202), L1314 960C tail. */
    func_800F6564(0x1B9B);
    func_800F9200();
    func_800F939C();
    func_801224D0();
    func_800F6B68(0x1B8B);
    if (func_800F6434(0x202) != 0)
        goto L1313F8;
    func_800F654C(8);
    func_800F824C(0x45);
L1313a8:
    for (;;) {
        func_800F654C(0xFF);
        func_800F8960();
        func_800F63BC();
        func_800F654C(0xF0);
        func_800F8960();
        func_800F63BC();
        func_800F5DA0(0x45);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    goto L131498;
L1313F8:
    func_800F6630(0x43);
    func_800F5140();
    func_800F4F4C();
    func_800F3F38(func_800F3C3C(0x43));
    func_800F5140();
    func_800F4F4C();
    func_800F4008(0x24);
    func_800F824C(0x46);
    func_800F654C(0x44);
    func_800F824C(0x45);
    func_800F7270(0x45);
    func_800F971C();
    func_8011F724();
L131498:
    func_800F960C();
    func_800F9644(0x20);
    func_800F5410();
    func_800F4064(0x10);
    func_800F9660(0x20);
    func_800F93DC();
    func_800F61E8();
    func_800F5574(5);
    if (func_800F53C0() == 0)
        goto L13151C;
    func_800F971C();
L13151C:
    func_800F8188(0x1B9B);
    return;
}
