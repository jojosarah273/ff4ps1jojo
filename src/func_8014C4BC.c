#include "common.h"
void func_8014C4BC(void)
{
    /* battle rows: 0x1/0x40 windows, 80094D14 row; loop L14C4EC on
       5958(0xC0). */
    func_800F6564();
    func_800F4248(0x40);
    if (func_800F4120(2) != 0)
        return;
    func_800F71DC();
L14c4ec:
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
        func_800F5958(0xC0);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
