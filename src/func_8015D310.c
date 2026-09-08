#include "common.h"
void func_8015D310(void)
{
    /* options row: 0xA6/0x2005/0x3530 windows/cells, 0x2A06/0x29EB
       cells, 8015310C row; 6434 gate. */
    func_800F7270(0xA6);
    func_800F6B68(0x2005);
    func_800F4248(0xBF);
    func_800F8768(0x2005);
    func_800F7210(0x3530);
    func_800F90EC(0x2A06);
    func_800F654C(3);
    func_8015310C();
    func_800F7210(0x3598);
    func_800F6B68(0x2A06);
    if (func_800F6434() != 0)
        goto L15D398;
    func_800F90EC(0x2A06);
    func_800F654C(1);
    func_800F8768(0x2A04);
    func_800F90EC(0x2A05);
L15D398:
    func_800F6630(0xD2);
    func_800F5140();
    func_800F6B68(0x29EB);
    func_800F4248(0x7F);
    func_800F8768(0x29EB);
    return;
}
