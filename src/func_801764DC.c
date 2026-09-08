#include "common.h"
void func_801764DC(void)
{
    /* battle option-icon row: 2/3 windows with 4248(0xBF) fills, then
       per-index 4120(0x202) gates showing the 0x54/0x50/0x52/0x53/0x55/
       0x51/0x56/0x57 icons. */
    func_800F6630(3);
    if (func_800F6434() == 0)
        goto L17653C;
    func_800F6630(2);
    func_800F4248(0xBF);
    func_800F824C(2);
    func_800F6630();
    func_800F4248(0xBF);
    func_800F824C();
L17653C:
    func_800F6630(2);
    func_800F4248(0x80);
    if (func_800F4120(0x202) != 0)
        goto L176564;
    func_800F8FB8(0x54);
L176564:
    func_800F6630(2);
    func_800F4248(0x40);
    if (func_800F4120(0x202) != 0)
        goto L17658C;
    func_800F8FB8(0x50);
L17658C:
    func_800F6630(2);
    func_800F4248(0x20);
    if (func_800F4120(0x202) != 0)
        goto L1765B4;
    func_800F8FB8(0x52);
L1765B4:
    func_800F6630(2);
    func_800F4248(0x10);
    if (func_800F4120(0x202) != 0)
        goto L1765DC;
    func_800F8FB8(0x53);
L1765DC:
    func_800F6630(3);
    func_800F4248(0x80);
    if (func_800F4120(0x202) != 0)
        goto L176604;
    func_800F8FB8(0x55);
L176604:
    func_800F6630(3);
    func_800F4248(0x40);
    if (func_800F4120(0x202) != 0)
        goto L17662C;
    func_800F8FB8(0x51);
L17662C:
    func_800F6630(3);
    func_800F4248(0x20);
    if (func_800F4120(0x202) != 0)
        goto L176654;
    func_800F8FB8(0x56);
L176654:
    func_800F6630(3);
    func_800F4248(0x10);
    if (func_800F4120(0x202) != 0)
        return;
    func_800F8FB8(0x57);
    return;
}
