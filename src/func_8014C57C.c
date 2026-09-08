#include "common.h"
void func_8014C57C(void)
{
    /* battle rows: 0x1802 text, 8007259C/8014C664 rows; loops
       L14C5AC (5958(0x40)) and L14C62C (5C64(0x202)). */
    func_800F6564();
    if (func_800F6434(2) == 0)
        return;
    func_800F6240();
    func_800F71DC();
L14c5ac:
    for (;;) {
        func_800F6B68();
        func_800F8768();
        func_800F6364();
        func_800F5958(0x40);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F6564(0x1802);
    func_800F4248(0x1F);
    func_800F6C68();
L14c62c:
    for (;;) {
        func_8007259C();
        func_8014C664();
        func_800F5E48();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    return;
}
