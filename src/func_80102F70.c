#include "common.h"
void func_80102F70(void)
{
    /* shop buy rows: 0x1715/0x1706/0x1716/0x1707/0x1704 texts +
       0xAC window, 800FD718/80102414 rows; gate 5574(1). */
    func_800F6240(0x1715);
    func_800F6564(0x1715);
    func_800F5574(1);
    if (func_800F53D4() == 0)
        goto L102FC0;
    func_800F6564(0x1706);
    func_800F8188(0x1716);
    func_800F6564(0x1707);
    func_800F8188(0x1717);
L102FC0:
    func_800F654C(2);
    func_800F8188(0x1704);
    func_800F824C(0xAC);
    func_800FD718();
    func_80102414();
    return;
}
