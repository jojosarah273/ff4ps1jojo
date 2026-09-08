#include "common.h"
void func_80105DB4(void)
{
    func_800F8FB8(0xDC);
L5DC8:
    for (;;) {
        func_800FE7B0();
        func_801096F0();
        func_801060A8();
        func_800F62BC(0xDC);
        func_800F6630(0xDC);
        func_800F5574(6);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F654C(1);
    func_800F824C(0x54);
    func_800F8FB8(0x8C);
L5E20:
    for (;;) {
        func_800FE7B0();
        func_801096F0();
        func_801764DC();
        func_800F6630(2);
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            goto L5E80;
        func_800F6630(0x54);
        if (func_800F6434(0x202) != 0)
            goto L5E80;
        func_800F62BC(0x54);
        goto L5FB8;
    L5E80:
        func_800F6630(3);
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            goto L5ED8;
        func_800F6630(0x55);
        if (func_800F6434(0x202) != 0)
            goto L5ED8;
        func_800F62BC(0x55);
        func_800F654C(1);
        func_800F824C(0x8C);
        goto L5FB8;
    L5ED8:
        func_800F6630(1);
        func_800F4248(0xC);
        if (func_800F4120(2) != 0)
            continue;
        func_800F6630(0x8C);
        func_800F824C(0x8C);
        func_800F6630(0x8C);
        if (func_800F6434(0x202) != 0)
            goto L5F44;
        func_800F654C(0x14);
        goto L5F50;
    L5F44:
        func_800F654C(0xFF);
    L5F50:
        func_800F6630(0x8C);
        if (func_800F6434(2) != 0)
            goto L5F8C;
        func_800F654C(0x14);
        goto L5F94;
    L5F8C:
        func_800F654C(0xFF);
    L5F94:
        func_80106860();
    }
L5FB8:
    func_80106830();
    func_800F6630(0x8C);
    func_800F824C(0xDB);
    func_800F5DA0(0xDC);
L5FD8:
    for (;;) {
        func_800FE7B0();
        func_801096F0();
        func_801060A8();
        func_800F5DA0(0xDC);
        if (func_800F5B8C(0x8080) != 0)
            continue;
        break;
    }
    func_800FE7B0();
    func_801096F0();
    func_800F6630(0x3D);
    func_800F5480();
    func_800F8058(0x20);
    func_800F824C(0x3D);
    func_800F6630(0x3E);
    func_800F8058();
    func_800F824C(0x3E);
    func_801062E8();
    func_800F6630(0x3D);
    func_800F5480();
    func_800F8058(0x20);
    func_800F824C(0x3D);
    func_800F6630(0x3E);
    func_800F8058();
    func_800F824C(0x3E);
    func_801062E8();
    return;
}
