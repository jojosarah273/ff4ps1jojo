#include "common.h"
void func_80160AAC(void)
{
    /* options banner: 0x2726/0x2725/0x28A2/0x38FE texts; 4120 gates
       pick the 0xFE values. */
    func_800F6564(0x2726);
    func_800F4280(0x28A2);
    if (func_800F4120(2) != 0)
        goto L160B1C;
    func_800F971C();
    func_800F8188(0x38FE);
    func_800F6564(0x2726);
    func_800F4248(0x40);
    if (func_800F4120(2) != 0)
        goto L160B7C;
    func_800F654C(0x84);
    func_800F8188(0x38FE);
    return;
L160B1C:
    func_800F6564(0x2725);
    func_800F4280(0x28A2);
    if (func_800F4120(2) != 0)
        return;
    func_800F654C(1);
    func_800F8188(0x38FE);
    func_800F6564(0x2725);
    func_800F4248(0x40);
    if (func_800F4120(2) != 0)
        return;
    func_800F654C(0x82);
    func_800F8188(0x38FE);
    return;
L160B7C:
    return;
}
