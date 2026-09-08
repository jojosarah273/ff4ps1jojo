#include "common.h"
void func_8010A2AC(void)
{
    /* shop/battle dialog: 0xC5/0xE9/0xD1 windows, 0xFE6 name text,
       0x774/0x834 stat rows, 80109378 cursor math; four loops
       (L10A344/L10A398/L10A444/L10A4A4). */
    func_800F6630(0xC5);
    if (func_800F6434(2) != 0)
        goto L10A2E0;
    func_800F8FB8(0xC5);
    goto L10A590;
L10A2E0:
    func_800F6630(0xD1);
    if (func_800F6434(2) == 0)
        goto L10A590;
    func_800F71DC();
    func_800F6564(0xFE6);
    if (func_800F6434() == 0)
        goto L10A590;
    if (func_800F73E0(2) != 0)
        goto L10A384;
L10A340:
    for (;;) {
    L10A344:
        for (;;) {
            func_800F6C68();
            func_800F6364();
            func_800F5574();
            if (func_800F53D4() != 0)
                break;
        }
        func_800F5EA0();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
L10A384:
    func_800F8D6C(0x3D);
    func_800F8FB8(7);
L10a398:
    for (;;) {
        func_800F6C68();
        func_800F6364();
        func_800F62BC(7);
        func_800F5574();
        if (func_800F53D4() != 0)
            break;
    }
    func_800F5DA0(7);
    func_800F3C3C(7);
    func_800F654C(0x14);
    func_800F5480();
    func_800F7F48(func_800F3C3C(7));
    func_800F7864();
    func_800F824C(6);
    goto L10A434;
L10A424:
    func_800F654C();
    func_800F824C(6);
L10A434:
    func_800F71DC();
    func_800F654C(0xFF);
L10a444:
    for (;;) {
        func_800F8768(0x774);
        func_800F8768(0x834);
        func_800F6364();
        func_800F5958(0x28);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F7270(0x3D);
    func_800F6630(6);
L10a4a4:
    for (;;) {
        func_800F6C68();
        func_800F6364();
        if (func_80109378() != 0)
            func_800F8960(0x774);
        else
            func_800F8960(0x834);
    L10A540:
        func_800F63BC();
        func_800F654C();
        func_800F3D48();
        func_800F5DA0(7);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_800F654C(1);
    func_800F824C(0xE9);
L10A590:
    return;
}
