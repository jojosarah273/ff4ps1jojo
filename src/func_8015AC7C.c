#include "common.h"
void func_8015AC7C(void)
{
    func_800F6564(0xA8);
    if (func_800F6434(0x202) != 0)
        return;
    func_800F71DC(4);
    func_800F8D6C(0xA9);
Lacac:
    for (;;) {
        func_800F7270(0xA9);
        func_800F6B68(0x3540);
        if (func_800F6434(0x202) != 0)
            goto Lad1c;
        func_800F6630(0xA9);
        func_80152CDC();
        func_800F7270(0xA6);
        func_800F6B68(0x2003);
        func_800F4248(0xC0);
        if (func_800F4120(0x202) != 0)
            goto Lad1c;
        func_800F6B68(0x2005);
        if (func_800F6434(0x8080) != 0)
            goto Lad6c;
    Lad1c:
        func_800F5DA0(0xA9);
        func_800F6630(0xA9);
        if (func_800F6434(0x8080) != 0)
            continue;
        func_800F6564(0x38E5);
        func_800F4248(2);
        if (func_800F4120(2) == 0)
            goto Lafe0;
        func_800F654C(8);
        func_800F654C(0x80);
        goto Lafe8;
    Lad6c:
        func_800F6564(0x29CD);
        if (func_800F6434(0x202) != 0)
            goto Lae58;
        func_800F654C(0x30);
        func_800F824C(0xA8);
        func_800F971C();
        for (;;) {
            func_800F6C68();
            func_800F5574(0xFF);
            if (func_800F53D4() != 0)
                return;
            if (func_800F54D4(func_800F3B04(0x1800)) == 0)
                goto Lae40;
            func_800F6C68();
            if (func_800F54D4(func_800F3B04(0x1801)) == 0)
                goto Lae40;
            func_800F6630(0xA8);
            func_800F4248(0xEF);
            goto Lafe8;
        Lae40:
            func_800F6364();
            func_800F6364();
        }
    Lae58:
        func_800F6564(0x388B);
        if (func_800F6434(0x202) != 0)
            return;
        func_800F6564(0x38D3);
        if (func_800F6434(0x202) != 0)
            goto Laea0;
        func_800F6564(0x352D);
        if (func_800F6434(2) != 0)
            return;
    Laea0:
        func_800F6564(0x38D6);
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            return;
        func_800F6564(0x38D6);
        if (func_800F6434(2) != 0)
            goto Laf00;
        func_800F6564(0x38F3);
        if (func_800F6434(0x202) != 0)
            goto Laf00;
        func_800F5D24(0x38D6);
        return;
    Laf00:
        func_800F6564(0x38E5);
        func_800F4248(1);
        if (func_800F4120(0x202) != 0)
            goto Lb020;
        func_800F971C();
        func_800F8D6C(0xA9);
        for (;;) {
            func_800F7270(0xA9);
            func_800F6B68(0x3540);
            if (func_800F6434(0x202) != 0)
                goto Laff8;
            func_800F6630(0xA9);
            func_80152CDC();
            func_800F7270(0xA6);
            func_800F6B68(0x2003);
            func_800F4248(0xC0);
            if (func_800F4120(0x202) != 0)
                goto Laff8;
            func_800F6B68(0x2004);
            func_800F4248(0x30);
            if (func_800F4120(0x202) != 0)
                goto Laff8;
            func_800F6B68(0x2005);
            func_800F4248(0xC2);
            if (func_800F4120(0x202) != 0)
                goto Laff8;
            break;
        }
    Lafe0:
        func_800F654C();
    Lafe8:
        func_800F824C(0xA8);
        return;
    Laff8:
        func_800F62BC(0xA9);
        func_800F6630(0xA9);
        func_800F5574(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
Lb020:
    func_800F8F74(0x352D);
    func_80153264();
    func_800F654C(0xFF);
    func_800F8188(0x33C4);
    func_800F654C(0x22);
    func_800F8188(0x34CA);
    func_800F654C(5);
    func_80150C38();
    func_8005A234();
    return;
}
