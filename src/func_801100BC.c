#include "common.h"
void func_801100BC(void)
{
    /* battle rows: 0x3B0/0x3B1/0x410/0x411 cells with 3F38(3C3C)
       pairs, 0x4C/0x4D/0x7A windows; loop L1100CC on 5A90(0x10). */
    func_800F7500();
L1100cc:
    for (;;) {
        func_800F6D70(0x3B0);
        func_800F5410();
        func_800F3F38(func_800F3C3C(0x4C));
        func_800F8960(0x3B0);
        func_800F6D70(0x3B1);
        func_800F5410();
        func_800F3F38(func_800F3C3C(0x4D));
        func_800F8960(0x3B1);
        func_800F6630(0x7A);
        func_800F4248(1);
        if (func_800F4120(0x202) != 0)
            goto L1101A4;
        func_800F5A90(8);
        if (func_800F53C0() != 0)
            goto L1101A4;
        func_800F6D70(0x410);
        func_800F5410();
        func_800F3F38(func_800F3C3C(0x4C));
        func_800F8960(0x410);
        func_800F6D70(0x411);
        func_800F5410();
        func_800F3F38(func_800F3C3C(0x4E));
        func_800F8960(0x411);
    L1101A4:
        func_800F5A90(0x10);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
