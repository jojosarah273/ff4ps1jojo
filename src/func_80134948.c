#include "common.h"
void func_80134948(void)
{
    /* ability rows: 0x41 window, 54D4(3B04) gate routes the 0x1441/
       0xE3 check; loops L134968 (5EA0/5C64(0x202)) and L134998. */
    func_800F939C();
    func_800F7500(0x30);
    func_800F7270(0x41);
L134968:
    for (;;) {
        if (func_800F54D4(func_800F3B04()) != 0)
            goto L1349E0;
    L134998:
        for (;;) {
            func_800F6364();
            func_800F6364();
            func_800F5EA0();
            if (func_800F5C64(0x202) != 0)
                continue;
            break;
        }
        func_800F960C();
        func_800F654C(1);
        func_800F63F8();
        return;
    L1349E0:
        func_800F9200();
        func_800F6B68(0x1441);
        if (func_800F54D4(func_800F3C3C(0xE3)) == 0)
            goto L134A20;
        func_800F93DC();
        goto L134998;
    L134A20:
        func_800F93DC();
        func_800F960C();
        func_800F654C();
        func_800F63F8();
        return;
    }
}
