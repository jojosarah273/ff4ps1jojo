#include "common.h"
void func_80157F30(void)
{
    /* options screen: 0xD1/0x38F6/0x35EB texts, 0xA9/0xAB/0xAE
       windows, 801580B0 row; loops L157F58 (5574(0xFF)) and
       L157FE0 (4FAC(0x101) rows). */
    func_800F8FB8(0xD1);
    func_800F8FB8();
    func_800F6564(0x38F6);
    func_800F824C(0xA9);
L157f58:
    for (;;) {
        func_800F6564(0x3601);
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            goto L157F98;
        if (func_800F54D4(func_800F3C3C(0xA9)) == 0)
            goto L158048;
    L157F98:
        func_800F8FB8(0xAD);
        func_800F8FB8(0xAE);
        func_800F6630(0xA9);
        func_800F5140();
        func_800F6B68();
        func_800F824C(0xAB);
    L157fe0:
        for (;;) {
            func_800F4F28(func_800F3C3C(0xAB));
            if (func_800F4FAC(0x101) != 0)
                goto L158020;
            func_801580B0();
            func_800F6630(0xD1);
            if (func_800F6434(0x202) != 0)
                goto L1580A0;
        L158020:
            func_800F62BC(0xAD);
            func_800F6630(0xAD);
            func_800F5574(7);
            if (func_800F53D4() == 0)
                continue;
            break;
        }
    L158048:
        func_800F62BC(0xA9);
        func_800F6630(0xA9);
        func_800F5574(0xD);
        if (func_800F53D4() == 0)
            goto L158078;
        func_800F8FB8(0xA9);
    L158078:
        func_800F62BC();
        func_800F6630();
        func_800F5574(0xD);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
L1580A0:
    return;
}
