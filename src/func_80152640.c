#include "common.h"
void func_80152640(void)
{
    /* shop rows: 0x82/0x80/0xE5 windows; loop L152690 on
       67FC(0x80)/5574(0xFF) gates; closes via 63BC. */
    func_800F824C(0x82);
    func_800F8EBC(0x80);
    func_800F971C();
    func_800F6630(0xE5);
    if (func_800F6434(2) != 0)
        return;
L152690:
    for (;;) {
        func_800F67FC(0x80);
        func_800F5574(0xFF);
        if (func_800F53D4() == 0)
            goto L1526D0;
        func_800F5DA0(0xE5);
        func_800F6630(0xE5);
        if (func_800F6434(2) != 0)
            goto L1526E0;
    L1526D0:
        func_800F63BC();
    }
    return;
L1526E0:
    func_800F63BC();
    return;
}
