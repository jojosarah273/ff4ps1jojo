#include "common.h"
void func_8011383C(void)
{
    func_800F654C(0x51);
    func_800FD804();
    func_800F654C(0x60);
    func_800F824C(0xAD);
    func_800F8FB8(0x79);
    func_800F8FB8(0x7A);
L1388c:
    for (;;) {
        func_800FE7B0();
        func_800F6630(0x7A);
        func_800F4248(0x1C);
        func_800F6630(0x83);
        func_800F4248(0xE0);
        func_8017EA90();
        func_800F6630(0x7A);
        func_800F4248(0xF);
        if (func_800F4120(0x202) != 0)
            goto L13958;
        func_800F62BC(0x79);
    L13958:
        func_8011416C();
        func_800F8FB8(0x20);
    L13968:
        for (;;) {
            func_800F6630(0x20);
            func_800F5410();
            func_800F3F38(func_800F3B04(0x6FB));
            func_800F824C(0x22);
            func_800F5140();
            func_800F5410();
            func_800F3F38(func_800F3C3C(0x22));
            func_801140A4();
            func_80113C04();
            func_800F6630(0x20);
            func_800F5410();
            func_800F4008(0x40);
            func_800F5410();
            func_800F3F38(func_800F3B04(0x6FB));
            func_800F5140();
            func_801140A4();
            func_80113C54();
            func_800F6630(0x20);
            func_800F4248(3);
            func_800F8960(0x302);
            func_800F5574(0xEC);
            if (func_800F53D4() == 0)
                goto L13B18;
            func_800F6630(0x7A);
            func_800F4248(4);
            if (func_800F4120(2) != 0)
                goto L13B18;
            func_800F654C(0x79);
        L13B18:
            func_800F654C(0x39);
            func_800F8960(0x303);
            func_800F62BC(0x20);
            func_800F6630(0x20);
            func_800F5574(0x10);
            if (func_800F53D4() != 0)
                break;
        }
        func_800F6240(0x6FB);
        func_800F6630(0x7A);
        func_800F4248(3);
        if (func_800F4120(0x202) != 0)
            goto L13BB0;
        func_800F6630(0x79);
        func_800F5574(0x12);
        if (func_800F53C0() != 0)
            goto L13BA8;
        func_800F5DA0(0xAD);
        goto L13BB0;
    L13BA8:
        func_800F62BC(0xAD);
    L13BB0:
        func_800F6630(0xAD);
        func_800F5574(0x62);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F654C();
    func_800FD804();
    func_8011EA5C();
    return;
}
