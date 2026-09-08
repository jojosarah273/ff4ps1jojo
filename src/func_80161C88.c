#include "common.h"
void func_80161C88(void)
{
    func_800F654C(0xFF);
    func_800F8188(0x357B);
    func_800F7270(0xA6);
    func_800F8D6C(0x8C);
    func_800F6B68(0x2005);
    func_800F4248(0xFB);
    func_800F8768(0x2005);
    func_800F6564(0x2685);
    func_800F4248(0xFB);
    func_800F8188(0x2685);
    func_800F71DC(1);
    func_800F6630(0xCD);
    if (func_800F54D4(func_800F3B04(0x3539)) != 0)
        goto Ld18;
    func_800F5E48();
Ld18:
    func_800F8FB8(0xD6);
    func_800F6B68(0x3539);
    func_8015A374();
    func_800F7270(0xA6);
    func_800F6B68(0x2005);
    func_800F4248(0xFB);
    func_800F8768(0x2005);
    func_800F6B68(0x2003);
    func_800F4248(0xC0);
    if (func_800F4120(0x202) != 0)
        goto Ld90;
    func_800F6B68(0x2004);
    func_800F4248(0x3C);
    if (func_800F4120(2) != 0)
        goto Le68;
Ld90:
    func_800F654C(0x21);
    func_800F8768(0x2051);
    func_800F9644(0x20);
    func_80152A20();
    func_800F7894();
    func_800F8274(0xA9);
    func_800F9660(0x20);
    func_800F971C();
    for (;;) {
        func_800F6B68(0x3539);
        if (func_800F54D4(func_800F3C3C(0xA9)) != 0)
            goto Le38;
        func_800F6364();
    }
Le38:
    func_800F8768();
    func_80161C48();
    return;
Le68:
    func_800F654C(3);
    func_80153374();
    func_800F90EC(0x2A06);
    func_800F7270(0xA6);
    func_800F8D6C(0x92);
    func_800F6B68(0x2005);
    func_800F4248(0x40);
    if (func_800F4120(0x202) != 0)
        goto Ld90;
    func_800F7270(0x8C);
    func_800F6B68(0x2003);
    func_800F4248(0xC0);
    if (func_800F4120(0x202) != 0)
        goto Ld90;
    func_800F6B68(0x2004);
    func_800F4248(0x3C);
    if (func_800F4120(0x202) != 0)
        goto Ld90;
    func_800F6B68(0x2000);
    func_800F4248(0x1F);
    func_800F5574(0x13);
    if (func_800F53D4() != 0)
        goto Lf38;
    func_800F5574(0x15);
    if (func_800F53D4() == 0)
        goto Lf48;
Lf38:
    func_800F654C(0x5E);
    goto Lfb8;
Lf48:
    func_80153218();
    func_800F5574(0xFF);
    if (func_800F53C0() == 0)
        goto Lf88;
    func_800F654C(0x11);
    func_800F8188(0x34CA);
    func_8015329C();
    return;
Lf88:
    func_800F5574(0x40);
    if (func_800F53C0() == 0)
        goto Lfb0;
    func_800F654C(0x41);
    goto Lfb8;
Lfb0:
    func_800F654C(0x40);
Lfb8:
    func_800F824C(0x94);
    func_800F8D6C(0xE5);
    func_800F71DC(0x97A0);
    func_800F8D6C(0x80);
    func_800F654C(0xF);
    func_800F824C(0x82);
    func_800F654C(6);
    func_801526F8();
    func_800F6564(0x28A0);
    func_800F4248(0x7F);
    func_800F824C(0xDF);
    func_800F654C(3);
    func_800F824C(0xE1);
    func_8015240C();
    func_800F7270(0xE3);
    func_800F971C();
    for (;;) {
        func_800F6C68();
        func_800F8960(0x28A2);
        func_800F63BC();
        func_800F6364();
        func_800F5A90(3);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F6564(0x268B);
    func_800F824C(0xA9);
    func_800F6564(0x268C);
    if (func_800F6434(2) == 0) {
        func_800F654C(0xFF);
        func_800F824C(0xA9);
    }
    func_800F6564(0x28A1);
    func_800F4248(0x7F);
    func_800F824C(0xAB);
    if (func_800F54D4(func_800F3C3C(0xA9)) != 0)
        goto L128;
    if (func_800F53C0() != 0)
        return;
L128:
    func_800F7270(0x92);
    func_800F5480();
    func_800F6B68(0x200B);
    func_800F7F48(func_800F3C3C(0xAB));
    func_800F824C(0xA9);
    func_800F6B68(0x200C);
    func_800F8058();
    func_800F824C(0xAA);
    if (func_800F53C0() == 0)
        return;
    func_800F6630(0xA9);
    func_800F8768(0x200B);
    func_800F6630(0xAA);
    func_800F8768(0x200C);
    func_800F6630(0x94);
    func_800F8188(0x26D2);
    func_800F6240(0x355D);
    func_80062B08();
    return;
}
