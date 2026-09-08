#include "common.h"
void func_8015D6C0(void)
{
    /* options detail: 0xA6/0xA9/0xAA/0xD2 windows, 0x2005/0x2006/0x2004
       gates, 0x29EB/0x29E4 texts, 0x29C4/0x29F4 cells + 0x3535 title;
       confirm path draws via 3C3C(0xA9). */
    func_800F7270(0xA6);
    func_800F6B68(0x2005);
    func_800F4248(2);
    if (func_800F4120(0x202) != 0)
        return;
    func_800F6B68(0x2006);
    if (func_800F6434(0x80) != 0)
        return;
    func_800F6B68(0x2004);
    func_800F4248(3);
    func_800F61E8();
    func_800F824C(0xA9);
    func_800F5574(4);
    if (func_800F53D4() == 0)
        goto L15D7C8;
    func_800F6B68(0x2004);
    func_800F4248(0xFC);
    func_800F8768(0x2004);
    func_800F6B68(0x2003);
    func_800F8768();
    func_800F6630(0xD2);
    func_800F5140();
    func_800F6564(0x29EB);
    func_800F4248(0xF7);
    func_800F8188(0x29EB);
    return;
L15D7C8:
    func_800F6B68(0x2004);
    func_800F78C4(func_800F3C3C(0xA9));
    func_800F8768(0x2004);
    func_800F6630(0xD2);
    func_800F5140();
    func_800F6B68(0x2A44);
    func_800F824C(0xA9);
    func_800F6B68(0x2A45);
    func_800F824C(0xAA);
    func_800F7210(0x3535);
    func_800F6630(0xA9);
    func_800F8768(0x2A04);
    func_800F6630(0xAA);
    func_800F8768(0x2A05);
    func_800F654C(0x40);
    func_800F8768(0x2A06);
    return;
}
