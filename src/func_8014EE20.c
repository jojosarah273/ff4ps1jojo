#include "common.h"
void func_8014EE20(void)
{
    /* battle status-cast: 0xE/0x10/0xD windows, 4FAC(0x101) gate loops
       (L14EE88 stat rows, L14EF60 scroll, L14F030 alt), 6DE8/922C/89D4
       cell draws. */
    func_800F6564();
    if (func_800F6434(2) != 0)
        goto L14F0AC;
    func_800F6564();
    if (func_800F6434(0x202) != 0)
        goto L14EFF0;
    func_800F6564();
    if (func_800F6434(2) != 0)
        goto L14F0AC;
    func_800F71DC();
    func_800F6564();
    func_800F824C(0xE);
L14EE88:
    for (;;) {
        func_800F3C3C(0xE);
        func_800F4F28();
        if (func_800F4FAC(0x101) != 0)
            goto L14EFC8;
        func_800F9644(0x20);
        func_800F6DE8();
        func_800F922C();
        func_800F939C();
        func_800F6558(0xD);
        func_800F8274(0x10);
        func_800F5410();
        func_800F4064(0x1C);
    L14ef60:
        for (;;) {
            func_800F6DE8();
            func_800F89D4(0x10);
            func_800F5DD4();
            if (func_800F5C64(0x202) != 0)
                continue;
            break;
        }
        func_800F960C();
        func_800F9410();
        func_800F89D4(0x10);
        func_800F971C();
        func_800F9660(0x20);
    L14EFC8:
        func_800F6364();
        func_800F5958(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
L14EFF0:
    func_800F6564();
    func_800F5574(3);
    if (func_800F53D4() == 0)
        return;
    func_800F9644(0x20);
    func_800F658C();
    func_800F922C();
    func_800F71DC(0xC);
L14F030:
    for (;;) {
        func_800F6BE0();
        func_800F87DC(0x202);
        if (func_800F5C64() != 0)
            continue;
        break;
    }
    func_800F9410();
    func_800F81B0();
    func_800F81B0();
    func_800F971C();
    func_800F9660(0x20);
    return;
}
