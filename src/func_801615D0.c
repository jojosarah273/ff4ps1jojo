#include "common.h"
void func_801615D0(void)
{
    /* options screen: 0x16/0x34C8 headers, 0x33C6/0x33C7/0x33C4 row
       texts, 0xCE/0xD3 windows; 8015329C alternative, 801526F8/8015240C
       detail, 801531CC stat row, 80061C1C/80061C8C commits. */
    func_800F654C(0x16);
    func_800F8188(0x34C8);
    func_800F654C(0x10);
    func_800F8188(0x34C7);
    func_800F654C(0xF8);
    func_800F8188(0x33C6);
    func_800F654C(4);
    func_800F8188(0x33C7);
    func_800F6630(0xCE);
    if (func_800F6434(0x80) != 0)
        goto L161660;
L161630:
    func_800F654C(0xD3);
    func_800F8188(0x33C4);
    func_8015329C();
    func_800F654C();
    func_800F8188(0x34CA);
    return;
L161660:
    func_800F6564(0x3881);
    if (func_800F6434(0x202) != 0)
        goto L161630;
    func_800F6564(0x26D2);
    func_800F8188(0x3580);
    func_800F8D6C(0xE5);
    func_800F71DC();
    func_800F8D6C(0x80);
    func_800F654C(0xF);
    func_800F824C(0x82);
    func_800F654C(8);
    func_801526F8();
    func_800F6564(0x289D);
    func_800F824C(0xDF);
    func_800F6564(0x2682);
    func_800F824C(0xE1);
    func_8015240C();
    func_800F7270(0xE3);
    func_800F8D00(0x289C);
    func_801531CC();
    func_800F5410();
    func_800F3F38(func_800F3B04(0x289C));
    func_800F824C(0xE3);
    func_800F654C();
    func_800F3F38(func_800F3B04(0x289D));
    func_800F824C(0xE4);
    func_800F7270(0xE3);
    func_800F5958(0x270F);
    if (func_800F53C0() == 0)
        goto L161788;
    func_800F71DC(0x270F);
    func_800F8D6C(0xE3);
L161788:
    func_800F6630(0xCE);
    func_800F63F8();
    func_80061C1C();
    func_800F6630(0xE3);
    func_800F8768(0x34D4);
    func_800F6630(0xE4);
    func_800F8768(0x34D5);
    func_80061C8C();
    return;
}
