#include "common.h"
void func_8010A5A0(void)
{
    /* shop banner: 0xE9 window + 0x2115 gate; spins on L10A620,
       then 0x834/0x774 text rows (L10A748/L10A84C) before restoring
       0x2115. */
    func_800F6630(0xE9);
    if (func_800F6434(0x202) == 0)
        return;
    func_800F8FB8(0xE9);
    func_800F654C(0x80);
    func_800F8188(0x2115);
L10a620:
    for (;;) {
        if (func_800F53D4() != 0)
            break;
    }
    func_800F71DC();
L10a748:
    for (;;) {
        func_800F6B68(0x834);
        func_800F6364();
        func_800F5958(0x14);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F71DC();
L10a84c:
    for (;;) {
        func_800F6B68(0x774);
        func_800F6364();
        func_800F5958(0x14);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F654C(0x80);
    func_800F8188(0x2115);
L10a8d4:
    for (;;) {
        if (func_800F53D4() != 0)
            break;
    }
    return;
}
