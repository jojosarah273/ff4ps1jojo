#include "common.h"
void func_80162DF8(void)
{
    func_800F6630(0xCD);
    if (func_800F6434(0x8080) != 0)
        goto Lfa4;
    func_800F8188(0x34C7);
    func_800F654C(0xF8);
    func_800F8188(0x34C5);
    func_800F971C();
    for (;;) {
        func_800F6B68(0x33C2);
        func_800F8960(0x289C);
        func_800F5574(0xCE);
        if (func_800F53D4() != 0)
            break;
        func_800F5574(0xC5);
        if (func_800F53D4() != 0)
            break;
        func_800F6364();
        func_800F63BC();
    }
    func_800F63BC();
    func_800F654C(0xF8);
    func_800F8960(0x289C);
    func_800F63BC();
    func_800F654C(4);
    func_800F8960(0x289C);
    func_800F63BC();
    func_800F6364();
    for (;;) {
        func_800F6B68(0x33C2);
        func_800F8960(0x289C);
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            break;
        func_800F6364();
        func_800F63BC();
    }
    func_800F971C();
    for (;;) {
        func_800F6B68(0x289C);
        func_800F8768(0x33C2);
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            break;
        func_800F6364();
    }
Lfa4:
    func_800F654C(0xF8);
    func_800F8188(0x33C6);
    func_800F654C(4);
    func_800F8188(0x33C7);
    func_800F6564(0x3881);
    if (func_800F6434(2) == 0)
        return;
    func_800F7270(0xA6);
    func_800F6B68(0x201B);
    func_800F824C(0xDF);
    func_800F6630(0xC1);
    if (func_800F6434(0x202) != 0)
        goto L044;
    func_800F76BC(func_800F3C3C(0xDF));
    func_800F76E8();
    func_800F6630(0xDF);
    if (func_800F6434(0x202) != 0)
        goto L044;
    func_800F62BC(0xDF);
L044:
    func_800F6630(0xDF);
    func_800F824C(0x84);
    func_800F6B68(0x201D);
    func_800F824C(0xC5);
    func_800F824C(0xE1);
    func_8015240C();
    func_800F76BC(func_800F3C3C(0xE4));
    func_800F76E8();
    func_800F7CC8(func_800F3C3C(0xE3));
    func_800F7270(0xE3);
    func_800F8D6C(0xCB);
    func_800F6630(0xCD);
    if (func_800F6434(0x80) != 0)
        goto L0ec;
    func_800F71DC(5);
    func_800F8D6C(0xC7);
    func_800F71DC(0xD);
    func_800F8D6C(0xC3);
    goto L124;
L0ec:
    func_800F971C();
    func_800F8D6C(0xC7);
    func_800F71DC(5);
    func_800F8D6C(0xC3);
L124:
    func_800F971C();
    func_800F6630(0xC5);
    func_80152224();
    func_800F824C(0xC9);
    func_800F5410();
    func_800F6630(0xCB);
    func_800F3F38(func_800F3C3C(0xC9));
    func_800F824C(0xC9);
    func_800F6630(0xCC);
    func_800F4008();
    func_800F824C(0xCA);
    func_800F6630(0xC7);
    func_800F6B68(0x3540);
    if (func_800F6434(0x202) != 0)
        goto L3f4;
    func_800F6630(0xC7);
    func_80152CDC();
    func_800F7270(0xA6);
    func_800F6B68(0x2003);
    func_800F4248(0xC0);
    if (func_800F4120(0x202) != 0)
        goto L3f4;
    func_800F6B68(0x2005);
    func_800F4248(2);
    if (func_800F4120(0x202) != 0)
        goto L3f4;
    func_800F6B68(0x2006);
    if (func_800F6434(0x80) != 0)
        goto L3f4;
    func_800F6B68(0x2040);
    func_800F4248(0x20);
    if (func_800F4120(0x202) != 0)
        goto L3f4;
    func_800F6630(0xC1);
    if (func_800F6434(2) != 0)
        goto L2ec;
    func_800F6B68(0x2040);
    if (func_800F6434(0x8080) != 0)
        goto L2ec;
    func_800F76BC(func_800F3C3C(0xCA));
    func_800F76E8();
    func_800F7CC8(func_800F3C3C(0xC9));
    func_800F76BC(func_800F3C3C(0xCA));
    func_800F76E8();
    func_800F7CC8(func_800F3C3C(0xC9));
    func_800F7D0C();
L2ec:
    func_800F6630(0xC1);
    if (func_800F6434(0x202) != 0)
        goto L394;
    func_800F6630(0x84);
    func_800F824C(0xDF);
    func_800F6B68(0x202A);
    func_800F824C(0xE1);
    func_8015240C();
    func_800F5480();
    func_800F6630(0xC9);
    func_800F7F48(func_800F3C3C(0xE3));
    func_800F824C(0xC9);
    func_800F6630(0xCA);
    func_800F7F48(func_800F3C3C(0xE4));
    func_800F824C(0xCA);
    if (func_800F53C0() != 0)
        goto L394;
L384:
    func_800F71DC(0x4000);
    func_800F8D6C(0xC9);
L394:
    if (func_800F7170(2) != 0)
        goto L384;
    func_800F6630(0xC7);
    func_800F5140();
    func_800F6630(0xC9);
    func_800F8768(0x34D4);
    func_800F6630(0xCA);
    func_800F8768(0x34D5);
L3f4:
    func_800F62BC(0xC7);
    func_800F6630(0xC7);
    if (func_800F54D4(func_800F3C3C(0xC3)) == 0)
        goto L124;
    func_80061C8C();
    return;
}
