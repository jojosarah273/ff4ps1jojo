#include "common.h"
void func_801163E8(void)
{
    func_800F8FB8(0x3E);
    func_800F5140();
    func_800F4F4C();
    func_800F7A40(func_800F3C3C(0x3E));
    func_800F824C(0x3D);
    func_800F7270(0x3D);
    func_800F6C68();
    func_800F8188(0x9D3);
    func_800F6C68();
    func_800F8188(0x9D4);
    func_800F654C(0xF);
    func_800F824C(0x80);
L6460:
    for (;;) {
        func_800F7500();
        func_800F654C(1);
        func_800F8188(0xA15);
        func_800F7210(0x9D3);
        func_800F6C68();
        func_800F5574(0xFF);
        if (func_800F53D4() == 0)
            goto L653c;
        func_800F6564(0x1703);
        func_800F8FB8(0x3D);
        func_800F7864();
        func_800F76E8();
        func_800F7CC8(func_800F3C3C(0x3D));
        func_800F7864();
        func_800F76E8();
        func_800F7CC8(func_800F3C3C(0x3D));
        func_800F824C(0x3E);
        func_800F7270(0x3D);
        func_800F6B68(0x1000);
        if (func_800F6434(0x202) != 0)
            goto L6524;
        func_80175E08();
    L6524:
        func_800F654C(1);
        func_800F824C(0xE0);
        return;
    L653c:
        func_800F5574(0xEB);
        if (func_800F53D4() == 0)
            goto L65d8;
        func_800F6364();
        func_800F6C68();
        func_800F8188(0xA15);
        func_800F6364();
        func_800F6C68();
        func_800F824C(7);
        func_800F6364();
        for (;;) {
            func_800F6C68();
            func_800F8960(0x9D5);
            func_800F6364();
            func_800F63BC();
            func_800F5DA0(7);
            if (func_800F5B8C(0x202) != 0)
                continue;
            break;
        }
        goto L66c8;
    L65d8:
        func_800F5574(0xDB);
        if (func_800F53C0() == 0)
            goto L66b0;
        func_800F5574(0xE2);
        if (func_800F53D4() != 0)
            goto L6668;
        func_800F5574(0xFE);
        if (func_800F53D4() == 0)
            goto L668c;
        func_800F8960(0x9D5);
        func_800F6364();
        func_800F63BC();
        func_800F6C68();
        func_800F8960(0x9D5);
        func_800F6364();
        func_800F63BC();
        func_800F6C68();
    L6668:
        func_800F8960(0x9D5);
        func_800F6364();
        func_800F63BC();
        func_800F6C68();
    L668c:
        func_800F8960(0x9D5);
        func_800F6364();
        func_800F63BC();
        func_800F6C68();
    L66b0:
        func_800F8960(0x9D5);
        func_800F6364();
        func_800F63BC();
    L66c8:
        func_800F8D00(0x9D3);
        func_800F654C(0xFF);
        func_800F8960(0x9D5);
        for (;;) {
            if (func_80116720() != 0)
                return;
            func_800F5D24(0xA15);
            if (func_800F5B8C(0x202) != 0)
                continue;
            break;
        }
    }
}
