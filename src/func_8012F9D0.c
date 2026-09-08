#include "common.h"
void func_8012F9D0(void)
{
    /* config store: 0x43/0x48/0x5E/0x5B/0x5A/0x41 windows, 80120FBC +
       8012FBB0 rows; loops L12FA78 (5DA0(0x5D)/5B8C(0x202)) and
       L12FA88 (5DA0(0x93)/5B8C(0x202)). */
    func_800F824C(0x43);
    func_80120FBC();
    func_800F9644(0x20);
    func_800F6658(0x43);
    func_800F8274();
    func_800F516C();
    func_800F5050();
    func_800F3F94(func_800F3C3C(0x48));
    func_800F4064(0x1560);
    func_800F8274(0x60);
    func_800F9660(0x20);
    func_800F8FB8(0x5E);
    func_800F8FB8(0x5B);
    func_800F654C(8);
    func_800F824C(0x5A);
    func_800F7594(0x41);
L12fa78:
    for (;;) {
        func_800F654C(3);
        func_800F824C(0x5D);
    L12fa88:
        for (;;) {
            func_800F9644(0x20);
            func_800F6658(0x5D);
            func_800F5CF8();
            func_800F516C(8);
            func_800F6558();
            func_800F5480();
            func_800F7FCC(func_800F3C3C(0x5A));
            func_800F3D48();
            func_800F4264();
            func_800F7894();
            func_800F5410();
            func_800F3F94(func_800F3B9C());
            func_800F9660(0x20);
            func_800F66D8(0x60);
            func_8012FBB0();
            func_800F63BC();
            func_800F5DA0(0x5D);
            if (func_800F5B8C(0x202) != 0)
                continue;
            break;
        }
        func_800F5DA0(0x5A);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_800F9660(0x20);
    return;
}
