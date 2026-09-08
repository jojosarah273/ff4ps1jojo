#include "common.h"
void func_80111DC8(void)
{
    /* battle rows: 0x7A/0x79 windows, 0xAAF/0xE1D texts; loop L111E54
       on 6D70(0xAAF)+5A90 gates. */
    func_800F6630(0x7A);
    func_800F4248(3);
    if (func_800F4120(0x202) != 0)
        return;
    func_800F62BC(0x79);
    func_800F6630(0x79);
    func_800F5574(6);
    if (func_800F53D4() == 0)
        goto L111E20;
    func_800F8FB8(0x79);
L111E20:
    func_800F71DC();
    func_800F6630(0x79);
    func_800F5140();
L111e54:
    for (;;) {
        func_800F6D70(0xAAF);
        func_800F8768(0xE1D);
        func_800F6D70(0xAB0);
        func_800F8768(0xE1E);
        func_800F5958(0xE);
        if (func_800F53D4() != 0)
            return;
        func_800F5A90(0xE);
        if (func_800F53D4() == 0)
            continue;
        func_800F7500();
    }
    return;
}
