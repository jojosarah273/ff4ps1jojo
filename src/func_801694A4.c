#include "common.h"
void func_801694A4(void)
{
    /* shop seed: 0x64 window, 0x1B/0x2107 texts; loop L169548 on
       5958(0x320). */
    func_800F6630(0x64);
    func_800F5574(2);
    if (func_800F53D4() == 0)
        return;
    func_800F71DC(0x1B);
    func_800F8D00(0x2107);
    func_800F926C();
    func_800F971C();
    func_800F9200();
    func_800F9448();
    func_800F71DC(0x3000);
    func_800F971C();
L169548:
    for (;;) {
        func_800F6C68();
        func_800F9200();
        func_800F4248(0xF);
        func_800F93DC();
        func_800F4248(0xF0);
        func_800F6364();
        func_800F5958(0x320);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F9448();
    return;
}
