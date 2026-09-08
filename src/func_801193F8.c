#include "common.h"
void func_801193F8(void)
{
    /* battle store/equip screen: 0x8F8-0x8FA texts, 0x1A/0xB2/0x30/0x31/
       0x32 windows; 801082C8/80107C98(row family)/801196F8/80174CE4/
       801196B0 plus the 80105AF0/80105DB4/80105D2C/80107F3C/80109A28
       sub-screens; L119548 renders the 0x16A0/0x16A1/0x16A2 stat rows. */
    func_80117594();
    func_800F5140();
    func_800F8188(0x8F8);
    func_800F8188(0x8F9);
    func_800F8F74(0x8FA);
    func_800F654C(0x1A);
    func_800F824C(0xB2);
    func_801082C8();
    func_80107C98();
    func_801196F8();
    func_80174CE4();
    func_801196B0();
    func_80105AF0();
    func_80105DB4();
    func_80105D2C();
    func_80107F3C();
    func_800FE7B0();
    func_80109A28();
    func_800F6630(0xDB);
    if (func_800F6434(2) != 0)
        goto L119548;
    func_800F654C(0x1B);
    func_800F824C(0xB2);
    func_801082C8();
    func_80107C98();
    func_80107F3C();
    func_80109A28();
    goto L119650;
L119548:
    func_801196F8();
    func_800F7270(0xB3);
    func_800F6B68(0x9D5);
    func_800F5140();
    func_800F6564(0x16A0);
    func_800F5480();
    func_800F8058();
    func_800F824C(0x30);
    func_800F6564(0x16A1);
    func_800F8058();
    func_800F824C(0x31);
    func_800F6564(0x16A2);
    func_800F8058();
    func_800F824C(0x32);
    if (func_800F53C0() != 0)
        goto L119668;
    func_800F654C(0x19);
    func_800F824C(0xB2);
    func_801082C8();
    func_80107C98();
    func_80107F3C();
    func_80109A28();
L119650:
    func_801175C4();
    func_8011EA5C();
    return;
L119668:
    func_800F6630(0x30);
    func_800F8188(0x16A0);
    func_800F6630(0x31);
    func_800F8188(0x16A1);
    func_800F6630(0x32);
    func_800F8188(0x16A2);
    func_8011EA5C();
    return;
}
