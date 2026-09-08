#include "common.h"
void func_80169F58(void)
{
    /* shop rows: 8016C4A0 prep, 0xA/0x8 windows, 0x2703 text; loops
       L169FB0 (7594/8 cells) and L169FC8 (67FC/5B8C(0x202)). */
    func_8016C4A0();
    func_800F71DC();
    func_800F8D6C();
    func_800F654C(0x15);
    func_800F824C(2);
    func_800F971C();
    func_800F8D6C(0xA);
L169fb0:
    for (;;) {
        func_800F7594(0xA);
        func_800F654C(0x20);
        func_800F824C(8);
    L169fc8:
        for (;;) {
            func_800F67FC();
            func_800F8768(0x2703);
            func_800F9644(0x20);
            func_800F5410();
            func_800F4064(0x20);
            func_800F971C();
            func_800F9660(0x20);
            func_800F6364();
            func_800F5DA0(8);
            if (func_800F5B8C(0x202) != 0)
                continue;
            break;
        }
        func_800F62BC(0xA);
        func_800F6630(0xA);
        func_800F5574();
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
