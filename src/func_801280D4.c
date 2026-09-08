#include "common.h"
void func_801280D4(void)
{
    /* status row: 0x30/0xC1/0x1D/0x1E/0x1A3C/0x5A windows,
       8012807C/801241B8/801224D0/80125130 rows; loop L1281AC on
       5DA0(0x5A)/5B8C(0x202). */
    func_800F654C(0x30);
    func_800F824C(0xC1);
    func_8012807C();
    func_801241B8();
    func_800F971C();
    func_800F824C(0x1D);
    func_800F971C();
    func_800F824C(0x1E);
    func_800F6564(0x1A3C);
    func_800F5140();
    func_801224D0();
    func_800F9644(0x20);
    func_800F8274(0x1F);
    func_800F9660(0x20);
    func_800F654C(5);
    func_800F824C(0x5A);
L1281ac:
    for (;;) {
        func_80125130();
        func_800F9644(0x20);
        func_800F6558(0x18);
        func_800F5410();
        func_800F3F94(func_800F3C3C(0x1F));
        func_800F8274(0x1F);
        func_800F9660(0x20);
        func_800F62BC(0x1D);
        func_800F5DA0(0x5A);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    return;
}
