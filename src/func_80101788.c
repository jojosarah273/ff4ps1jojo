#include "common.h"
void func_80101788(void)
{
    func_800F6630(2);
    func_800F4248(0x80);
    if (func_800F4120(2) != 0)
        return;
    func_800F6630(0x54);
    if (func_800F6434(2) == 0)
        return;
    func_800F62BC(0x54);
    func_800F654C(0x3D);
    func_8011B6B4();
    func_800F5574(0);
    if (func_800F53D4() == 0) {
        /* settings menu (1704) */
        func_800F6564(0x1704);
        func_800F5574(4);
        if (func_800F53D4() != 0)
            goto menu1;
        func_800F5574(5);
        if (func_800F53D4() == 0)
            goto menu2;
    menu1:
        func_800F6564(0x1700);
        if (func_800F6434(0x202) == 0) {
            func_800F6564(0x1706);
            func_800F5574(0x69);
            if (func_800F53C0() == 0)
                goto menu2;
            func_800F5574(0x6C);
            if (func_800F53C0() != 0)
                goto menu2;
            func_800F6564(0x1707);
            func_800F5574(0xD3);
            if (func_800F53C0() == 0)
                goto menu2;
            func_800F5574(0xD6);
            goto gate14b;
        }
        func_800F6564(0x1700);
        func_800F5574(1);
        if (func_800F53D4() == 0)
            goto menu2;
        func_800F6564(0x1706);
        func_800F5574(0x70);
        if (func_800F53C0() == 0)
            goto menu2;
        func_800F5574(0x73);
        if (func_800F53C0() != 0)
            goto menu2;
        func_800F6564(0x1707);
        func_800F5574(0xF);
        if (func_800F53C0() == 0)
            goto menu2;
        func_800F5574(0x12);
    gate14b:
        func_800F5574(0);
        if (func_800F53C0() != 0)
            goto menu2;
        func_800F654C(1);
        func_800F824C(0xCE);
        return;
    }
    func_800F654C(0x30);
    func_8011B6B4();
    func_800F5574(0);
    if (func_800F53D4() != 0)
        goto menu2;
    goto menu1;
menu2:
    func_800F6564(0x1704);
    if (func_800F6434(2) != 0)
        goto screen1701;
    func_800F5574(1);
    if (func_800F53D4() != 0)
        goto submenu1;
    func_800F5574(2);
    if (func_800F53D4() != 0)
        goto submenu2;
    func_800F5574(3);
    if (func_800F53D4() == 0)
        goto item3;
    func_800F6630(0xA1);
    func_800F4248(1);
    if (func_800F4120(0x202) == 0)
        return;
    func_800F8FB8(0x79);
    for (;;) {
        func_80102ED8();
        func_800F5DA0(0xB6);
        func_800F62BC(0x79);
        func_800F6630(0x79);
        func_800F5574(4);
        if (func_800F53D4() == 0)
            break;
        {
            func_800F8F74(0x1704);
            func_800F8FB8(0xAC);
            func_800F8FB8(0x7B);
            func_800F654C(2);
            func_800F8188(0x1705);
            func_800F6564(0x1701);
            func_800F8188(0x171B);
            func_800F7210(0x1706);
            func_800F8D00(0x1719);
            func_800F8F74(0x1A02);
            goto screen1701_exit;
        }
    }
    goto screen1701_exit;
item3:
    func_800F5574(4);
    if (func_800F53D4() != 0) {
        func_80104354();
        return;
    }
    func_800F5574(5);
    if (func_800F53D4() != 0) {
        func_80102494();
        return;
    }
    return;
submenu1:
    func_800F654C(0x30);
    func_800F824C(0x79);
    func_800F8FB8(0x7A);
    for (;;) {
        func_80102E78();
        func_800F6630(0x79);
        func_800F5574(0x21);
        if (func_800F53C0() != 0) {
            func_800F5DA0(0xB9);
            func_800F6630(0x79);
            func_800F5410();
            func_800F4008(0x10);
            func_800F824C(0xAD);
            func_800F6630(0x79);
            func_8017559C();
            func_800F5DA0(0x79);
            continue;
        }
        func_800F6630(0xA2);
        func_800F4248(0x10);
        if (func_800F4120(0x202) != 0) {
            func_800F7210(0x1719);
            func_800F56AC(func_800F3B04(0x1706));
            if (func_800F53D4() == 0) {
                func_800F6564(0x1723);
                func_800F54D4(func_800F3B04(0x171F));
                if (func_800F53D4() != 0) {
                    func_800F7210(0x1721);
                    func_800F56AC(func_800F3B04(0x1706));
                    if (func_800F53D4() != 0)
                        break;
                }
                func_800F6564(0x1727);
                func_800F54D4(func_800F3B04(0x171F));
                if (func_800F53D4() != 0) {
                    func_800F7210(0x1725);
                    func_800F56AC(func_800F3B04(0x1706));
                    if (func_800F53D4() != 0)
                        break;
                }
                func_800F6630(0x79);
                func_800F7864();
                func_800F8188(0x6FD);
                func_800F5DA0(0x79);
                func_800F5DA0(0x79);
                if (func_800F5B8C(0x202) != 0)
                    continue;
                break;
            }
            break;
        }
    }
    return;
submenu2:
    func_800F8FB8(0x79);
    for (;;) {
        func_80102E78();
        func_800F5DA0(0xB5);
        func_800F62BC(0x79);
        func_800F6630(0x79);
        func_800F5574(0x10);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F6630(0xA1);
    func_800F4248(8);
    if (func_800F4120(0x202) != 0) {
        func_80102414();
        func_800F8F74(0x1704);
        func_800F8FB8(0xAC);
        func_800F8FB8(0x7B);
        func_800F654C(2);
        func_800F8188(0x1705);
        func_800F7210(0x1706);
        func_800F8D00(0x1713);
        return;
    }
    func_800F6564(0x1715);
    func_800F5574(2);
    if (func_800F53D4() != 0) {
screen1701:
        func_800F8F74(0x1704);
        func_800F8FB8(0xAC);
        func_800F8FB8(0x7B);
        func_800F654C(2);
        func_800F8188(0x1705);
        func_800F6564(0x1701);
        func_800F8188(0x171B);
        func_800F7210(0x1706);
        func_800F8D00(0x1719);
        func_800F8F74(0x1A02);
screen1701_exit:
        func_800F6630(0xAB);
        if (func_800F6434(2) == 0)
            return;
        func_800F6564(0x1701);
        func_800F5574(0);
        if (func_800F53D4() == 0)
            return;
        func_800F6564(0x170F);
        if (func_800F6434(2) != 0)
            return;
        func_800F7210(0x1706);
        func_800F56AC(func_800F3B04(0x1710));
        if (func_800F53D4() == 0)
            return;
        func_80102F38();
        return;
    }
    {
        func_800F6564(0x1701);
        func_800F5574(0);
        if (func_800F53D4() == 0)
            return;
        func_800F6564(0x1712);
        if (func_800F6434(2) != 0)
            return;
        func_800F7210(0x1706);
        func_800F56AC(func_800F3B04(0x1713));
        if (func_800F53D4() == 0)
            return;
        func_80102F70();
        return;
    }
}
