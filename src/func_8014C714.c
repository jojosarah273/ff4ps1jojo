#include "common.h"
void func_8014C714(void)
{
    /* battle rows: 0x1802 text, 8007259C + 8014C81C rows; loops
       L14C78C and L14C7DC (5958(0x40)). */
    func_800F6564();
    if (func_800F6434(0x202) == 0)
        return;
    func_800F8F74();
    func_800F6564(0x1802);
    func_800F4248(0x1F);
    func_800F6C68();
L14c78c:
    for (;;) {
        func_8007259C();
        func_800F824C(2);
        func_8014C81C();
        func_800F5E48();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F71DC();
L14c7dc:
    for (;;) {
        func_800F6B68();
        func_800F8768();
        func_800F6364();
        func_800F5958(0x40);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
