#include "common.h"
void func_80137938(void)
{
    /* ability page: four 4120(2)-gated blocks; each reads 0x1B7A/0x1B7C
       and writes 0x1BCB through 6240 after the 537D/53C0 key checks. */
    func_800F6630();
    func_800F4248(0x40);
    if (func_800F4120(2) != 0)
        goto L1379C0;
    func_800F6564(0x1B7A);
    if (func_800F6434(2) != 0)
        goto L1379C0;
    func_800F6564(0x1B7C);
    func_800F5410();
    func_800F4008(0xA);
    func_800F5574(0x64);
    if (func_800F53C0() == 0)
        goto L1379B0;
    func_800F654C(0xA);
L1379B0:
    func_800F8188(0x1B7C);
    func_800F6240(0x1BCB);
L1379C0:
    func_800F6630(1);
    func_800F4248(8);
    if (func_800F4120(2) != 0)
        goto L137A38;
    func_800F6564(0x1B7A);
    if (func_800F6434(2) != 0)
        goto L137A38;
    func_800F6564(0x1B7C);
    func_800F61E8();
    func_800F5574(0x64);
    if (func_800F53C0() == 0)
        goto L137A28;
    func_800F654C(2);
L137A28:
    func_800F8188(0x1B7C);
    func_800F6240(0x1BCB);
L137A38:
    func_800F6630(1);
    func_800F4248(4);
    if (func_800F4120(2) != 0)
        goto L137AB0;
    func_800F6564(0x1B7A);
    if (func_800F6434(2) != 0)
        goto L137AB0;
    func_800F6564(0x1B7C);
    func_800F5CCC();
    func_800F5574(2);
    if (func_800F53C0() != 0)
        goto L137AA0;
    func_800F654C(0x63);
L137AA0:
    func_800F8188(0x1B7C);
    func_800F6240(0x1BCB);
L137AB0:
    func_800F6630(1);
    func_800F4248(3);
    if (func_800F4120(2) != 0)
        return;
    func_800F6564(0x1B7A);
    func_800F4248(1);
    func_800F8188(0x1B7A);
    func_800F6240(0x1BCB);
    return;
}
