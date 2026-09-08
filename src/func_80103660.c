#include "common.h"
void func_80103660(void)
{
    /* shop rows: 0x7A/0xB9 windows, 80102E78 rows, 6FB/AD cells,
       8017559C / 801038D4 / 80103790 sub-screens; loops L103678 and
       L1036C0 chain. */
    func_800F8FB8(0x7A);
    func_800F8FB8(0xB9);
L103678:
    for (;;) {
        func_80102E78();
        func_800F6630(0x79);
        func_800F5574(0x20);
        if (func_800F53C0() != 0)
            goto L1036C0;
        func_800F7864();
        func_800F8188(0x6FD);
        func_800F62BC(0x79);
    }
L1036C0:
    func_800F62BC(0xB9);
    func_800F62BC(0xB9);
    func_800F6630(0xB9);
    func_800F5410();
    func_800F4008(0x10);
    func_800F824C(0xAD);
    func_800F6630(0xB9);
    func_800F7864();
    func_8017559C();
    func_800F62BC(0x79);
    func_800F6630(0x79);
    func_800F5574(0x30);
    if (func_800F53D4() == 0)
        goto L103678;
    func_800F6564(0x6C3);
    if (func_800F6434(0x202) == 0)
        return;
    func_800F8F74(0x6C3);
    func_800F6564(0x1700);
    if (func_800F6434(2) != 0)
        goto L103778;
    func_801038D4();
    return;
L103778:
    func_80103790();
    return;
}
