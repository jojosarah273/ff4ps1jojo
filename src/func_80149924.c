#include "common.h"
void func_80149924(void)
{
    /* battle rows: 0x38E6 text, 0x4E/0x1/0x4E windows, 8014D568/
       8007259C/80094D14/80168148 rows; loops L1499A4 and L1499D8
       (5958(0x20)). */
    func_800F6564();
    if (func_800F6434(0x202) != 0)
        goto L1499A4;
    func_800F654C(0x80);
    func_800F8188();
    func_800F6564(0x38E6);
    func_8014D568();
L1499A4:
    func_800F8F74();
    func_8007259C();
    func_800F971C();
L1499d8:
    for (;;) {
        func_800F6B68();
        func_800F824C();
        func_800F6B68();
        func_800F824C(1);
        func_800F654C(1);
        func_80094D14();
        func_800F6630();
        func_800F8768();
        func_800F6630(1);
        func_800F8768();
        func_800F5958(0x20);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_80168148();
    func_800F62BC(0x4E);
    func_800F6630(0x4E);
    func_800F5574(0x30);
    if (func_800F53D4() == 0)
        goto L1499A4;
    return;
}
