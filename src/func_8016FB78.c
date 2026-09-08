#include "common.h"
void func_8016FB78(void)
{
    /* config bars: 0x1F/0x1D/0x1E windows, 0x29 window cells; loops
       L16FC1C (5DA0(0x1D)) and L16FCA8 (5DA0(0x1E)). */
    func_800F8FB8(0x1F);
    if (func_800F53C0() != 0)
        goto L16FBA0;
    func_800F5DA0(0x1F);
L16FBA0:
    func_800F9200();
    func_800F824C(0x1D);
    func_800F824C(0x1E);
    func_800F9644(0x20);
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x29));
    func_800F9660(0x20);
    func_800F939C();
    func_800F6630(0x1F);
L16fc1c:
    for (;;) {
        func_800F8960();
        func_800F63BC();
        func_800F63BC();
        func_800F5DA0(0x1D);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_800F960C();
    func_800F9644(0x20);
    func_800F5410();
    func_800F4064(0x40);
    func_800F9660(0x20);
    func_800F6630(0x1F);
L16fca8:
    for (;;) {
        func_800F8960();
        func_800F63BC();
        func_800F63BC();
        func_800F5DA0(0x1E);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_800F93DC();
    return;
}
