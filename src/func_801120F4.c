#include "common.h"
void func_801120F4(void)
{
    /* battle rows: 0x1700/0x7070/0x300/0x1A03 texts, 800FF024/
       8011EA5C rows; 5574(3) gate. */
    func_800FE7D8();
    func_800FE870();
    func_8011416C();
    func_800F6564(0x1700);
    func_800F5574(3);
    if (func_800F53D4() != 0)
        goto L11213C;
    func_800FF024();
L11213C:
    func_800F71DC(0x7070);
    func_800F8D00(0x300);
    func_800F6564(0x1A03);
    func_800F5CCC();
    func_800F5140();
    func_800F5410();
    func_800F4008(0xE8);
    func_800F8188(0x302);
    func_800F6564(0x1A03);
    func_800F5140();
    func_800F8188(0x303);
    func_8011EA5C();
    return;
}
