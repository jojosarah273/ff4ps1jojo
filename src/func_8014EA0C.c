#include "common.h"
void func_8014EA0C(void)
{
    /* battle rows: 0x2 window; loop L14EA34 on 4FAC(0x101)/5958(5). */
    func_800F71DC();
    func_800F824C();
    func_800F6564();
    func_800F824C(2);
L14ea34:
    for (;;) {
        func_800F3C3C(2);
        func_800F4F28();
        if (func_800F4FAC(0x101) != 0)
            goto L14EAB4;
        func_800F6630();
        func_800F8960();
    L14EAB4:
        func_800F6364();
        func_800F5958(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
