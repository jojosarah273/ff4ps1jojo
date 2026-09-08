#include "common.h"
void func_8012E844(void)
{
    /* party-form/formation screen: 0x1D/0x1F/0x23/0x25/0x21 stat cells
       (3A70/54D4/3F38(3A70(...)) row reads), 8012EAC0 commit; three
       nested loops (L2E8EC outer, L2E90C inner, L2E9CC tail). */
    func_800F8D6C(0x1D);
    func_800F8D6C(0x1F);
    func_800F9644(0x20);
    func_800F55C0(0x1340);
    if (func_800F53D4() == 0)
        goto L2E8AC;
    func_800F5410();
    func_800F4064(0xFA);
    goto L2E8BC;
L2E8AC:
    func_800F5410();
    func_800F4064(0x5E);
L2E8BC:
    func_800F8274(0x21);
    func_800F6214();
    func_800F6214();
    func_800F8274(0x25);
    func_800F9660(0x20);
    func_800F6364();
L2e8ec:
    for (;;) {
        func_800F7500(2);
        func_800F7270(0x1F);
        func_800F6364();
        func_800F8D6C(0x23);
    L2e90c:
        for (;;) {
            func_800F6E30(0x1F);
            if (func_800F6434(2) != 0)
                goto L2E9CC;
            func_800F3A70(0x1F);
            if (func_800F54D4(func_800F3B04()) == 0)
                goto L2E9CC;
            func_800F63BC();
            func_800F66D8(0x1F);
            func_800F5410();
            func_800F3F38(func_800F3A70(0x23));
            func_800F5574(0x64);
            if (func_800F53C0() != 0)
                goto L2E9D4;
            func_800F8A18(0x23);
            func_800F654C();
            func_800F82EC(0x1F);
            func_800F5EA0();
            func_800F82EC(0x1F);
        L2E9CC:
            func_800F63BC();
        L2E9D4:
            func_800F63BC();
            func_800F9644(0x20);
            func_800F5410();
            func_800F3F94(func_800F3C3C(0x1F));
            func_800F5520(func_800F3C3C(0x25));
            func_800F9660(0x20);
            if (func_800F53D4() == 0)
                continue;
            break;
        }
        func_800F9644(0x20);
        func_800F62F0(0x1F);
        func_800F62F0(0x1F);
        func_800F9660(0x20);
        func_800F7270(0x1F);
        if (func_800F56AC(func_800F3C3C(0x21)) == 0)
            continue;
        break;
    }
    func_800F7270(0x1D);
    func_800F9330();
    func_8012EAC0();
    func_800F95A0();
    func_800F8D6C(0x1D);
    func_8012EAC0();
    return;
}
