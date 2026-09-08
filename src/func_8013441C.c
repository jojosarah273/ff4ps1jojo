#include "common.h"
void func_8013441C(void)
{
    /* config weapon sub-menu: 0x1EB/0x1B37/0x1B39 texts; 8013463C/
       80134AF8/801224D0/801345B4 rows; 53C0/53D4 ladders route the
       4C40/5F4D/6C61 option texts. */
    func_800F8F74(0x1EB);
    func_800F5574(0xB0);
    if (func_800F53C0() != 0)
        goto L13445C;
    func_8013463C();
    if (func_800F53C0() != 0)
        goto L13446C;
L13445C:
    func_800F5410();
    return;
L13446C:
    func_80134AF8();
    if (func_800F53C0() == 0)
        return;
    func_800F6564(0x1B37);
    func_800F5574(2);
    if (func_800F53C0() != 0)
        return;
    func_800F6E30(0xE5);
    func_800F4248(0xC0);
    func_800F5574(0xC0);
    if (func_800F53D4() != 0)
        goto L13454C;
    func_800F5410();
    func_800F7C6C();
    func_800F7A68();
    func_800F7C6C();
    func_800F7A68();
    func_800F7C6C();
    func_801224D0();
    if (func_800F54D4(func_800F3B04(0x1B37)) == 0)
        goto L13455C;
L13454C:
    func_800F6564(0x1B39);
    goto L134584;
L13455C:
    func_800F6564(0x1B39);
    func_800F71DC(0x5F4D);
    func_801345B4();
    if (func_800F53C0() != 0)
        goto L13459C;
L134584:
    func_800F71DC(0x4C40);
    func_801345B4();
    return;
L13459C:
    func_800F5480();
    return;
}
