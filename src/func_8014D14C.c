#include "common.h"
void func_8014D14C(void)
{
    /* battle item-count: 0x26/0x28/0x2A windows, 4FAC(0x101) gate rows,
       80072720 prep; loops L14D1B4 (5DA0(0x28)/5B8C(0x202)), L14D248
       (row cells) and L14D2CC (alt scroll). */
    func_800F5410();
    func_800F4008(0x28);
    func_800F824C(0x26);
    func_800F654C(0x10);
    func_800F824C(0x28);
    func_80072720();
    func_800F6564();
    if (func_800F6434(0x202) != 0)
        goto L14D2B8;
    func_800F6564();
    func_800F824C(0x26);
    func_800F7500();
L14d1b4:
    for (;;) {
        func_800F3C3C(0x26);
        func_800F4F28();
        if (func_800F4FAC(0x101) != 0)
            goto L14D290;
        func_800F939C(0x10);
        func_800F654C();
        func_800F824C(0x28);
        func_800F7270(0x2A);
    L14d248:
        for (;;) {
            func_800F6C68();
            func_800F8960();
            func_800F8960();
            func_800F6364();
            func_800F63BC();
            func_800F5DA0(0x28);
            if (func_800F5B8C(0x202) != 0)
                continue;
            break;
        }
        func_800F960C();
    L14D290:
        func_800F63BC();
        func_800F5A90(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
L14D2B8:
    func_800F7500();
    func_800F7270(0x2A);
L14d2cc:
    for (;;) {
        func_800F6C68();
        func_800F8960();
        func_800F8960();
        func_800F6364();
        func_800F63BC();
        func_800F5A90(0x10);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
