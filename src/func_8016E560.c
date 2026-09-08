#include "common.h"
void func_8016E560(void)
{
    /* options: 0x3540/0x2003 cells, 90EC(0x2007/0x2008) rows; loop
       L16E5A8 on 5A90(5). */
    func_800F971C();
L16e5a8:
    for (;;) {
        func_800F6D70(0x3540);
        if (func_800F6434(0x202) != 0)
            goto L16E5E8;
        func_800F6B68(0x2003);
        if (func_800F6434() != 0)
            goto L16E5E8;
        func_800F90EC(0x2007);
        func_800F90EC(0x2008);
    L16E5E8:
        func_800F9644(0x20);
        func_800F5410();
        func_800F4064(0x80);
        func_800F971C();
        func_800F9660(0x20);
        func_800F63BC();
        func_800F5A90(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
