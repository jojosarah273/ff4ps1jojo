#include "common.h"
void func_801709E4(void)
{
    /* shop confirm rows: 0x3E/0x3D windows, 0x1700/0xBD cells and
       0x8 window; loops L170A4C (5A90(0x100)) and L170ACC (3F38
       (3B04) rows + 4120(0x202) latch). */
    func_800F654C(0x80);
    func_800F8188(0x2115);
    func_800F71DC(0x1700);
    func_800F6564();
    func_800F824C(0x3E);
    func_800F8FB8(0x3D);
    func_800F7270(0x3D);
    func_800F7500();
L170a4c:
    for (;;) {
        func_800F6C68();
        func_800F8960(0xBD);
        func_800F6364();
        func_800F63BC();
        func_800F5A90(0x100);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F6564(0x1700);
    func_800F824C(0x3E);
    func_800F8FB8(0x3D);
    func_800F7270(0x3D);
    func_800F7500();
L170acc:
    for (;;) {
        func_800F6C68();
        func_800F824C(8);
        func_800F6364();
        func_800F4248(0xF);
        func_800F5410();
        func_800F3F38(func_800F3B04());
        func_800F6630(8);
        func_800F5410();
        func_800F3F38(func_800F3B04());
        func_800F4248(0x1F);
        if (func_800F4120(0x202) != 0)
            continue;
        func_800F63BC();
        func_800F5A90(0x100);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
