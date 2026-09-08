#include "common.h"
void func_801218EC(void)
{
    /* battle rows (twin variant): 0x66/0x65/0x63/0x1D windows,
       80121E94/80121D64/80121CE4 rows. */
    if (func_800F53C0() != 0)
        goto L12191C;
    func_80121E94();
    func_800F5DA0(0x66);
    goto L12192C;
L12191C:
    func_80121D64();
    func_800F62BC(0x66);
L12192C:
    func_80121CE4();
    func_800F6630(0x65);
    func_800F5480();
    func_800F7F48(func_800F3C3C(0x63));
    func_800F5CCC();
    func_800F824C(0x1D);
    func_800F654C(0xF7);
    func_800F8768(0xF8);
    func_800F654C();
L121994:
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
