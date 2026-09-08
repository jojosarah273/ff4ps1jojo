#include "common.h"
void func_801577D0(void)
{
    /* options grid: 0x16A8 gate picks the 0x2001-0x2201 row fill
       vs reversed order; fully parallel to 8016571C's tail. */
    func_800F6564(0x16A8);
    if (func_800F6434(0x202) != 0)
        goto L157890;
    func_800F6564(0x2001);
    func_800F4248(0x7F);
    func_800F8188(0x2001);
    func_800F6564(0x2081);
    func_800F4248(0x7F);
    func_800F8188(0x2081);
    func_800F6564(0x2101);
    func_800F4248(0x7F);
    func_800F8188(0x2101);
    func_800F6564(0x2181);
    func_800F8188(0x2181);
    func_800F6564(0x2201);
    func_800F8188(0x2201);
    return;
L157890:
    func_800F6564(0x2001);
    func_800F8188(0x2001);
    func_800F6564(0x2081);
    func_800F8188(0x2081);
    func_800F6564(0x2101);
    func_800F8188(0x2101);
    func_800F6564(0x2181);
    func_800F4248(0x7F);
    func_800F8188(0x2181);
    func_800F6564(0x2201);
    func_800F4248(0x7F);
    func_800F8188(0x2201);
    return;
}
