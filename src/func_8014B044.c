#include "common.h"
void func_8014B044(void)
{
    /* battle rows: 0x3523 text; loop L14B058 on 54D4(3B04(0x3523))/
       5958(8). */
    func_800F71DC();
L14b058:
    for (;;) {
        func_800F6C68();
        if (func_800F54D4(func_800F3B04(0x3523)) != 0)
            goto L14B0A8;
        func_800F6364();
        func_800F5958(8);
        if (func_800F53D4() == 0)
            continue;
        func_800F71DC();
        return;
    }
L14B0A8:
    func_800F8188(0x49);
    return;
}
