#include "common.h"
void func_80150458(void)
{
    /* battle cast flow: 8007259C gates, L1504A8 spin loop, then the
       stat block (8E50/4264/81B0 cells) and the L150578 scan loop
       with 5D24/5B8C(2) latch. */
    func_800F71DC(0x40);
    func_800F8D6C();
    func_800F654C(0x7E);
    func_800F71DC();
    func_800F9200();
    func_800F9330();
    func_800F939C();
    func_800F7270();
    func_800F9330();
L1504a8:
    for (;;) {
        func_800F6564();
        if (func_800F6434(2) != 0)
            goto L1504D0;
        func_8007259C();
    }
L1504D0:
    func_800F95A0();
    func_800F8D6C();
    func_800F960C();
    func_800F95A0();
    func_800F93DC();
    func_800F8188();
    func_800F8D00();
    func_800F8E50();
    func_800F71DC(0x40);
    func_800F8D00();
    func_800F9644(0x20);
    func_800F6658();
    func_800F4264();
    func_800F8274();
    func_800F971C();
    func_800F9660(0x20);
    func_800F6630(1);
    func_800F8188();
L150578:
    for (;;) {
        func_800F6240();
        func_8007259C();
        func_800F5D24();
        if (func_800F5B8C(2) != 0)
            goto L150600;
        func_800F9644(0x20);
        func_800F658C();
        func_800F5410();
        func_800F4064(0x40);
        func_800F81B0();
        func_800F658C();
        func_800F5410();
        func_800F4064(0x20);
        func_800F81B0();
        func_800F971C();
        func_800F9660(0x20);
    }
L150600:
    return;
}
