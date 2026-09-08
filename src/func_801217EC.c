#include "common.h"
void func_801217EC(void)
{
    /* battle rows: 0x64/0x65/0x63/0x1D windows, 0xF7-0xF9 codes,
       80121E6C/80121F64/80121C0C rows; 53C0 gate + loop L121894
       on 5DA0/5B8C(0x202). */
    if (func_800F53C0() != 0)
        goto L12181C;
    func_80121E6C();
    func_800F5DA0(0x64);
    goto L12182C;
L12181C:
    func_80121F64();
    func_800F62BC(0x64);
L12182C:
    func_80121C0C();
    func_800F6630(0x65);
    func_800F5480();
    func_800F7F48(func_800F3C3C(0x63));
    func_800F5CCC();
    func_800F824C(0x1D);
    func_800F654C(0xF7);
    func_800F8768(0xF8);
    func_800F654C();
L121894:
    for (;;) {
        func_800F8768(0x1D);
        func_800F5DA0();
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_800F654C(0xF9);
    func_800F8768();
    return;
}
