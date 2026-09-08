#include "common.h"
void func_8016DCE0(void)
{
    /* shop rows: 0x2303/0x2883 cells via 8768; loops L16DD0C
       (5958(0x900)) and L16DD5C (5958(0x80)). */
    func_800F971C();
L16dd0c:
    for (;;) {
        func_800F8768(0x2303);
        func_800F6364();
        func_800F5958(0x900);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F971C();
L16dd5c:
    for (;;) {
        func_800F6C68();
        func_800F8768(0x2883);
        func_800F6364();
        func_800F5958(0x80);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
