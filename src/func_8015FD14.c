#include "common.h"
void func_8015FD14(void)
{
    /* options cast: 0x38E6/0x2703 texts, 0x2A06/0x353F/0x29EB cells,
       0xD6/0xCF windows, 8015A374/80153374 rows; 6434/53C0 gates. */
    func_800F654C(2);
    func_800F8188(0x38E6);
    func_800F6564(0x2703);
    if (func_800F6434() != 0)
        goto L15FE68;
    func_800F8F74(0x2703);
    func_800F8F74(0x2704);
    func_800F8F74(0x2705);
    func_800F8F74(0x2706);
    func_800F8FB8(0xD6);
    func_800F6630(0xCF);
    func_8015A374();
    func_800F654C(3);
    func_80153374();
    func_800F90EC(0x2A06);
    func_800F6564(0x353F);
    func_800F5140();
    func_800F654C(0x40);
    func_800F8768(0x29EB);
    func_800F6630(0xCF);
    func_800F5574(5);
    if (func_800F53C0() == 0)
        goto L15FE68;
    func_800F5480();
    func_800F8058(5);
    func_800F6B68(0x29BD);
    func_800F8768(0x29B5);
    func_800F3B04();
    func_800F6048();
    func_800F6240(0x29CD);
    return;
L15FE68:
    func_800F6564(0x2709);
    func_800F8188(0x2707);
    func_800F6564(0x270A);
    func_800F8188(0x2708);
    return;
}
