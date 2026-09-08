#include "common.h"
void func_80157948(void)
{
    /* options value screen: 0xCD window, 0x3540/0xDF/0xE1/0xE3/0x2003
       gates, 8015240C/8015A374/80153374 rows; loop L157978 on
       5574(5)/53D4. */
    func_800F971C();
    func_800F8D6C(0xCD);
L157978:
    for (;;) {
        func_800F7270(0xCD);
        func_800F6B68(0x3540);
        if (func_800F6434(0x202) != 0)
            goto L157A98;
        func_800F7270(0xCD);
        func_800F8D6C(0xDF);
        func_800F71DC(0x80);
        func_800F8D6C(0xE1);
        func_8015240C();
        func_800F7270(0xE3);
        func_800F6B68(0x2003);
        func_800F4248(1);
        if (func_800F4120(2) != 0)
            goto L157A98;
        func_800F654C(6);
        func_800F824C(0xD6);
        func_800F6630(0xCD);
        func_8015A374();
        func_800F654C(9);
        func_80153374();
        func_800F654C(0x40);
        func_800F8768(0x2A06);
        func_800F6630(0xCD);
        func_800F5140();
        func_800F6B68(0x29EB);
        func_800F8768();
        func_800F6630(0xD4);
        func_800F8768(0x2B2A);
        func_800F6630(0xD5);
        func_800F8768(0x2B2B);
    L157A98:
        func_800F62BC(0xCD);
        func_800F6630(0xCD);
        func_800F5574(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
