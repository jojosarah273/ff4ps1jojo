#include "common.h"
void func_8013463C(void)
{
    /* config/weapon-switch screen: 1B37-1B3A texts; 801224D0/801345B4
       renders; 4C44/4300/6C61/5354/5F54 option texts; exit 5480. */
    func_800F8188(0x1B39);
    if (func_800F53D4() != 0)
        goto L134930;
    func_800F6564(0x1B37);
    func_801224D0();
    func_800F8188(0x1B3A);
    func_800F5574(0x30);
    if (func_800F53D4() != 0)
        goto L134910;
    func_800F5574(0x31);
    if (func_800F53D4() != 0)
        goto L1348F0;
    func_800F5574(0x32);
    if (func_800F53D4() != 0)
        goto L134900;
    func_800F6564(0x1B39);
    func_800F6564(0x1B37);
    if (func_800F6434(2) != 0)
        goto L134714;
    func_800F654C(0x33);
    goto L13471C;
L134714:
    func_800F654C(0x35);
L13471C:
    func_800F824C(0x43);
    func_800F7594(0x43);
    func_800F66D8(0xE5);
    func_800F8188(0x1B38);
    if (func_800F6434(0x202) != 0)
        goto L13475C;
    func_800F5480();
    return;
L13475C:
    func_800F71DC(0x4C44);
    func_801345B4();
    if (func_800F53C0() == 0)
        goto L134794;
L13477C:
    func_800F62BC(0xEB);
L134784:
    func_800F5410();
    return;
L134794:
    func_800F6564(0x1B39);
    func_800F71DC(0x4C44);
    func_801345B4();
    if (func_800F53C0() != 0)
        goto L13477C;
    func_800F6564(0x1B39);
    func_800F71DC(0x4300);
    func_801345B4();
    if (func_800F53C0() == 0)
        goto L13484C;
    func_800F6E30(0xE5);
    func_800F4248(0xC0);
    func_800F5574(0xC0);
    if (func_800F53D4() != 0)
        goto L13481C;
L13480C:
    func_800F6564(0x1B38);
    goto L1348D8;
L13481C:
    func_800F6564(0x1B38);
    func_800F71DC(0x4300);
    func_801345B4();
    if (func_800F53C0() == 0)
        goto L13480C;
    return;
L13484C:
    func_800F71DC(0x6C61);
    func_801345B4();
    if (func_800F53C0() == 0)
        goto L13487C;
    func_800F6564(0x1B38);
    goto L1348D8;
L13487C:
    func_800F71DC(0x5354);
    func_801345B4();
    if (func_800F53C0() == 0)
        goto L1348AC;
    func_800F6564(0x1B38);
    goto L1348D8;
L1348AC:
    func_800F71DC(0x5F54);
    func_801345B4();
    if (func_800F53C0() == 0)
        goto L134784;
    func_800F6564(0x1B38);
L1348D8:
    func_800F71DC();
    func_801345B4();
    return;
L1348F0:
    func_800F71DC();
    goto L134918;
L134900:
    func_800F71DC();
    goto L134918;
L134910:
    func_800F71DC();
L134918:
    func_800F6564(0x1B39);
    func_801345B4();
    return;
L134930:
    func_800F5480();
    return;
}
