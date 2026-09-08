#include "common.h"
void func_801449D0(void)
{
    /* battle magic-confirm: 0x1813/0x1901 texts, 0x340/0x341 state
       cells with 6434(2) gates; loops L144A50 (5958(0x78)) and
       L144B90 (5A90(0x78)). */
    func_800F6564(0x1813);
    func_800F6B68(0x1901);
    func_800F4248(3);
    func_800F824C(1);
    func_800F971C();
L144a50:
    for (;;) {
        func_800F6564(0x6CC0);
        if (func_800F6434(2) != 0)
            goto L144AB0;
        func_800F6564();
        if (func_800F6434(2) != 0)
            goto L144AC8;
    L144A80:
        func_800F6B68(0x340);
        func_800F8960();
        goto L144AD8;
    L144AB0:
        func_800F6564();
        if (func_800F6434(2) != 0)
            goto L144A80;
    L144AC8:
        func_800F6B68(0x340);
        func_800F8960(0x340);
    L144AD8:
        func_800F6B68();
        func_800F5410();
        func_800F3F38(func_800F3C3C(1));
        func_800F3F38(func_800F3B04());
        func_800F8960(0x341);
        func_800F6364();
        func_800F6364();
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F5958(0x78);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F971C();
L144b90:
    for (;;) {
        func_800F6D70();
        func_800F7864();
        func_800F76E8();
        func_800F7CC8(func_800F3B04());
        func_800F5480();
        func_800F7CC8(func_800F3B04());
        func_800F63BC();
        func_800F63BC();
        func_800F5A90(0x78);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
