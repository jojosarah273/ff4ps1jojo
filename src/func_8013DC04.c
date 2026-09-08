#include "common.h"
void func_8013DC04(void)
{
    /* battle magic-name flow: 0x38E2/0x4E gates, 8013D12C prep, 0x4E
       window rows; loops L13DC70 (5A90(5)), L13DCA0/L13DCDC (4FAC
       (0x101) rows), L13DDF8 tail. */
    func_800F6564(0x38E2);
    if (func_800F6434(2) != 0)
        return;
    func_800F6564();
    if (func_800F6434(0x80) != 0)
        return;
    func_8013D12C();
    func_800F8FB8(0x4E);
    func_800F971C();
L13dc70:
    for (;;) {
        func_800F6D70();
        func_800F8960();
        func_800F63BC();
        func_800F5A90(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
L13dca0:
    for (;;) {
        func_80140558();
        func_800F6564();
        func_800F824C();
        func_800F971C();
    L13dcdc:
        for (;;) {
            func_800F3C3C();
            func_800F4F28();
            if (func_800F4FAC(0x101) != 0)
                goto L13DD8C;
            func_800F654C(7);
            func_800F8960(0x4E);
            func_800F6630();
            func_800F4248(4);
            func_800F8768();
        L13DD8C:
            func_800F63BC();
            func_800F5A90(5);
            if (func_800F53D4() == 0)
                continue;
            break;
        }
        func_800F62BC(0x4E);
        func_800F6630();
        func_800F5A90(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
