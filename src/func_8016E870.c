#include "common.h"
void func_8016E870(void)
{
    /* options: 0x2000/0x2003/0x2004 gates, 0x357C text, 0xA6 window;
       gates 53D4/4120 pick the 0x2000 cell writes. */
    func_800F7500(5);
    func_800F971C();
L16e8a4:
    for (;;) {
        func_800F6B68(0x2000);
        func_800F4248();
        func_800F5574(0xFF);
        if (func_800F53D4() == 0)
            goto L16E924;
        func_800F6B68(0x2003);
        func_800F4248(0xC0);
        if (func_800F4120(0x202) != 0)
            goto L16E90C;
        func_800F6B68(0x2004);
        func_800F4248(0x3C);
        if (func_800F4120(2) != 0)
            break;
    }
    func_800F654C(0xFF);
    func_800F8188(0x357C);
    return;
L16E90C:
    func_800F654C(0xFF);
    func_800F8188(0x357C);
    return;
L16E924:
    func_800F9644(0x20);
    func_800F5410();
    func_800F4064(0x80);
    func_800F971C();
    func_800F9660(0x20);
    func_800F654C(0xFF);
    func_800F8188(0x357C);
    return;
}
