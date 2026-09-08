#include "common.h"
void func_80101350(void)
{
    func_800F8FB8(0xCD);
    func_800F6630(0xAB);
    if (func_800F6434(0x202) != 0)
        goto L1380;
    func_800F8FB8(0x7B);
L1380:
    func_800F6630(0xAC);
    func_800F9690();
    func_800F6630(0x7B);
    if (func_800F4120(2) != 0)
        goto L13e0;
    func_800F8FB8(0xD5);
    return;
L13e0:
    func_800F654C(1);
    func_800F824C(0xD5);
    func_80102C30();
    func_800F8F74(0x1A02);
    func_800F6564(0x1704);
    if (func_800F6434(0x202) != 0)
        goto L1420;
    func_800F6240(0x1A02);
L1420:
    func_800F6564(0x1704);
    func_800F5574(4);
    if (func_800F53D4() == 0)
        goto L14c0;
    func_800F6564(0x6B7);
    func_800F5574(0x10);
    if (func_800F53D4() == 0)
        goto L14c0;
    func_800F6564(0x1700);
    func_800F5574();
    if (func_800F53D4() == 0)
        goto L1490;
    func_800F654C(0x2D);
    goto L1610;
L1490:
    func_800F6564(0x1700);
    func_800F5574(1);
    if (func_800F53D4() == 0)
        goto L14c0;
    func_800F654C(0x2F);
    goto L1610;
L14c0:
    func_800F6630(0xA2);
    if (func_800F6434(0x80) != 0)
        goto L14f0;
    func_800F654C(1);
    func_800F824C(0xD6);
    return;
L14f0:
    func_800F6564(0x1704);
    if (func_800F6434(2) == 0)
        return;
    func_800F6630(0xD6);
    if (func_800F6434(0x202) == 0)
        return;
    func_800F8FB8(0xD6);
    func_800F6564(0x1700);
    func_800F5140();
    func_800F9690();
    func_800F6C68();
    func_800F824C(0x3D);
    func_800F6C68();
    func_800F824C(0x3E);
    func_800F7270(0x3D);
L1570:
    for (;;) {
        func_800F6C68();
        if (func_800F54D4(func_800F3B04(0x1706)) == 0)
            goto L15c8;
        func_800F6C68();
        if (func_800F54D4(func_800F3B04(0x1707)) != 0)
            goto L15e4;
    L15c8:
        ;
    }
L15e4:
    func_800F6C68();
    func_800F5574(0xFF);
    if (func_800F53D4() == 0)
        goto L1620;
    func_800F6C68();
L1610:
    func_8011AEAC();
    return;
L1620:
    func_800F9330();
    func_800F7210(0x172C);
    func_800F6564(0x1700);
    if (func_800F6434(2) == 0)
        func_800F654C(1);
    func_800F8188(0x1701);
    func_800F6564(0x1700);
    func_800F5410();
    func_800F4008(0xFB);
    func_800F8768(0x172E);
    func_800F65C8(0x1706);
    func_800F8768(0x172F);
    func_800F6564(0x1707);
    func_800F8768(0x1730);
    func_800F5958(0xC0);
    if (func_800F53C0() == 0)
        goto L16cc;
    func_800F71DC();
L16cc:
    func_800F8D00(0x172C);
    func_800F95A0();
    func_800F6C68();
    func_800F8188(0x1702);
    func_800F6C68();
    func_800F4248(0x3F);
    func_800F8188(0x1706);
    func_800F6C68();
    func_800F8188(0x1707);
    func_800F6C68();
    func_800F4248(0xC0);
    func_800F8188(0x1705);
    func_800FD6B8();
    func_800FEC74();
    func_800F62BC(0xCD);
    func_800F654C(3);
    func_800F8188(0x1700);
    return;
}
