#include "common.h"
void func_80101230(void)
{
    /* shop own-row: 0x172C text, 0x1700-0x1705 texts with 0x172E/
       0x172F cells; branch on 5574(3), closes with 0xC0 reads. */
    func_800F9330();
    func_800F7210(0x172C);
    func_800F6564(0x1700);
    func_800F5574(3);
    if (func_800F53D4() == 0)
        goto L1012BC;
    func_800F6564(0x1702);
    func_800F8768(0x172E);
    func_800F6564(0x1705);
    func_800F5410();
    func_800F3F38(func_800F3B04(0x1706));
    func_800F8768(0x172F);
    goto L1012EC;
L1012BC:
    func_800F6564(0x1700);
    func_800F5410();
    func_800F4008(0xFB);
    func_800F8768(0x172E);
    func_800F6564(0x1706);
    func_800F8768(0x172F);
L1012EC:
    func_800F6564(0x1707);
    func_800F8768(0x1730);
    func_800F5958(0xC0);
    if (func_800F53C0() == 0)
        goto L101330;
    func_800F71DC();
    return;
L101330:
    return;
}
