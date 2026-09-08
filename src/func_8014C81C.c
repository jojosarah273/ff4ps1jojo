#include "common.h"
void func_8014C81C(void)
{
    /* battle rows (twin with 0x2 window): loop L14C834 on 5958(0x40). */
    func_800F9330();
    func_800F71DC();
L14c834:
    for (;;) {
        func_800F6B68();
        func_800F824C();
        func_800F6B68();
        func_800F824C(1);
        func_800F6630(2);
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
