#include "common.h"
void func_80118244(void)
{
    /* battle rows: 0x40/0x7/0x3D windows with three 1000/102D/1037/
       103F stat-cell loops (5DA0(7)/5B8C(0x202) latch each), closing
       via 801183D8. */
    func_800F9644(0x20);
    func_800F8274(0x40);
    func_800F6558();
    func_800F9660(0x20);
    func_800F654C(0x14);
    func_800F824C(7);
    func_800F7270(0x40);
    func_800F7594(0x3D);
L1182a4:
    for (;;) {
        func_800F6C68();
        func_800F8960(0x1000);
        func_800F6364();
        func_800F63BC();
        func_800F5DA0(7);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_800F654C(3);
    func_800F824C(7);
    func_800F7270(0x40);
    func_800F7594(0x3D);
L118300:
    for (;;) {
        func_800F6C68();
        func_800F8960(0x102D);
        func_800F6364();
        func_800F63BC();
        func_800F5DA0(7);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_800F654C(9);
    func_800F824C(7);
    func_800F7270(0x40);
    func_800F7594(0x3D);
L118360:
    for (;;) {
        func_800F6C68();
        func_800F8960(0x1037);
        func_800F6364();
        func_800F63BC();
        func_800F5DA0(7);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_801183D8();
    return;
}
