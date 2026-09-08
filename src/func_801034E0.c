#include "common.h"
void func_801034E0(void)
{
    /* shop rows (B8 twin of 80103310): 0x7A/0xB8 windows,
       80102E78/8017559C rows. */
    func_800F8FB8(0x7A);
    func_800F8FB8(0xB8);
L1034F8:
    for (;;) {
        func_80102E78();
        func_800F6630(0x79);
        func_800F5574(0x20);
        if (func_800F53C0() != 0)
            goto L103540;
        func_800F7864();
        func_800F8188(0x6FD);
        func_800F62BC(0x79);
    }
L103540:
    func_800F62BC(0xB8);
    func_800F6630(0xB8);
    func_800F5410();
    func_800F4008(0x10);
    func_800F824C(0xAD);
    func_800F6630(0xB8);
    func_8017559C();
    func_800F62BC(0x79);
    func_800F6630(0x79);
    func_800F5574(0x30);
    if (func_800F53D4() == 0)
        goto L1034F8;
    return;
}
