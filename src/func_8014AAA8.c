#include "common.h"
void func_8014AAA8(void)
{
    /* battle confirm: 8014C96C/8014AA68/8014B9B4/8014BA34 rows,
       0x34C4/0x34C5/0x3522 texts; 6434(2) gate. */
    func_8014C96C();
    func_800F6240();
    func_800F6564(0x34C4);
    func_800F8188();
    func_800F6564(0x34C5);
    func_800F78C4(func_800F3B04(0x3522));
    func_800F8188();
    func_8014AA68();
    func_8014B9B4();
    func_800F6564(0x3522);
    if (func_800F6434(2) != 0)
        return;
    func_800F6564(0x34C4);
    func_800F8188();
    func_800F6564(0x3523);
    func_800F8188();
    func_8014AA68();
    func_8014BA34();
    return;
}
