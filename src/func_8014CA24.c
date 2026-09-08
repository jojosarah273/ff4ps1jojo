#include "common.h"
void func_8014CA24(void)
{
    func_800F971C();
    for (;;) {
        func_800F8768(0xF28F);
        func_800F6364();
        func_800F5958(0x10);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F6564(0xF2D0);
    func_800F5574(6);
    if (func_800F53D4() == 0)
        goto L4ae0;
    func_800F71DC(0xF28F);
    func_800F8D6C(8);
    func_800F654C(0x80);
    func_800F8188(0xF27A);
    func_800F654C(0xC8);
    func_800F824C(0x2C);
    func_800F654C(0x54);
    func_800F824C(0x2D);
    return;
L4ae0:
    func_800F6EA8(2);
    func_800F4248(0xF0);
    func_800F5574(0xD0);
    if (func_800F53D4() != 0)
        goto L4b38;
    func_800F5574(0xE0);
    if (func_800F53D4() != 0)
        goto L4b38;
    func_800F5574(0x30);
    if (func_800F53D4() == 0)
        goto L4b9c;
L4b38:
    func_800F654C(0x44);
    func_800F824C(0x2D);
    func_800F71DC(0xF28F);
    func_800F8D6C(8);
    func_800F654C(0x80);
    func_800F8188(0xF27A);
    func_800F6630(0);
    if (func_800F6434(0x202) != 0) {
        func_800F654C(0x60);
        func_800F824C(0x2C);
        return;
    }
    func_800F654C(0xD8);
    func_800F824C(0x2C);
    return;
L4b9c:
    func_800F5574(0x40);
    if (func_800F53D4() == 0)
        goto L4bdc;
    func_800F6564(0xF49A);
    func_800F5574(0x91);
    if (func_800F53D4() != 0)
        goto L4c3c;
    func_800F654C(0x60);
    goto L4bf4;
L4bdc:
    func_800F5574(0x50);
    if (func_800F53D4() == 0)
        goto L4c3c;
    func_800F654C(0x80);
L4bf4:
    func_800F654C();
    func_800F824C(0x2C);
    func_800F654C(0x44);
    func_800F824C(0x2D);
    func_800F71DC(0xF28F);
    func_800F8D6C(8);
    func_800F654C(0x80);
    func_800F8188(0xF27A);
    return;
L4c3c:
    func_800F7500(1);
    func_800F67FC(2);
    func_800F4248(0x60);
    if (func_800F4120(0x202) != 0)
        goto L4cf4;
    func_800F6630();
    if (func_800F6434(0x202) != 0)
        goto L4cb4;
    func_800F8FB8(0x2D);
    func_800F654C(0x18);
    func_800F824C(0x2C);
    func_800F654C(1);
    func_800F8188(0xF261);
    func_800F71DC(0xF053);
    goto L4ce7c;
L4cb4:
    func_800F971C();
    func_800F8D6C(0x2C);
    func_800F8188(0xF261);
    func_800F71DC(0xF043);
    goto L4ce7c;
L4cf4:
    func_800F5574(0x40);
    if (func_800F53D4() == 0)
        goto L4d3c;
    func_800F6630();
    if (func_800F6434(0x202) == 0)
        goto L4d6c;
    func_800F71DC(0xF4);
    func_800F8D6C(0x2C);
    goto L4dcc;
L4d3c:
    func_800F5574(0x60);
    if (func_800F53D4() == 0)
        goto L4df4;
    func_800F6630();
    if (func_800F6434(0x202) != 0)
        goto L4db4;
    func_800F654C(0xE8);
L4d6c:
    func_800F654C();
    func_800F824C(0x2D);
    func_800F654C(0x17);
    func_800F824C(0x2C);
    func_8014C9CC();
    func_800F654C(1);
    func_800F8188(0xF261);
    func_800F71DC(0xF039);
    goto L4ce7c;
L4db4:
    func_800F8FB8(0x2C);
    func_800F654C(0xF0);
    func_800F824C(0x2D);
L4dcc:
    func_8014C9CC();
    func_800F971C();
    func_800F8188(0xF261);
    func_800F71DC(0xF029);
    goto L4ce7c;
L4df4:
    func_800F6630();
    if (func_800F6434(0x202) != 0)
        goto L4e4c;
    func_800F8FB8(0x2C);
    func_800F654C(0xF8);
    func_800F824C(0x2D);
    func_8014BAA4();
    func_800F654C(1);
    func_800F8188(0xF261);
    func_800F71DC(0xF06D);
    goto L4ce7c;
L4e4c:
    func_800F71DC();
    func_800F8D6C(0x2C);
    func_8014BAA4();
    func_800F654C();
    func_800F8188(0xF261);
    func_800F71DC(0xF05D);
L4ce7c:
    func_800F8D6C(8);
    return;
}
