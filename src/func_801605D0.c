#include "common.h"
void func_801605D0(void)
{
    /* options: 0x280/0x29B5 cells, 0xB1/0xB2 windows, 54D4(3C3C)
       gates, 8015330C row; loop L160604 on 5A90(8). */
    func_800F71DC(0x280);
    func_800F971C();
L160604:
    for (;;) {
        func_800F6D70(0x29B5);
        if (func_800F54D4(func_800F3C3C(0xB1)) != 0)
            goto L16064C;
        if (func_800F54D4(func_800F3C3C(0xB2)) != 0)
            goto L160674;
    L16064C:
        func_800F6B68(0x2003);
        func_800F8768();
    L160674:
        func_8015330C();
        func_800F63BC();
        func_800F5A90(8);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
