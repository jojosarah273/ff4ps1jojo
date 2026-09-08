#include "common.h"
void func_801627F8(void)
{
    /* options stat row: 0xA6/0x2006/0x3534/0xA9 windows, 0x3303/
       0x3302 texts, 80150C38 row; loop L162830 on 5574(5). */
    func_800F7270(0xA6);
    func_800F6B68(0x2006);
    func_800F4248(0x7F);
    func_800F8768(0x2006);
    func_800F7210(0x3534);
    func_800F8FB8(0xA9);
L162830:
    for (;;) {
        func_800F6B68(0x3303);
        func_800F5574(0x1C);
        if (func_800F53D4() == 0)
            goto L162868;
        func_800F654C(9);
        func_800F8768(0x3303);
        goto L162880;
    L162868:
        func_800F6B68(0x3302);
        func_800F4248(0x7F);
        func_800F8768(0x3302);
    L162880:
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F62BC(0xA9);
        func_800F6630(0xA9);
        func_800F5574(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F6630(0xCD);
    func_800F824C();
    func_800F654C(9);
    func_80150C38();
    func_800F654C(0x1C);
    func_800F8188(0x34C8);
    func_800F654C(0x10);
    func_800F8188(0x34C7);
    return;
}
