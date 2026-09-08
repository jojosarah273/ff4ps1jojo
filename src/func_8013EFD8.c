#include "common.h"
void func_8013EFD8(void)
{
    /* event: 3B04/3C3C rows with 3A70 loops on s1/s5/s4 latches;
       922C/9410 spins; 5410/971C tail. */
    func_800F3B04();
    func_800F3C3C();
L13f020:
    for (;;) {
        func_800F3A70();
        func_800F3B04();
    L13f03c:
        for (;;) {
            func_800F922C();
            if (func_800F54D4(1) == 0)
                continue;
            break;
        }
        func_800F9410();
        func_800F5410();
        func_800F971C();
        return;
    }
}
