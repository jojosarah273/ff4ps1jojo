#include "common.h"
void func_8014D98C(void)
{
    /* battle rows: gates 6434(2)/4280/4120(0x202) route the 800760D0
       0xF row; closes with 6240. */
    func_800F6564();
    if (func_800F6434(2) != 0)
        return;
    func_800F6564();
    func_800F4280();
    if (func_800F4120(0x202) != 0)
        goto L14DA14;
    func_800F6240();
    func_800F6564();
    func_800F4248(1);
    func_800F6B68();
    func_800F71DC(0xF);
    func_800760D0();
L14DA14:
    func_800F6240();
    return;
}
