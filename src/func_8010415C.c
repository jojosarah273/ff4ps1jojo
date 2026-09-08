#include "common.h"
void func_8010415C(void)
{
    /* battle menu rows: 0x70/0x7/0x3D/0x3E windows, two symmetric
       halves (L104198 and L104280) separated by 824C(0x7)+8F74(0x2115)
       +71DC(0x40) mid-close; 5574(2) advances each half. */
    func_800F654C(0x70);
    func_800F824C(7);
    func_800F8F74(0x2115);
    func_800F71DC();
    func_800F8D6C(0x3D);
L104198:
    for (;;) {
        func_800F7270(0x3D);
    L1041AC:
        for (;;) {
            func_800F6630(7);
            func_800F62BC(7);
            func_800F6630(7);
            func_800F4248(3);
            if (func_800F4120(0x202) != 0)
                continue;
            break;
        }
        func_800F6630(0x3D);
        func_800F5410();
        func_800F4008(0x80);
        func_800F824C(0x3D);
        func_800F6630(0x3E);
        func_800F4008();
        func_800F824C(0x3E);
        func_800F5574(2);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F654C(0x80);
    func_800F824C(7);
    func_800F8F74(0x2115);
    func_800F71DC(0x40);
    func_800F8D6C(0x3D);
L104280:
    for (;;) {
        func_800F7270(0x3D);
    L104294:
        for (;;) {
            func_800F6630(7);
            func_800F62BC(7);
            func_800F6630(7);
            func_800F4248(3);
            if (func_800F4120(0x202) != 0)
                continue;
            break;
        }
        func_800F6630(0x3D);
        func_800F5410();
        func_800F4008(0x80);
        func_800F824C(0x3D);
        func_800F6630(0x3E);
        func_800F4008();
        func_800F824C(0x3E);
        func_800F5574(2);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
