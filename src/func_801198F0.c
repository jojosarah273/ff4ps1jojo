#include "common.h"
void func_801198F0(void)
{
    /* battle buy detail: 0xB3 window, 0x8FB/0x9D5 texts; 80106370 +
       80109A28 preps, 801082C8/80107C98/80107F3C item rows; loops
       L119A00 on 54D4(3B04(0x8FB)); L1199F8 gate on 5574(0xEC/0xFE/
       0xED). */
    func_800F6364();
    func_800F8D6C(0xB3);
    func_80106370();
    func_800FE7B0();
    func_80109A28();
    func_800F6564(0x8FB);
    func_800F5574(0xFF);
    if (func_800F53D4() != 0)
        goto L119998;
    func_800F7270(0xB3);
    func_800F6B68(0x9D5);
    if (func_800F54D4(func_800F3B04(0x8FB)) != 0)
        goto L1199B0;
    func_800F654C(0x14);
    func_800F824C(0xB2);
    func_801082C8();
    func_80107C98();
    func_80107F3C();
L119998:
    func_801175C4();
    func_8011EA5C();
    return;
L1199B0:
    func_800F5574(0xEC);
    if (func_800F53D4() != 0)
        goto L119A80;
    func_800F5574(0xFE);
    if (func_800F53C0() != 0)
        goto L1199F8;
    func_800F5574(0xED);
    if (func_800F53C0() != 0)
        goto L119A80;
L1199F8:
    func_800F71DC();
L119a00:
    for (;;) {
        func_800F6B68(0x1440);
        if (func_800F54D4(func_800F3B04(0x8FB)) != 0)
            goto L119A48;
    }
L119A48:
    if (func_800F5B2C(func_800F3B04()) != 0)
        goto L119A80;
    func_800F90EC(0x1440);
L119A80:
    func_8011EA5C();
    return;
}
