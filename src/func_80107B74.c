#include "common.h"
void func_80107B74(void)
{
    /* config rows: 0x712/0x1440/0x1441 texts, 0x1441 window; loops
       L107B84 (5958(0x60)) and L107BBC (73E0 gates). */
    func_800F71DC();
L107b84:
    for (;;) {
        func_800F90EC(0x712);
        func_800F6364();
        func_800F5958(0x60);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F71DC();
    func_800F7500();
L107bbc:
    for (;;) {
        func_800F6B68(0x1440);
        func_800F5574(0xCE);
        if (func_800F53C0() == 0)
            goto L107C58;
        func_800F5574(0xE7);
        if (func_800F53C0() == 0)
            goto L107C24;
        func_800F5574(0xEB);
        if (func_800F53C0() == 0)
            goto L107C58;
        func_800F5574(0xFE);
        if (func_800F53C0() != 0)
            goto L107C58;
    L107C24:
        func_800F8960(0x712);
        func_800F6B68(0x1441);
        func_800F8960(0x713);
    L107C58:
        func_800F5958(0x60);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
