#include "common.h"
void func_80131CD8(void)
{
    /* ability tab: 0x1BC6/0x1B8B/0x16 texts, 0x43 window, 801321B4
       row; 6BE0(9)/87DC(7) latch and 6240(0x1BC9) tail. */
    func_800F9200();
    func_801224D0();
    func_800F6B68(0x1B8B);
    if (func_800F6434(2) != 0)
        return;
    func_801321B4();
    func_800F6B68(3);
    if (func_800F6434() != 0)
        return;
    func_800F4248(0x7F);
    func_800F8768(3);
    func_800F6B68(0x16);
    func_800F824C(0x43);
    func_800F9644(0x20);
    func_800F6658(0x43);
    func_800F516C();
    func_800F5050();
    func_800F3F94(func_800F3C3C(0x43));
    func_800F5520(func_800F3B04());
    if (func_800F53C0() == 0)
        goto L131DC8;
    func_800F6BE0(9);
L131DC8:
    func_800F87DC(7);
    func_800F9660(0x20);
    func_800F6240(0x1BC9);
    func_800F93DC();
    return;
}
