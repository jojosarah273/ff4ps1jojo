#include "common.h"
void func_80103310(void)
{
    /* shop rows: 0x7A/0xB7 windows, 80102E78/8017559C rows; loops
       L103328 and L103370 (4008(0x10) reads). */
    func_800F8FB8(0x7A);
    func_800F8FB8(0xB7);
L103328:
    for (;;) {
        func_80102E78();
        func_800F6630(0x79);
        func_800F5574(0x20);
        if (func_800F53C0() != 0)
            goto L103370;
        func_800F7864();
        func_800F8188(0x6FD);
        func_800F62BC(0x79);
    }
L103370:
    func_800F62BC(0xB7);
    func_800F6630(0xB7);
    func_800F5410();
    func_800F4008(0x10);
    func_800F824C(0xAD);
    func_800F6630(0xB7);
    func_8017559C();
    func_800F62BC(0x79);
    func_800F6630(0x79);
    func_800F5574(0x30);
    if (func_800F53D4() == 0)
        goto L103328;
    return;
}
