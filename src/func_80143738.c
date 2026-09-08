#include "common.h"
void func_80143738(void)
{
    /* battle magic-status: 0x300/0x303 cells, 0x6CC0/0x1813 texts, and
       the 6434(0x202) row gates; loop L143768 polls 5958(0x48). */
    func_800F971C();
    func_800F7500(0x40);
L143768:
    for (;;) {
        func_800F6B68();
        if (func_800F6434(0x202) != 0)
            goto L1437A0;
        func_800F654C(0xF0);
        func_800F8960(0x300);
        func_800F8960(0x301);
        goto L143890;
    L1437A0:
        func_800F6564(0x6CC0);
        if (func_800F6434(2) != 0)
            goto L143834;
        func_800F6B68();
        func_800F5410();
        func_800F3F38(func_800F3B04());
        func_800F5480();
        func_800F8058(8);
        func_800F8960(0x300);
        func_800F654C(0x7F);
        func_800F8960(0x303);
        goto L143880;
    L143834:
        func_800F6B68();
        func_800F5410();
        func_800F3F38(func_800F3B04());
        func_800F8960(0x300);
        func_800F654C(0x3F);
        func_800F8960(0x303);
    L143880:
        func_800F6B68();
        func_800F8960(0x301);
    L143890:
        func_800F6564(0x1813);
        func_800F4248(2);
        func_800F5410();
        func_800F4008(0x9C);
        func_800F8960(0x302);
        func_800F6364();
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F5958(0x48);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
