#include "common.h"
void func_80167844(void)
{
    /* battle rows (twin with 6048): 0x70174/8FB8/71DC preps; loops
       L167868 and L167850 on 5958(0x12)/6434(0x202). */
L167850:
    for (;;) {
        func_80070174();
        func_800F8FB8();
        func_800F71DC();
    L167868:
        for (;;) {
            func_800F6B68();
            func_800F5574();
            if (func_800F53D4() != 0)
                goto L1678CC;
            func_800F6048(func_800F3B04());
            func_800F62BC();
        L1678CC:
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
