#include "common.h"
void func_80131A2C(void)
{
    /* ability pick: 0x1BC6/0x1B8B texts, 0x43/0x45 windows,
       801224D0/80124EAC/80132178 rows; 6434(2)/4120(0x202) gates. */
    func_800F9200();
    func_800F8188(0x1BC6);
    func_801224D0();
    func_800F6B68(0x1B8B);
    if (func_800F6434(2) != 0)
        return;
    func_800F7270(0x43);
    func_800F6C68();
    func_80124EAC();
    func_800F6B68(3);
    func_800F4248(0xC0);
    if (func_800F4120(0x202) != 0)
        return;
    func_800F6564(0x1BC6);
    func_80132178();
    func_800F9644(0x20);
    func_800F6BE0(7);
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x45));
    func_800F5520(func_800F3B04());
    if (func_800F53C0() == 0)
        goto L131B10;
    func_800F6BE0(9);
L131B10:
    func_800F87DC(7);
    func_800F9660(0x20);
    func_800F93DC();
    return;
}
