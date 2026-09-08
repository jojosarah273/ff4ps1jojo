#include "common.h"
void func_80175CB4(void)
{
    /* shop rows: 0xDDB cells; loops L175CCC/L175CD0/L175D20 on
       4120(0x202)/5A90(0x80). */
    func_800F7500();
    func_800F71DC();
L175CCC:
    for (;;) {
    L175cd0:
        for (;;) {
            func_800F6C68();
            func_800F8960(0xDDB);
            func_800F6364();
            func_800F63BC();
            func_800F4248(0xF);
            if (func_800F4120(0x202) != 0)
                goto L175CCC;
            break;
        }
    L175d20:
        for (;;) {
            func_800F654C();
            func_800F8960(0xDDB);
            func_800F63BC();
            func_800F4248(0xF);
            if (func_800F4120(0x202) != 0)
                continue;
            break;
        }
        func_800F5A90(0x80);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
