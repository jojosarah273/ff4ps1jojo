#include "common.h"
void func_80142E90(void)
{
L42e98:
    for (;;) {
        func_80143D64();
        func_800F8768();
        func_80143D14();
        func_800F8768();
        func_800F6364();
        if (func_800F56AC(func_800F3B04()) == 0)
            continue;
        break;
    }
    func_800F971C();
    func_800F8D6C(4);
    func_800F71DC();
    func_800F8D6C(0x40);
    func_800F6564(0x6CC0);
    if (func_800F6434(2) != 0)
        goto L42F40;
    func_800F654C(8);
    goto L42F48;
L42F40:
    func_800F654C(0xF8);
L42F48:
    func_800F824C(2);
    func_800F6564();
    if (func_800F6434(2) != 0)
        goto L42F88;
    func_800F7210();
    func_800F8D6C();
    func_8014323C();
    return;
L42F88:
    func_800F6564(0x34C4);
    if (func_800F6434(0x80) != 0)
        goto L430C4;
    func_800F971C();
    func_800F6564(0x34C5);
    func_800F824C(0xC);
L42fd0:
    for (;;) {
        func_800F3C3C(0xC);
        func_800F4F28();
        if (func_800F4FAC(0x101) != 0)
            goto L4309C;
        func_800F6B68(0x29C5);
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            goto L4309C;
        func_800F5140();
        func_800F6D70();
        func_800F5410();
        func_800F4008(0x18);
        func_800F3F38(func_800F3C3C(2));
        func_800F824C();
        func_800F6D70();
        func_800F5480();
        func_800F8058(8);
        func_800F824C(1);
        func_8014323C();
    L4309C:
        func_800F6364();
        func_800F5958(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
L430C4:
    func_800F971C();
    func_800F6564(0x34C5);
    func_800F824C(0xC);
L430f4:
    for (;;) {
        func_800F3C3C(0xC);
        func_800F4F28();
        if (func_800F4FAC(0x101) != 0)
            goto L431B8;
        func_800F6B68(0x29C5);
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            goto L431B8;
        func_800F5140();
        func_800F6D70();
        func_800F5410();
        func_800F3F38(func_800F3C3C(2));
        func_800F824C();
        func_800F6D70();
        func_800F5480();
        func_800F8058(8);
        func_800F824C(1);
        func_8014323C();
    L431B8:
        func_800F6364();
        func_800F5958(8);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
