#include "common.h"
void func_800FD85C(void)
{
    /* shop rows: 0x82/0x79/0x80 windows, 0x2100 text; loop L8FD87C
       on 4370(0x82)/4120(0x202). */
    func_800F824C(0x82);
    func_800F8FB8(0x79);
    func_800F8FB8(0x80);
L8fd87c:
    for (;;) {
        func_800FE7B0();
        func_800F6630(0x80);
        /* a0/v1 gate -> L8FD8AC */
        func_800F8188(0x2100);
    L8FD8AC:
        func_800F62BC(0x79);
        func_800F6630(0x79);
        func_800F4370(0x82);
        if (func_800F4120(0x202) != 0)
            continue;
        func_800F62BC(0x80);
        func_800F6630(0x80);
        func_800F5574(0x10);
        if (func_800F53D4() == 0)
            continue;
        func_800F5DA0(0x80);
        return;
    }
}
