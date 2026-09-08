#include "common.h"
void func_8016ADDC(void)
{
    /* shop rows: 0x3319/0x371B/0x331B/0x3719 cells; loop L16AE14
       on 5958(0x400). */
    func_800F9330();
    func_800F9644(0x20);
    func_800F71DC();
L16ae14:
    for (;;) {
        func_800F87DC(0x3319);
        func_800F87DC(0x371B);
        func_800F9140(0x331B);
        func_800F9140(0x3719);
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F5958(0x400);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F971C();
    func_800F9660(0x20);
    func_800F95A0();
    return;
}
