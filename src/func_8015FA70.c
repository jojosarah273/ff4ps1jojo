#include "common.h"
void func_8015FA70(void)
{
    /* options: 8015254C row, 0x3949/0xA4/0xA5 texts; gate
       53C0 + 5958(0x270F). */
    func_8015254C();
    func_800F7210(0x3949);
    func_800F5958(0x270F);
    if (func_800F53C0() == 0)
        goto L15FAB0;
    func_800F71DC(0x270F);
    func_800F8D00(0x3949);
L15FAB0:
    func_800F6564(0x3949);
    func_800F824C(0xA4);
    func_800F6564(0x394A);
    func_800F824C(0xA5);
    return;
}
