#include "common.h"
void func_8014323C(void)
{
    func_800F6240();
    func_800F9330();
    func_800F971C();
    func_800F7594(6);
L327C:
    for (;;) {
        func_800F6B68();
        if (func_800F6434(0x80) != 0)
            goto L3304;
        func_800F5410();
        func_800F3F38(func_800F3C3C());
        if (func_800F53C0() != 0)
            goto L347C;
        goto L336C;
    L3304:
        func_800F5410();
        func_800F3F38(func_800F3C3C());
        if (func_800F53C0() != 0)
            goto L347C;
    L336C:
        func_800F8960(0x300);
        func_800F6B68();
        if (func_800F6434(0x80) != 0)
            goto L33FC;
        func_800F5410();
        func_800F3F38(func_800F3C3C(1));
        if (func_800F53C0() != 0)
            goto L347C;
        goto L3464;
    L33FC:
        func_800F5410();
        func_800F3F38(func_800F3C3C(1));
        if (func_800F53C0() != 0)
            goto L347C;
    L3464:
        func_800F5574(0x80);
        if (func_800F53C0() == 0)
            goto L349C;
    L347C:
        func_800F654C(0xF0);
        func_800F8960(0x300);
        func_800F8960(0x301);
        goto L34A4;
    L349C:
        func_800F8960(0x301);
    L34A4:
        func_800F6564();
        func_800F5574(0xFF);
        if (func_800F53D4() == 0)
            goto L350C;
        func_800F6B68();
        if (func_800F6434(2) != 0)
            goto L34FC;
        func_800F654C(0xF0);
        func_800F8960(0x300);
        func_800F8960(0x301);
        goto L35B8;
    L34FC:
        func_800F6B68();
        goto L3548;
    L350C:
        func_800F4248();
        func_800F5140();
        func_800F5410();
        func_800F3F38(func_800F3B04());
    L3548:
        func_800F8960(0x302);
        func_800F6564(0x6CC0);
        if (func_800F6434(2) != 0)
            goto L35A8;
        func_800F6D70(0x300);
        func_800F8960(0x300);
        func_800F654C(0x7F);
        func_800F8960(0x303);
        goto L35B8;
    L35A8:
        func_800F654C(0x3F);
        func_800F8960(0x303);
    L35B8:
        func_800F6364();
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        if (func_800F56AC(func_800F3B04()) == 0)
            continue;
        break;
    }
    func_800F8EBC(6);
    func_800F95A0();
    func_800F8F74();
    return;
}
