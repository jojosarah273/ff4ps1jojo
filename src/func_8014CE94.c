#include "common.h"
void func_8014CE94(void)
{
    /* battle rows: 4x 8768 cells (0x7612-0x77B6); loop L14CEAC on
       5958(0x8C). */
    func_800F9200();
    func_800F71DC();
L14ceac:
    for (;;) {
        func_800F8768(0x7612);
        func_800F8768(0x769E);
        func_800F8768(0x772A);
        func_800F8768(0x77B6);
        func_800F5958(0x8C);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F93DC();
    return;
}
