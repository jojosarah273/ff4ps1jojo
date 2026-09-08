#include "common.h"
void func_8016A208(void)
{
    /* shop rows: 0x66/0x53/0x55/0xA windows, 0x2F03 text, 8016A4E4
       header; loops L16A248 (5A90(0x20)), L16A290, L16A2A8
       (5DA0(8)/5B8C(0x202)). */
    func_800F71DC();
    func_800F8D6C(0x66);
    func_800F71DC();
    func_800F8D6C(0x53);
    func_800F654C(0x7E);
    func_800F824C(0x55);
    func_800F71DC();
L16a248:
    for (;;) {
        func_800F9330();
        func_8016A4E4();
        func_800F71DC(0x2F03);
        func_800F8D6C();
        func_800F971C();
        func_800F8D6C(0xA);
    L16a290:
        for (;;) {
            func_800F7594(0xA);
            func_800F654C(0x20);
            func_800F824C(8);
        L16a2a8:
            for (;;) {
                func_800F66D8();
                func_800F8A8C(0x53);
                func_800F9644(0x20);
                func_800F62F0(0x53);
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
            func_800F5574(0x20);
            if (func_800F53D4() == 0)
                continue;
            break;
        }
        func_800F95A0();
        func_800F6364();
        func_800F5958(0x20);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
