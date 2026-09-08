#include "common.h"
void func_80161A00(void)
{
    /* options/config screen: 0xCD window + 3539 text gate (80152CDC),
       0xA6/0x2003 cursor row; branch L161AC8 runs the 26D0-26D3/
       2050-2053 stat cell block (8015A374/80153374) and commits
       6240(0x390A); other paths route to 80161C48. */
    func_800F71DC(1);
    func_800F6630(0xCD);
    if (func_800F54D4(func_800F3B04(0x3539)) != 0)
        goto L161A40;
    func_800F5E48();
L161A40:
    func_800F6B68(0x3539);
    func_80152CDC();
    func_800F7270(0xA6);
    func_800F6B68(0x2003);
    func_800F4248(0xC0);
    if (func_800F4120(2) == 0)
        goto L161AB8;
    func_800F6B68(0x2004);
    func_800F4248(0x3C);
    if (func_800F4120(2) == 0)
        goto L161AB8;
    func_800F6B68(0x2005);
    func_800F4248(0x40);
    if (func_800F4120(2) != 0)
        goto L161AC8;
L161AB8:
    func_80161C48();
    return;
L161AC8:
    func_800F6B68(0x2005);
    func_800F8768();
    func_800F6564(0x26D0);
    func_800F8768(0x2050);
    func_800F6564(0x26D3);
    func_800F8768(0x2053);
    func_800F654C(0x20);
    func_800F8768(0x2051);
    func_800F7210(0x3530);
    func_800F8D6C(0x92);
    func_800F654C(0x20);
    func_800F8188(0x397B);
    func_800F654C(0xC);
    func_800F824C(0xD6);
    func_800F6630(0xCD);
    func_8015A374();
    func_800F654C(3);
    func_80153374();
    func_800F654C(8);
    func_800F8768(0x2A06);
    func_800F5410();
    func_800F6630(0x92);
    func_800F4008(3);
    func_800F824C(0x92);
    func_800F6630(0x93);
    func_800F4008();
    func_800F824C(0x93);
    func_800F7270(0x92);
    func_800F6630(0xD4);
    func_800F8768(0x2A04);
    func_800F6630(0xD5);
    func_800F8768(0x2A05);
    func_800F654C(8);
    func_800F8768(0x2A06);
    func_800F7270(0xA6);
    func_800F6B68(0x2005);
    func_800F8768();
    func_800F654C(0x20);
    func_800F8768(0x2051);
    func_800F6240(0x390A);
    return;
}
