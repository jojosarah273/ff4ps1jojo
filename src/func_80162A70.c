#include "common.h"
void func_80162A70(void)
{
    /* options music: 0xCD/0xCE windows, 0x33C4/0x34CA/0x352E/0x2005/
       0x2051/0x2A2A texts, 8015329C/80153374 rows; 6434(0x80) gate. */
    func_800F6630(0xCD);
    if (func_800F6434(0x80) != 0)
        goto L162AD8;
    func_800F6630(0xCE);
    if (func_800F6434(0x80) != 0)
        goto L162AD8;
    func_800F654C(0xD3);
    func_800F8188(0x33C4);
    func_800F654C();
    func_800F8188(0x34CA);
    func_8015329C();
    return;
L162AD8:
    func_800F6240(0x390A);
    func_800F71DC(4);
    func_800F8D6C(0xD4);
    func_800F654C(3);
    func_80153374();
    func_800F654C(8);
    func_800F8768(0x2A06);
    func_800F7270(0xA6);
    func_800F6B68(0x2005);
    func_800F8768();
    func_800F6630(0xCD);
    if (func_800F6434() != 0)
        goto L162B68;
    func_800F654C(0xDE);
    goto L162B70;
L162B68:
    func_800F654C(0x1E);
L162B70:
    func_800F8768(0x2051);
    func_800F6630(0xCD);
    func_800F5140();
    func_800F6B68(0x29EA);
    func_800F8188(0x357F);
    func_800F654C(0x40);
    func_800F8768(0x29EA);
    return;
}
