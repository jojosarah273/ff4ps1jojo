#include "common.h"
void func_8015D4C8(void)
{
    /* options/volume screen: 0xA6/0xA9/0xAA/0xD2 windows, 0x2005/0x2006
       gates, 0x2B2A/0x2B2B/0x3535 texts, 0x2A04-0x2A06 cells, 80152BC4
       + 80061C8C + 80150C38 rows. */
    func_800F7270(0xA6);
    func_800F6B68(0x2005);
    func_800F4248(2);
    if (func_800F4120(0x202) != 0)
        return;
    func_800F6B68(0x2006);
    if (func_800F6434(0x80) != 0)
        return;
    func_800F6630(0xD2);
    func_800F5140();
    func_800F6B68(0x2B2A);
    func_800F824C(0xA9);
    func_800F6B68(0x2B2B);
    func_800F824C(0xAA);
    func_800F7210(0x3535);
    func_800F6630(0xA9);
    func_800F8768(0x2A04);
    func_800F6630(0xAA);
    func_800F8768(0x2A05);
    func_800F654C(0x40);
    func_800F8768(0x2A06);
    func_800F9644(0x20);
    func_800F7270(0xA6);
    func_800F6BE0(0x2009);
    func_80152BC4();
    func_800F8274(0xA9);
    func_800F6658(0xA9);
    if (func_800F64EC(0x202) != 0)
        goto L15D5D8;
    func_800F62F0(0xA9);
L15D5D8:
    func_800F971C();
    func_800F9660(0x20);
    func_800F6630(0xD2);
    func_800F5140();
    func_800F6630(0xA9);
    func_800F8768(0x34D4);
    func_800F6630(0xAA);
    func_800F8768(0x34D5);
    func_80061C8C();
    func_800F654C(0xF8);
    func_800F8188(0x33C2);
    func_800F654C(3);
    func_800F8188(0x33C3);
    func_800F654C(0x35);
    func_800F8188(0x34CA);
    func_800F654C(5);
    func_80150C38();
    func_80059AF4();
    func_800F654C(0x11);
    func_80150C38();
    func_800F654C(0xC);
    func_80150C38();
    func_800F654C(0x10);
    func_80150C38();
    return;
}
