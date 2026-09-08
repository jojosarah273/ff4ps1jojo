#include "common.h"
void func_80166458(void)
{
    /* battle cast rows: 0x2/0x4 windows, 0x7600 cells, 6658/89D4/
       5DD4(2) reads; loop L1664D0 on 5A90(0x230). */
    func_800F9330();
    func_800F9644(0x20);
    func_800F658C();
    func_800F8274(2);
    func_800F6558(0x100);
    func_800F8274();
    func_800F971C();
L1664d0:
    for (;;) {
        func_800F6658();
        func_800F89D4(0x7600);
        func_800F5DD4(2);
        if (func_800F5C64() != 0)
            goto L166560;
        func_800F658C();
        func_800F8274();
        func_800F5958(0x40);
        if (func_800F53D4() != 0)
            goto L166560;
        func_800F6BE0();
        func_800F8274(4);
        func_800F6658();
        func_800F5F70(func_800F3C3C(4));
        func_800F8274();
        func_800F6364();
        func_800F6364();
    L166560:
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F5A90(0x230);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F971C();
    func_800F9660(0x20);
    func_800F95A0();
    return;
}
