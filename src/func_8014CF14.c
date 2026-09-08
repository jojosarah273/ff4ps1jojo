#include "common.h"
void func_8014CF14(void)
{
    /* battle rows: 0x1802/0x7992-0x7B36 cells; gate 5574(0x10);
       loop L14CF64 on 5958(0x8C). */
    func_800F9200();
    func_800F6564(0x1802);
    func_800F5574(0x10);
    if (func_800F53D4() != 0)
        goto L14CFB4;
    func_800F93DC();
    return;
L14CF54:
    func_800F93DC();
    func_800F71DC();
L14cf64:
    for (;;) {
        func_800F8768(0x7992);
        func_800F8768(0x7A1E);
        func_800F8768(0x7AAA);
        func_800F8768(0x7B36);
        func_800F5958(0x8C);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
L14CFB4:
    return;
}
