#include "common.h"
void func_801031F0(void)
{
    /* shop confirm: 0x1286 gate, 0x1704/0x1705/0xAC/0xE1/0xB1/0xAD/
       0xB7/0x79 windows, 8017559C/801030F8/80103310/800FD718 rows. */
    func_800F6564(0x1286);
    func_800F4248(4);
    if (func_800F4120(2) == 0)
        return;
    func_800F654C(4);
    func_800F8188(0x1704);
    func_800F654C(3);
    func_800F824C(0xAC);
    func_800F8188(0x1705);
    func_800F6630(0xB1);
    if (func_800F6434(2) != 0)
        goto L1032E8;
    func_800F6630(0xE1);
    if (func_800F6434(2) != 0)
        goto L1032B0;
    func_800F654C(0x20);
    func_800F824C(0xAD);
    func_800F654C(0x10);
    func_800F824C(0xB7);
    func_8017559C();
    func_800F654C(0xF);
    func_800F8188(0x6FD);
    return;
L1032B0:
    func_801030F8();
    func_800F654C(0x20);
    func_800F824C(0x79);
    func_800F654C(0xF);
    func_800F8188(0x6FD);
    func_80103310();
    return;
L1032E8:
    func_800FD718();
    func_800F8FB8(0x79);
    func_80103310();
    return;
}
