#include "common.h"
void func_80120A0C(void)
{
    /* shop row: 0x29/0x45 windows, 0x41/0x1500 texts, 801245B4 row;
       loop L120AFC on 5DA0(0x45)/5B8C(0x202). */
    func_800F4248(0x3F);
    if (func_800F4120(0x202) == 0)
        return;
    func_800F5CCC();
    func_801224D0();
    func_800F5140();
    func_800F824C(0x45);
    func_800F5140();
    func_800F4F4C();
    func_800F3F38(func_800F3C3C(0x45));
    func_801224D0();
    func_800F9644(0x20);
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x29));
    func_800F9660(0x20);
    func_800F654C(6);
    func_800F824C(0x45);
L120afc:
    for (;;) {
        func_800F6B68(0x1500);
        func_800F6364();
        func_801245B4();
        func_800F8960();
        func_800F3D48();
        func_800F8960(0x40);
        func_800F5DA0(0x45);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    return;
}
