#include "common.h"
void func_80158190(void)
{
    /* options screen: 0xD2 window + 0x38F6/0x35D8 texts, 80152CDC +
       8015310C rows; 5574(0xD) ladder picks 0x352E codes via
       4120(0x202)/53C0 gates. */
    func_800F6630(0xD2);
    func_800F8188(0x38F6);
    func_80152CDC();
    func_800F6240(0x38F6);
    func_800F6564(0x38F6);
    func_800F5574(0xD);
    if (func_800F53D4() == 0)
        goto L1581E0;
    func_800F8F74(0x38F6);
L1581E0:
    func_800F6630(0xD3);
    func_800F5140();
    func_800F5410();
    func_800F3F38(func_800F3C3C(0xD3));
    func_800F824C(0xA9);
    func_800F6630(0xA9);
    func_8015310C();
    func_800F7210(0x3598);
    func_800F6B68(0x2A06);
    func_800F4248(0x7E);
    if (func_800F4120(0x202) != 0)
        goto L158288;
    func_800F6630(0xD2);
    func_800F5574(5);
    if (func_800F53C0() == 0)
        goto L158278;
    func_800F654C(1);
    goto L1582B8;
L158278:
    func_800F654C();
    goto L1582B8;
L158288:
    func_800F4248(8);
    if (func_800F4120(2) != 0)
        goto L1582B0;
    func_800F654C(2);
    goto L1582B8;
L1582B0:
    func_800F654C(3);
L1582B8:
    func_800F8188(0x352E);
    func_800F8FB8(0xD1);
    return;
}
