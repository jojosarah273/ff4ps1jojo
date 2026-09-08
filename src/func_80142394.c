#include "common.h"
void func_80142394(void)
{
    /* battle rows: 4x 6B68/8768 cell pairs; loop L1423C0 on
       5958(3), then 4x 5D24 close. */
    func_800F971C();
L1423c0:
    for (;;) {
        func_800F6B68();
        func_800F8768();
        func_800F6B68();
        func_800F8768();
        func_800F6B68();
        func_800F8768();
        func_800F6B68();
        func_800F8768();
        func_800F6364();
        func_800F5958(3);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F5D24();
    func_800F5D24();
    func_800F5D24();
    func_800F5D24();
    return;
}
