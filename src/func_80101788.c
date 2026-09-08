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
    if (func_800F53D4() != 0) {
        func_800F654C(0x30);
        func_8011B6B4();
        func_800F5574(0);
        if (func_800F53D4() != 0)
            goto menu2;
        goto menu1;
    }
    /* settings menu (1704, items 4/5) */
menu1:
    func_800F6564(0x1704);
    func_800F5574(4);
    if (func_800F53D4() != 0)
        goto setting_b;
    func_800F5574(5);
    if (func_800F53D4() == 0)
        goto menu2;
setting_b:
    func_800F6564(0x1700);
    if (func_800F6434(0x202) != 0)
        goto setting_a;
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
    goto gate14;
setting_a:
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
gate14:
    func_800F5574(0);
    if (func_800F53C0() != 0)
        goto menu2;
    func_800F654C(1);
    func_800F824C(0xCE);
    return;
    /* main options master (1704, gate 2) */
menu2:
    func_800F6564(0x1704);
    if (func_800F6434(2) != 0)
        goto flow_screen;
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
    for (;;) {                              /* save prompt loop */
        func_80102ED8();
        func_800F5DA0(0xB6);
        func_800F62BC(0x79);
        func_800F6630(0x79);
        func_800F5574(4);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F8F74(0x1704);
    func_800F8FB8(0xAC);
    func_800F8FB8(0x7B);
    func_800F654C(2);
    func_800F8188(0x1705);
    func_800F6564(0x1701);
    func_800F8188(0x171B);
    func_800F7210(0x1706);
    func_800F8D00(0x1719);
    goto flow_screen;
item3:
    func_800F5574(4);
    if (func_800F53D4() != 0) {
        func_80104354();
        return;
    }
    func_800F5574(5);
    if (func_800F53D4() != 0)
        goto submenu1;
    /* item 6 -> equipment screen */
    func_800F5574(6);
    if (func_800F53D4() == 0)
        return;
    func_80102494();
    return;
submenu1:                                   /* "cast/settings" 0x21 menu */
    func_800F654C(0x30);
    func_800F824C(0x79);
    func_800F8FB8(0x7A);
    for (;;) {
        func_80102E78();
        func_800F6630(0x79);
        func_800F5574(0x21);
        if (func_800F53C0() != 0) {
            func_800F5DA0(0xB8);
            func_800F6630(0xB8);
            func_800F5410();
            func_800F4008(0x10);
            func_800F824C(0xAD);
            func_800F6630(0xB8);
            func_8017559C();
            func_800F5DA0(0x79);
            continue;
        }
        func_800F6630(0xA2);
        func_800F4248(0x10);
        if (func_800F4120(0x202) == 0)
            break;
        func_800F7210(0x1719);
        func_800F56AC(func_800F3B04(0x1706));
        if (func_800F53D4() != 0)
            break;
        func_800F6564(0x171F);
        func_800F54D4(func_800F3B04(0x1723));
        if (func_800F53D4() == 0)
            goto item1727;
        func_800F7210(0x171D);
        func_800F56AC(func_800F3B04(0x1706));
        if (func_800F53D4() != 0)
            break;
    item1727:
        func_800F6564(0x1727);
        func_800F54D4(func_800F3B04(0x1723));
        if (func_800F53D4() == 0)
            goto success21;
        func_800F7210(0x1725);
        func_800F56AC(func_800F3B04(0x1706));
        if (func_800F53D4() != 0)
            break;
    success21:
        func_800F6630(1);
        func_800F7864();
        func_800F8188(0x6FD);
        func_800F5DA0(0x79);
        func_800F5DA0(0x79);
        if (func_800F5B8C(0x202) != 0)
            continue;
        func_800F8F74(0x1704);
        func_800F8FB8(0xAC);
        func_800F8FB8(0x7B);
        func_800F654C(2);
        func_800F8188(0x1705);
        func_800F7210(0x1706);
        func_800F8D00(0x1721);
        func_800F6564(0x1701);
        func_800F8188(0x1723);
        goto memscreen;
    }
    func_801034E0();
    return;
submenu2:                                   /* save screen */
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
    if (func_800F4120(0x202) == 0)
        goto flow_screen;
    func_80102414();
    func_800F8F74(0x1704);
    func_800F8FB8(0xAC);
    func_800F8FB8(0x7B);
    func_800F654C(2);
    func_800F8188(0x1705);
    func_800F7210(0x1706);
    func_800F8D00(0x1713);
    func_800F6564(0x1715);
    func_800F5574(2);
    if (func_800F53D4() == 0)
        goto flow_screen;
    func_800F8F74(0x1715);
    func_800F8F74(0x1712);
    goto flow_screen;
    /* the item gated flow (1701 gate chain) */
flow_screen:
    func_800F8F74(0x1A02);
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
    /* 1701/1712 gate */
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
    /* 1701/171B/1718/1719 gate */
    func_800F6564(0x1701);
    func_800F54D4(func_800F3B04(0x171B));
    if (func_800F53D4() == 0)
        return;
    func_800F6564(0x1718);
    if (func_800F6434(2) != 0)
        return;
    func_800F7210(0x1706);
    func_800F56AC(func_800F3B04(0x1719));
    if (func_800F53D4() == 0)
        return;
    func_80103030();
    return;
    /* 171F/171C/171D gate */
    func_800F6564(0x1701);
    func_800F54D4(func_800F3B04(0x171F));
    if (func_800F53D4() == 0)
        return;
    func_800F6564(0x171C);
    if (func_800F6434(2) != 0)
        return;
    func_800F7210(0x1706);
    func_800F56AC(func_800F3B04(0x171D));
    if (func_800F53D4() == 0)
        return;
    func_801031F0();
    return;
    /* 1723/1720/1721 gate */
    func_800F6564(0x1701);
    func_800F54D4(func_800F3B04(0x1723));
    if (func_800F53D4() == 0)
        return;
    func_800F6564(0x1720);
    if (func_800F6434(2) != 0)
        return;
    func_800F7210(0x1706);
    func_800F56AC(func_800F3B04(0x1721));
    if (func_800F53D4() == 0)
        return;
    func_801033E0();
    return;
    /* 1727/1724/1725 gate + sound */
    func_800F6564(0x1701);
    func_800F54D4(func_800F3B04(0x1727));
    if (func_800F53D4() == 0)
        return;
    func_800F6564(0x1724);
    if (func_800F6434(2) != 0)
        return;
    func_800F7210(0x1706);
    func_800F56AC(func_800F3B04(0x1725));
    if (func_800F53D4() == 0)
        return;
    func_800F654C(0xE);
    func_800F8188(0x1E01);
    func_800F654C(1);
    func_800F8188(0x1E00);
    func_80169128();
    func_800F654C(0x54);
    func_8011AEAC();
    return;
    /* memory screens */
memscreen:
    func_800FD718();
    func_800F6240(0x1A02);
    func_800F6630(0xA1);
    func_800F4248(1);
    if (func_800F4120(0x202) == 0)
        return;
    func_800FD6B8();
    func_800F654C(2);
    func_800F8188(0x170F);
    func_800F654C(0x70);
    func_800F8188(0x1710);
    func_800F8188(0x1711);
    func_800F654C(1);
    func_800F8188(0x1705);
    func_800F654C(2);
    func_800F824C(0x2C);
    func_8010D9D4();
    func_800F7864();
    if (func_800F7728(0x101) != 0)
        goto mem2;
    func_800F654C(3);
    func_800F8188(0x1705);
    func_800F6630(0x2C);
    func_800F61E8();
    func_800F824C(0x2C);
mem2:
    func_800F654C(2);
    func_800F824C(0x2E);
    func_8010D9D4();
    func_800F7864();
    if (func_800F7728(0x101) != 0)
        goto mem_loop;
    func_800F6630(0x2E);
    func_800F61E8();
    func_800F824C(0x2E);
    func_800F8F74(0x1704);
mem_loop:
    for (;;) {
        func_800FE778();
        func_8010D9D4();
        func_800F5574(0x10);
        if (func_800F53C0() != 0)
            break;
        func_800F6630(0x2E);
        func_800F61E8();
        func_800F824C(0x2E);
    }
    func_800F6564(0x1710);
    func_800F5410();
    func_800F3F38(func_800F3C3C(0x2C));
    func_800F8188(0x1710);
    if (func_800F53D4() != 0)
        return;
    func_800F5574(0xF0);
    if (func_800F53D4() != 0)
        return;
    func_800F6564(0x1711);
    func_800F5410();
    func_800F3F38(func_800F3C3C(0x2E));
    func_800F8188(0x1711);
    if (func_800F53D4() != 0)
        return;
    func_800F5574(0xF0);
    if (func_800F53D4() != 0)
        return;
    func_800F654C(1);
    func_800F8188(0x1704);
    func_80171608();
    func_800F8F74(0x1704);
    func_80171194();
    func_800FE778();
    func_800FE870();
    func_800F8F74(0x1704);
    func_800F8F74(0x170F);
    func_800FF024();
    func_800FE778();
    func_800F8FB8(0xAC);
    func_800F8FB8(0x7B);
    func_800F6240(0x1A02);
    func_800FD718();
    return;
}
