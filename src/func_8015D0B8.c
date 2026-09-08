#include "common.h"
void func_8015D0B8(void)
{
    /* options seeds: 0x1822/0x38FC/0x3975 texts, 0x32ED-0x32F0 cells,
       80152908/80152CDC/8015A284/80155778/801583FC rows; 6434
       gates. */
    func_800F6564(0x1822);
    func_800F6D70(0x38FC);
    if (func_800F6434(2) != 0)
        return;
    func_800F6564(0x1822);
    func_800F8188(0x3975);
    func_80152908();
    func_800F6D70(0x38FC);
    if (func_800F6434() != 0)
        goto L15D160;
    func_800F6364();
    func_800F6364();
    func_800F6364();
    func_800F6364();
L15D160:
    func_800F971C();
    func_800F8960(0x38FC);
    func_800F90EC(0x32DB);
    func_800F90EC(0x32DC);
    func_800F654C(0x80);
    func_800F8768(0x32DA);
    func_800F6564(0x3975);
    func_80152CDC();
    func_8015A284();
    func_80155778();
    func_801583FC();
    return;
}
