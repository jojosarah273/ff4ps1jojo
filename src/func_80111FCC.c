#include "common.h"
void func_80111FCC(void)
{
    /* shop detail: 0xCA window, 0x172C/0x172E-0x172F/0x1726/0x1706-
       0x1707 texts, 8011AB18/80169128/800FD718 rows; 5574(0xFB)
       gate. */
    func_800F8FB8(0xCA);
    func_800F7210(0x172C);
    func_800F6B68(0x172E);
    func_800F5574(0xFB);
    if (func_800F53C0() != 0)
        goto L11207C;
    func_800F8188(0x1722);
    func_800F654C(3);
    func_800F9200();
    func_800F6B68(0x172F);
    func_800F4248(0x3F);
    func_800F8188(0x1706);
    func_800F6B68(0x1730);
    func_800F8188(0x1707);
    func_800F6B68(0x172F);
    func_800F4248(0xC0);
    func_800F8188(0x1725);
    goto L1120B4;
L11207C:
    func_800F5480();
    func_800F8058(0xFB);
    func_800F9200();
    func_800F6B68(0x172F);
    func_800F8188(0x1706);
    func_800F6B68(0x1730);
    func_800F8188(0x1707);
L1120B4:
    func_800F93DC();
    func_8011AB18();
    func_800F8F74(0x1E05);
    func_80169128();
    func_800FD718();
    func_800F8FB8(0xD6);
    return;
}
