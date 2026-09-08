#include "common.h"
void func_80167A34(void)
{
    /* battle rows: 0x4E window, 0x70174/80140310 rows; loop L167A74
       on 5574(0x40)/5A90 gates. */
    func_800F8FB8(0x4E);
    func_800F971C();
    func_800F8D00();
    func_800F8D00();
L167a74:
    for (;;) {
        func_80070174();
        func_80140310();
        func_800F6630(0x4E);
        func_800F4248(7);
        func_800F5140();
        func_800F9644(0x20);
        func_800F6CF4();
        func_800F81B0();
        func_800F971C();
        func_800F9660(0x20);
        func_800F62BC(0x4E);
        func_800F6630(0x4E);
        func_800F5574(0x40);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F971C();
    func_800F8D00();
    func_80140310();
    return;
}
