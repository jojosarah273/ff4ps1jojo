#include "common.h"
void func_80100D50(void)
{
    func_800F8FB8(0xCD);
    func_800F6630(0xAB);
    if (func_800F6434(0x202) != 0)
        goto Ld80;
    func_800F8FB8(0x7B);
Ld80:
    func_800F6630(0xAC);
    func_800F9690();
    func_800F6630(0x7B);
    if (func_800F4120(2) != 0)
        goto Lde0;
    func_800F8FB8(0xD5);
    return;
Lde0:
    func_800F654C(1);
    func_800F824C(0xD5);
    func_80102C30();
    func_800F6630(0xA1);
    func_800F4248(8);
    func_800F8188(0x1A02);
    func_800F6564(0x1706);
    if (func_800F6434(0x80) != 0)
        goto L1214;
    func_800F5574(0x20);
    if (func_800F53C0() != 0)
        goto L1214;
    func_800F6564(0x1707);
    if (func_800F6434(0x80) != 0)
        goto L1214;
    func_800F5574(0x20);
    if (func_800F53C0() != 0)
        goto L1214;
    func_800F6630(0xA2);
    if (func_800F6434(0x80) != 0)
        goto Lee0;
    func_800F6630(0xA2);
    func_800F4248(0x10);
    if (func_800F4120(0x202) != 0)
        goto Lee0;
    func_800F6630(0xA1);
    func_800F4248(8);
    if (func_800F4120(0x202) != 0)
        goto Lee0;
    func_800F654C(1);
    func_800F824C(0xD6);
    return;
Lee0:
    func_800F6630(0xD6);
    if (func_800F6434(0x202) == 0)
        return;
    func_800F8FB8(0xD6);
    func_800F6630(0xA1);
    func_800F4248(8);
    if (func_800F4120(2) != 0)
        goto Lf6c;
    func_800F654C(1);
    func_800F824C(0xB1);
    func_800F654C();
    func_801163E8();
    func_800F8FB8(0xB1);
    return;
Lf6c:
    func_800F6630(0xA2);
    if (func_800F6434(0x80) == 0)
        goto L1214;
    func_800F6564(0x1702);
    func_800F824C(0x3D);
    func_800F8FB8(0x3E);
    func_800F4F28(func_800F3C3C(0x3D));
    func_800F4F4C();
    func_800F7A40(func_800F3C3C(0x3E));
    func_800F6564(0x1701);
    if (func_800F6434(2) != 0)
        goto Lfec;
    func_800F62BC(0x3E);
    func_800F62BC(0x3E);
Lfec:
    func_800F7270(0x3D);
    func_800F6C68();
    func_800F824C(0x3D);
    func_800F6C68();
    func_800F824C(0x3E);
    func_800F7270(0x3D);
L1024:
    for (;;) {
        func_800F6C68();
        if (func_800F54D4(func_800F3B04(0x1706)) == 0)
            goto L107c;
        func_800F6C68();
        if (func_800F54D4(func_800F3B04(0x1707)) != 0)
            goto L1098;
    L107c:
        ;
    }
L1098:
    func_800F6C68();
    func_800F5574(0xFF);
    if (func_800F53D4() == 0)
        goto L10d8;
    func_800F6C68();
    func_8011AEAC();
    return;
L10d8:
    func_80101230();
    func_800F6C68();
    func_800F5574(0xFB);
    if (func_800F53C0() == 0)
        goto L1190;
    func_800F9330();
    func_800FD6B8();
    func_800FEC74();
    func_800F95A0();
    func_800F6C68();
    func_800F5480();
    func_800F8058(0xFB);
    func_800F8188(0x1700);
    func_800F6C68();
    func_800F8188(0x1706);
    func_800F6C68();
    func_800F8188(0x1707);
    func_800F62BC(0xCD);
    func_800F71DC();
    func_800F8D00(0x172C);
    return;
L1190:
    func_800F8188(0x1702);
    func_800F6C68();
    func_800F4248(0x3F);
    func_800F8188(0x1706);
    func_800F6C68();
    func_800F4248(0xC0);
    func_800F8188(0x1705);
    func_800F6C68();
    func_800F8188(0x1707);
    func_800FEC74();
    func_800F654C(3);
    func_800F8188(0x1700);
L1214:
    func_800F62BC();
    return;
}
