#include "common.h"
void func_8014E424(void)
{
    func_800F5574(3);
    if (func_800F53D4() != 0)
        return;
    func_800F5574(4);
    if (func_800F53D4() != 0)
        return;
    func_800F5574(2);
    if (func_800F53D4() == 0)
        goto L4E484;
    func_80073C98();
    return;
L4E484:
    func_800F6564();
    func_800F5574(2);
    if (func_800F53D4() == 0)
        goto L4E544;
    func_800F71DC();
    func_800F654C(0x20);
    func_800F824C();
L4e4bc:
    for (;;) {
        func_800F654C(0x20);
        func_8014E984();
        func_800F5410();
        func_800F4008(0xD0);
        func_800F8768();
        func_800F6630();
        func_800F8768();
        func_800F5410();
        func_800F4008(0xC);
        func_800F824C(0x10);
        func_800F5958();
        if (func_800F53D4() != 0)
            break;
    }
    return;
L4E544:
    func_800F5574(3);
    if (func_800F53D4() == 0)
        goto L4E614;
    func_800F971C();
    func_800F654C(0x20);
    func_800F824C();
L4e58c:
    for (;;) {
        func_800F654C(0x90);
        func_8014E984();
        func_800F5410();
        func_800F4008(0x18);
        func_800F8768();
        func_800F6630();
        func_800F8768();
        func_800F5410();
        func_800F4008(0xC);
        func_800F824C(0x10);
        func_800F5958();
        if (func_800F53D4() != 0)
            break;
    }
    return;
L4E614:
    func_800F971C();
    func_800F6564();
    if (func_800F6434(0x202) != 0)
        goto L4E6D4;
L4e64c:
    for (;;) {
        func_800F654C(8);
        func_8014E984();
        func_800F5480();
        func_800F8058(4);
        func_800F8768();
        func_800F654C(0xC);
        func_8014E984();
        func_800F5480();
        func_800F8058(6);
        func_800F8768();
        func_800F5958(0xA);
        if (func_800F53D4() != 0)
            break;
    }
    return;
L4E6D4:
    for (;;) {
        func_800F6B68();
        func_800F824C();
        func_800F5140();
        func_8014E984();
        func_800F5480();
        func_800F7F48(func_800F3C3C());
        func_800F8768();
        func_800F6364();
        func_800F5958(0x10);
        if (func_800F53D4() != 0)
            break;
    }
    return;
}
