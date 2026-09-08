#include "common.h"
void func_80140AC0(void)
{
    /* battle rows: 80147414 row; loop L140AEC on 5A90(5) with
       0x2001/0xF cells; closes via 0x971C. */
    func_800F971C();
L140aec:
    for (;;) {
        func_80147414();
        func_800F6B68(0x2001);
        func_800F4248(0xF);
        func_800F5574(0xB);
        if (func_800F53D4() != 0)
            goto L140B90;
        func_800F63BC();
        func_800F5A90(5);
        if (func_800F53D4() == 0)
            continue;
        func_800F971C();
        return;
    }
L140B90:
    return;
}
