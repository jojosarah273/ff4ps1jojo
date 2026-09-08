#include "common.h"
void func_80119128(void)
{
    /* battle rows (twin with 78C4): 0x6/0x1003 cells, 80117DF8
       row; loop L119148 on 5958(0x140). */
    func_80117594();
    func_800F824C(6);
    func_800F71DC();
L119148:
    for (;;) {
        func_800F6B68(0x1003);
        func_800F78C4(func_800F3C3C(6));
        func_800F8768(0x1003);
        func_80117DF8();
        func_800F5958(0x140);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F654C(1);
    func_800F824C(0xCC);
    func_800FE778();
    return;
}
