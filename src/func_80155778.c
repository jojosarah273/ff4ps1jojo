#include "common.h"
void func_80155778(void)
{
    func_800F7500(0x2030);
    func_800F8EBC(0x86);
    func_800F7500(0x2780);
    func_800F8EBC(0x84);
    func_800F8FB8(0xA9);
L7a8:
    func_800F971C();
    func_800F8D6C(0xAB);
L7ec:
    for (;;) {
        func_800F66D8(0x86);
        if (func_800F6434(0x202) == 0)
            func_800F654C(0x60);
        func_800F8674(0xAD);
        func_800F63BC();
        func_800F6364();
        func_800F5958(3);
        if (func_800F53D4() != 0)
            break;
    }
    for (;;) {
        func_800F66D8(0x86);
        func_800F8674(0xAD);
        func_800F63BC();
        func_800F6364();
        func_800F5958(7);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F6630(0xA9);
    func_80152908();
    func_800F6630(0xB0);
    func_800F8768(0x32DB);
    func_800F6630(0xB1);
    func_800F8768(0x32DC);
    func_800F6630(0xB2);
    func_800F8768(0x32DF);
    func_800F6630(0xB3);
    func_800F8768(0x32E0);
    func_800F6630(0xB2);
    func_800F824C(0xB1);
    func_800F8FB8(0xB7);
    func_800F8FB8(0xB8);
    func_800F6630(0xB0);
    if (func_800F6434(2) != 0)
        goto L984;
    func_800F5574(0x4D);
    if (func_800F53C0() == 0)
        goto L984;
    func_800F5574(0x54);
    if (func_800F53C0() != 0)
        goto L95c;
    func_800F654C(0x80);
    func_800F824C(0xB7);
    goto L984;
L95c:
    func_800F5574(0x61);
    if (func_800F53C0() != 0)
        goto L984;
    func_800F654C(0x40);
    func_800F824C(0xB7);
L984:
    func_800F6630(0xB1);
    if (func_800F6434(2) != 0)
        goto La0c;
    func_800F5574(0x4D);
    if (func_800F53C0() == 0)
        goto La0c;
    func_800F5574(0x54);
    if (func_800F53C0() != 0)
        goto L9e4;
    func_800F654C(0x80);
    func_800F824C(0xB8);
    goto La0c;
L9e4:
    func_800F5574(0x61);
    if (func_800F53C0() != 0)
        goto La0c;
    func_800F654C(0x40);
    func_800F824C(0xB8);
La0c:
    func_800F6630(0xB7);
    func_800F78C4(func_800F3C3C(0xB8));
    if (func_800F7918(2) != 0)
        goto La6c;
    if (func_800F5F20(2) != 0)
        goto La6c;
    func_800F8FB8(0xB0);
    func_800F8FB8(0xB1);
La6c:
    func_800F7270(0xAB);
    func_800F6A78(0xAD);
    func_800F8D6C(0xE5);
    func_800F71DC(0x9100);
    func_800F8D6C(0x80);
    func_800F654C(0xF);
    func_800F824C(0x82);
    func_800F654C(8);
    func_801526F8();
    func_800F971C();
    for (;;) {
        func_800F6B68(0x289C);
        func_800F82EC(0x84);
        func_800F63BC();
        func_800F6364();
        func_800F5958(8);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F6564(0x28A0);
    func_800F4248(0x7F);
    func_800F824C(0xDF);
    func_800F654C(3);
    func_800F824C(0xE1);
    func_8015240C();
    func_800F7270(0xE3);
La6c_loop:
    for (;;) {
        func_800F6C68();
        func_800F82EC(0x84);
        func_800F63BC();
        func_800F6364();
        func_800F5A90(0xB);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F5410();
    func_800F6630(0x84);
    func_800F4008(0xB);
    func_800F824C(0x84);
    func_800F6630(0x85);
    func_800F4008();
    func_800F824C(0x85);
    func_800F62BC(0xAB);
    func_800F6630(0xAB);
    func_800F5574(5);
    if (func_800F53D4() == 0)
        goto La6c;
    func_800F5410();
    func_800F6630(0x86);
    func_800F4008(0x80);
    func_800F824C(0x86);
    func_800F6630(0x87);
    func_800F4008();
    func_800F824C(0x87);
    func_800F62BC(0xA9);
    func_800F6630(0xA9);
    func_800F5574(5);
    if (func_800F53D4() == 0)
        goto L7a8;
    return;
}
