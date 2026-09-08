#include "common.h"
void func_8010D0D8(void)
{
    /* shop stat row: 0x3E/0x3D windows with 76BC/7CC8 pairs, 0xE5B
       cells; loops L10D170/L10D1C4 poll 5C64(0x202)/4248(0xF)
       gates. */
    func_800F824C(0x3E);
    func_800F8FB8(0x3D);
    func_800F76BC(func_800F3C3C(0x3E));
    func_800F76E8();
    func_800F7CC8(func_800F3C3C(0x3D));
    func_800F76BC(func_800F3C3C(0x3E));
    func_800F76E8();
    func_800F7CC8(func_800F3C3C(0x3D));
    func_800F76BC(func_800F3C3C(0x3E));
    func_800F76E8();
    func_800F7CC8(func_800F3C3C(0x3D));
    func_800F7270(0x3D);
L10D170:
    for (;;) {
        func_800F6C68();
        func_800F8960(0xE5B);
        func_800F6364();
        func_800F63BC();
        func_800F4248(0xF);
        if (func_800F4120(0x202) != 0)
            continue;
        break;
    }
L10D1C4:
    for (;;) {
        func_800F654C();
        func_800F8960(0xE5B);
        func_800F63BC();
        func_800F4248(0xF);
        if (func_800F4120(0x202) != 0)
            continue;
        break;
    }
    func_800F4248(0x3F);
    if (func_800F4120(0x202) != 0)
        goto L10D170;
    return;
}
