#include "common.h"
void func_801626B8(void)
{
    /* options counter: 0xA6/0x2006/0x3534/0xA9/0xCD windows, 0x3303/
       0x3302 texts, 80150C38 row; loop L162700 on 5574(9/5). */
    func_800F7270(0xA6);
    func_800F6B68(0x2006);
    func_800F8768(0x2006);
    func_800F7210(0x3534);
    func_800F8FB8(0xA9);
L162700:
    for (;;) {
        func_800F6B68(0x3303);
        func_800F5574(9);
        if (func_800F53D4() == 0)
            goto L162738;
        func_800F654C(0x1C);
        func_800F8768(0x3303);
        goto L162760;
    L162738:
        func_800F6B68(0x3302);
        func_800F8768(0x3302);
    L162760:
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
    func_800F654C(9);
    func_800F8188(0x34C8);
    func_800F654C(0x10);
    func_800F8188(0x34C7);
    return;
}
