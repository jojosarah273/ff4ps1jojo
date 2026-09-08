#include "common.h"
void func_8014AF74(void)
{
    /* battle rows: 0x34C5/0x34C4/0x49 texts; gates 6434(2) route
       801420D4 vs the 8014B9B4/8014B044 row block. */
    func_800F6564(0x34C5);
    if (func_800F6434(2) != 0)
        goto L14AFA4;
    func_801420D4();
    return;
L14AFA4:
    func_800F6564(0x3522);
    if (func_800F6434(2) != 0)
        return;
    func_8014B9B4();
    func_800F6564(0x34C4);
    func_800F9200();
    func_800F8188(0x34C4);
    func_800F6564(0x49);
    func_800F9200();
    func_8014B044();
    func_801420D4();
    func_800F93DC();
    func_800F8188(0x49);
    func_800F93DC();
    func_800F8188(0x34C4);
    return;
}
