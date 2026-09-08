#include "common.h"
void func_80123958(void)
{
    /* rows: 0x1D window, 0x73-0x75 windows with 7A40/7A68 triples;
       loop L1239B8 (5E48/5C64) with 5574(0x3C) gate. */
    func_800F8FB8(0x1D);
    func_800F71DC(0x18);
    func_800F7A40(func_800F3C3C(0x73));
    func_800F7A68();
    func_800F7A40(func_800F3C3C(0x74));
    func_800F7A68();
    func_800F7A40(func_800F3C3C(0x75));
    func_800F7A68();
L1239b8:
    for (;;) {
        func_800F7A40(func_800F3C3C(0x1D));
        func_800F7A68();
        func_800F6630(0x1D);
        func_800F5574(0x3C);
        if (func_800F53C0() == 0)
            goto L123A00;
        func_800F8058(0x3C);
        func_800F824C(0x1D);
    L123A00:
        func_800F7A40(func_800F3C3C(0x73));
        func_800F7A68();
        func_800F7A40(func_800F3C3C(0x74));
        func_800F7A68();
        func_800F7A40(func_800F3C3C(0x75));
        func_800F7A68();
        func_800F5E48();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    return;
}
