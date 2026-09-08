#include "common.h"
void func_8014C664(void)
{
    /* battle rows: loop L14C67C on 5958(0x40) with 80094D14 row. */
    func_800F9330();
    func_800F71DC();
L14c67c:
    for (;;) {
        func_800F6B68();
        func_800F824C();
        func_800F6B68();
        func_800F824C(1);
        func_800F654C(1);
        func_80094D14();
        func_800F6630();
        func_800F8768();
        func_800F6630(1);
        func_800F8768();
        func_800F5958(0x40);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F95A0();
    return;
}
