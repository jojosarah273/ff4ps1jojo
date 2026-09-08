#include "common.h"
void func_80107C98(void)
{
    /* config sub-screen: 0xEA confirm wait, 0x8F4/0x8F6 save-check texts,
       80108458 status table + 80177DAC scroll; loops at L107CB8/L107D54/
       L107DB4/L107E6C. */
    func_800F6630(0xCC);
    func_800F654C(1);
    func_800F824C(0xEA);
L107cb8:
    for (;;) {
        func_800FE778();
        func_800F6630(0xEA);
        func_800F5574(2);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F71DC();
    func_800F8D00(0x8F4);
    func_800F8FB8(0xDE);
    func_800F654C(0xEC);
    func_800F824C(0xBB);
    func_800F8FB8(0xBA);
    func_80108458();
    func_800F654C(1);
    func_800F824C(0xDF);
    func_800F824C(0xEB);
    /* v1/v0 gate -> L107D4C (converge) */
L107D4C:
    func_800FE778();
L107D54:
    for (;;) {
        func_800F6630(0x7F);
        func_800F5574(2);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F62BC(0xDF);
    func_800F6630(0xDF);
    func_800F5574(8);
    if (func_800F53D4() == 0)
        goto L107D4C;
L107D9C:
    func_800F7210(0x8F4);
    if (func_800F7170(2) != 0)
        goto L107DF4;
L107db4:
    for (;;) {
        func_80177DAC();
        if (func_800F56AC(func_800F3B04(0x8F6)) == 0)
            continue;
        break;
    }
    func_800F71DC();
    func_800F8D00(0x8F4);
    goto L107E3C;
L107DF4:
    func_800F6630(0xDE);
    func_800F5574(2);
    if (func_800F53D4() != 0)
        return;
    func_800F6630(0xCB);
    if (func_800F6434(0x202) != 0)
        goto L107E3C;
    func_800FD9FC();
    func_800FDA4C();
L107E3C:
    func_800F6630(0xDE);
    if (func_800F6434(0x202) != 0)
        return;
    func_80108458();
    func_800F654C(0x10);
    func_800F824C(7);
L107E6C:
    for (;;) {
        func_800FE778();
        func_800F6630(0xCB);
        if (func_800F6434(0x202) != 0)
            goto L107EBC;
        func_800F62BC(0xBB);
        func_800F62BC(0xBB);
        func_800F62BC(0xBB);
        func_800F62BC(0xBB);
        func_800F5DA0(7);
        goto L107F0C;
    L107EBC:
        func_800F6630(0x7A);
        func_800F4248(7);
        if (func_800F4120(0x202) != 0)
            goto L107F0C;
        func_800F62BC(0xBB);
        func_800F6630(0x7A);
        func_800F4248(0x1F);
        if (func_800F4120(0x202) != 0)
            goto L107F0C;
        func_800F5DA0(7);
    L107F0C:
        func_800F6630(7);
        if (func_800F6434(0x202) != 0)
            continue;
        break;
    }
    goto L107D9C;
}
