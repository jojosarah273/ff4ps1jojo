#include "common.h"
void func_801669BC(void)
{
    /* battle confirm flow: 0x42/0x38BE/0x38BD texts, 8016694C/80166B80/
       8016762C/80140944 preps, L166A44 loop with 70174/7534 gates and
       80140310/8014D528 commits. */
    func_800F654C(0x42);
    func_800F8188(0x38BE);
    func_800F6240(0x38BD);
    func_8016694C();
    func_80166B80();
    func_800F71DC(0x40);
    func_8016762C();
    func_8016694C();
    func_80140944();
    func_800F71DC(0x20);
    func_8016762C();
    func_80166B80();
    func_800F71DC();
    func_800F8D00();
    func_800F8D00();
    func_800F8188();
L166a44:
    for (;;) {
        func_80070174();
        func_800F6564();
        func_800F4248(7);
        func_800F6C68();
        func_800F8E50();
        func_800F6564();
        func_800F4248(0xF);
        if (func_800F4120(0x202) != 0)
            goto L166AD8;
        func_800F7534();
        func_800F5EA0();
        func_800F8E50();
    L166AD8:
        func_800F6564();
        func_800F5574(0x8C);
        if (func_800F53D4() != 0)
            goto L166B28;
        func_800F5574(0x10);
        if (func_800F53D4() != 0)
            goto L166B28;
        func_800F5574(0x20);
        if (func_800F53D4() == 0)
            goto L166B30;
    L166B28:
        func_80166B80();
    L166B30:
        func_800F6240();
        func_80140310();
        func_800F7534();
        func_800F5A90();
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F654C(0x20);
    func_8014D528();
    return;
}
