#include "common.h"
void func_801571DC(void)
{
    func_800F71DC(0x2000);
    func_800F8D6C(0x80);
    func_800F971C();
    func_800F8FB8(0xA9);
L21c:
    func_800F971C();
L240:
    for (;;) {
        func_800F6B68(0x1000);
        func_800F82EC(0x80);
        func_800F6364();
        func_800F63BC();
        func_800F5A90(0x40);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F9330();
    func_800F971C();
    func_800F66D8(0x80);
    func_800F4248(0x1F);
    if (func_800F4120(0x202) != 0)
        goto L354;
    func_800F6630(0xA9);
    func_800F6048(func_800F3B04());
    func_800F7500(3);
    func_800F971C();
    func_800F82EC(0x80);
    func_800F63BC();
    func_800F82EC(0x80);
    func_800F63BC();
    func_800F82EC(0x80);
    func_800F63BC();
    func_800F82EC(0x80);
    goto L59c;
L354:
    func_800F7500(3);
    func_800F66D8(0x80);
    func_800F4248(0xC0);
    if (func_800F4120(0x202) != 0)
        goto L59c;
    func_800F6630(0xA9);
    func_800F5140(0x40);
    func_800F654C();
    func_800F8768(0x29EB);
    func_800F9644(0x20);
    func_800F7500(9);
    func_800F6764(0x80);
    func_80152C50();
    func_800F7500(7);
    func_800F5520(func_800F3B04(func_800F3A70(0x80)));
    if (func_800F53C0() == 0)
        goto L44c;
    func_800F7500(5);
    func_800F6764(0x80);
    func_800F8378(0x80);
    goto L46c;
L44c:
    func_800F7500(5);
    func_800F6764(0x80);
    func_800F4264(0xFEFF);
    func_800F8378(0x80);
L46c:
    func_800F971C();
    func_800F9660(0x20);
    func_800F7500(0x3B);
    func_800F654C(0x10);
    func_800F82EC(0x80);
    func_800F6564(0x29A2);
    func_800F4248(0x20);
    if (func_800F4120(2) == 0) {
        func_800F654C(1);
        func_800F82EC(0x80);
    }
    func_800F7500(0x2D);
    func_800F66D8(0x80);
    func_800F7500(0x41);
    func_800F82EC(0x80);
    func_800F7500(0x2E);
    func_800F66D8(0x80);
    func_800F7500(0x42);
    func_800F82EC(0x80);
    func_800F7500(4);
    func_800F66D8(0x80);
    func_800F4248(0x40);
    func_800F82EC(0x80);
    func_800F63BC();
    func_800F66D8(0x80);
    func_800F4248(0x82);
    func_800F82EC(0x80);
    func_800F63BC();
    func_800F66D8(0x80);
    func_800F4248(1);
    func_800F82EC(0x80);
    func_800F7500(2);
    func_800F66D8(0x80);
    if (func_800F54D4(func_800F3B04(0x3583)) != 0)
        goto L59c;
    func_800F8188(0x3583);
L59c:
    func_800F95A0();
    func_800F7500(7);
    func_800F66D8(0x80);
    func_800F7500(8);
    func_800F78C4(func_800F3B04(func_800F3A70(0x80)));
    if (func_800F7918(0x202) == 0) {
        func_800F7500(3);
        func_800F66D8(0x80);
        func_800F82EC(0x80);
    }
    func_800F5410();
    func_800F6630(0x80);
    func_800F4008(0x80);
    func_800F824C(0x80);
    func_800F6630(0x81);
    func_800F4008();
    func_800F824C(0x81);
    func_800F62BC(0xA9);
    func_800F6630(0xA9);
    func_800F5574(5);
    if (func_800F53D4() == 0)
        goto L21c;
    func_800F71DC(0x2000);
    func_800F8D6C(0x80);
    func_800F971C();
    func_800F8EBC(0xA9);
    for (;;) {
        func_800F66D8(0x80);
        func_800F4248(0x1F);
        func_800F5574(8);
        if (func_800F53D4() != 0)
            goto L748;
        func_800F5574(9);
        if (func_800F53D4() != 0)
            goto L748;
        func_800F5574(0x13);
        if (func_800F53D4() != 0)
            goto L748;
        func_800F5574(0x15);
        if (func_800F53D4() == 0)
            goto L760;
    L748:
        func_800F6630(0xA9);
        func_800F8768(0x3539);
        func_800F6364();
    L760:
        func_800F9644(0x20);
        func_800F5410();
        func_800F6658(0x80);
        func_800F4064(0x80);
        func_800F8274(0x80);
        func_800F971C();
        func_800F9660(0x20);
        func_800F62BC(0xA9);
        func_800F6630(0xA9);
        func_800F5574(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
