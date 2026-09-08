#include "common.h"
void func_80150B88(void)
{
    /* options rows: 0x353E/0x353F texts, 80150C38 row; gates
       5F20(0x202)/5574(2)/6434(0x202). */
    func_800F6564(0x353E);
    func_800F8188();
    if (func_800F5F20(0x202) != 0)
        return;
    func_800F6564(0x353F);
    func_800F5574(2);
    if (func_800F53D4() == 0)
        goto L150BF8;
    func_800F654C();
    func_800F8188(0x353F);
L150BF8:
    func_800F6564(0x353F);
    if (func_800F6434(0x202) == 0)
        goto L150C20;
    func_800F654C(0xD);
    func_80150C38();
L150C20:
    func_800F6240(0x353F);
    return;
}
