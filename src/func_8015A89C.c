#include "common.h"
void func_8015A89C(void)
{
    /* options: 0x3558/0x2016 texts, 0x202F cell, 8015ABEC/8015A56C
       rows; gate 6434(2). */
    func_800F6564(0x3558);
    if (func_800F6434(2) != 0)
        goto L15A8C4;
    func_800F6B68(0x202F);
L15A8C4:
    func_800F6B68(0x2016);
    func_800F5410();
    func_800F4008(0x14);
    func_800F8D6C(0xA9);
    func_8015ABEC();
    func_8015A56C();
    return;
}
