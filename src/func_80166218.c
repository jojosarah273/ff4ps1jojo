#include "common.h"
void func_80166218(void)
{
    /* battle cast flow: 8014D528/8016762C preps, loops L1662EC
       (5A90(0x40)) and L16638C (70174/4120(0x202) rows), 80166458
       row; 0x5E window + 0x100 const. */
    func_800F654C(0x5E);
    func_8014D528();
    func_800F971C();
    func_800F8D00();
    func_800F8D00();
    func_800F8D00();
    func_800F71DC(0x10);
    func_8016762C();
    func_800F971C();
    /* v1/v0 gate -> L1662E0 */
    func_800F3B04();
L1662E0:
    func_800F9644(0x20);
L1662ec:
    for (;;) {
        func_800F516C();
        func_800F4264(0x100);
        func_800F89D4();
        func_800F6364();
        func_800F63BC();
        func_800F63BC();
        func_800F5A90(0x40);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F971C();
    func_800F9660(0x20);
L16638c:
    for (;;) {
        func_80070174();
        func_800F6240();
        func_800F6564();
        func_800F4248(7);
        func_800F6C68();
        func_800F8E50();
        func_80166458();
        func_800F6564();
        func_800F4248(3);
        if (func_800F4120(0x202) != 0)
            continue;
        func_800F7210();
        func_800F6364();
        func_800F8D00();
        func_800F5958(0x80);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
