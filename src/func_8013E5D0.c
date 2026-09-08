#include "common.h"
void func_8013E5D0(void)
{
    /* battle rows: 0x4/0x1 windows, 8013E588 rows; 76BC(3C3C(4))/
       7728(0x101) gate with the 3F38(3B9C) cell writes; loop
       L13E604 on 5958(8). */
    func_800F9330();
    func_800F971C();
L13e604:
    for (;;) {
        func_800F76BC(func_800F3C3C(4));
        if (func_800F7728(0x101) != 0)
            goto L13E6FC;
        func_8013E588();
        func_800F4248(7);
        func_800F5410();
        func_800F3F38(func_800F3B9C());
        func_800F824C();
        func_8013E588();
        func_800F4248(0x1F);
        func_800F3F38(func_800F3B9C());
        func_800F824C(1);
        func_800F6630();
        func_800F5480();
        func_800F8058(8);
        func_800F8768();
        func_800F6630(1);
        func_800F5480();
        func_800F8058(8);
        func_800F8768();
    L13E6FC:
        func_800F6364();
        func_800F6364();
        func_800F5958(8);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F95A0();
    return;
}
