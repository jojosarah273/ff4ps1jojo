#include "common.h"
void func_80110CFC(void)
{
    /* battle spell-cast row: 0x1FC1/0x6C8 texts, 0x26/0xB9/0x7A/0x22/
       0x24 windows, 80110F2C/80110FA4 sub-renders, 80173780 cast body,
       80110BC8 target pick; loops L110D24/L110D5C/L110E8C. */
    func_80110F2C();
    func_800F654C(1);
    func_800F81E8(0x6C8);
    func_800F71DC();
L110d24:
    for (;;) {
        func_800F6B68(0xEBB);
        func_800F8768(0xA6D);
        func_800F6364();
        func_800F5958(0x10);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F8FB8(0x26);
L110d5c:
    for (;;) {
        func_80110FA4();
        func_800F654C(0x20);
        func_800F824C(0xB9);
        func_80173780();
        func_800F6630(0x7A);
        func_800F7864();
        if (func_800F7728(0x101) != 0)
            goto L110DA4;
        func_800F62BC(0x26);
    L110DA4:
        func_800F6630(0x26);
        if (func_800F6434(0x80) != 0)
            goto L110E54;
        func_800F5140();
        func_800F824C(0x22);
        func_800F6630(0x24);
        func_800F5410();
        func_800F3F38(func_800F3C3C(0x22));
        func_800F824C(0x24);
        /* v0 gate -> L110E34 */
    L110E34:
        if (func_800F53C0() != 0)
            goto L110E54;
        func_80110BC8();
        goto L110EBC;
    L110E54:
        func_800F4248(0xF1);
        func_800F5574(0x80);
        if (func_800F53D4() == 0)
            goto L110E84;
        func_800F654C(1);
        func_800F824C(0xC4);
    L110E84:
        func_800F71DC();
    L110e8c:
        for (;;) {
            func_800F6B68(0xA6D);
            func_800F8768(0xEBB);
            func_800F6364();
            func_800F5958(0x10);
            if (func_800F53D4() != 0)
                break;
        }
    L110EBC:
        func_800F6630(0x26);
        func_800F5574(0xFF);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F8FB8(0xC8);
    func_800F654C(1);
    func_800F8188(0x1724);
    func_800F8F74(0x1727);
    func_800F8FB8(0xB9);
    func_800F71DC();
    func_800F8D00(0x1725);
    func_8011EA5C();
    return;
}
