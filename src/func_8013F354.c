#include "common.h"
void func_8013F354(void)
{
    /* battle class rows: 0x1C/0x22/0x1E windows, 3F94(3C3C) + 7FCC
       cells, 64EC(2) gates; loop L13F3BC (7B40/5C64). */
    func_800F9330();
    func_800F9644(0x20);
    func_800F922C();
    func_800F8FD8(0x20);
    func_800F8FD8(0x22);
    func_800F6658(0x1C);
    if (func_800F64EC(2) != 0)
        goto L13F474;
    func_800F6658(0x1E);
    if (func_800F64EC(2) != 0)
        goto L13F474;
    func_800F71DC(0x10);
L13f3bc:
    for (;;) {
        func_800F7B40(func_800F3C3C(0x1C));
        func_800F7B7C();
        func_800F7B40(func_800F3C3C(0x22));
        func_800F5480();
        func_800F6658(0x22);
        func_800F7FCC(func_800F3C3C(0x1E));
        func_800F8274(0x22);
        if (func_800F53C0() != 0)
            goto L13F444;
        func_800F6658(0x22);
        func_800F3F94(func_800F3C3C(0x1E));
        func_800F8274(0x22);
        func_800F5410();
    L13F444:
        func_800F7B40(func_800F3C3C(0x20));
        func_800F7B7C();
        func_800F5E48();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
L13F474:
    func_800F9410();
    func_800F9660(0x20);
    func_800F95A0();
    return;
}
