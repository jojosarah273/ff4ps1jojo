#include "common.h"
void func_80167774(void)
{
    /* battle rows: 0x70174/8FB8/71DC preps, 5B2C(3B04) check; loops
       L167798 and L167780 on 5958(0x12)/6434(0x202). */
L167780:
    for (;;) {
        func_80070174();
        func_800F8FB8();
        func_800F71DC();
    L167798:
        for (;;) {
            func_800F6B68();
            func_800F5574();
            if (func_800F53D4() != 0)
                goto L1677FC;
            func_800F5B2C(func_800F3B04());
            func_800F62BC();
        L1677FC:
            func_800F6364();
            func_800F5958(0x12);
            if (func_800F53D4() == 0)
                continue;
            break;
        }
        func_800F6630();
        if (func_800F6434(0x202) != 0)
            continue;
        break;
    }
    return;
}
