#include "common.h"
void func_80132378(void)
{
    /* ability rows: 0x1B8B/0x4 texts, 801224D0/80132178 rows; loop
       L132388 on 5574(5). */
    func_800F654C();
L132388:
    for (;;) {
        func_800F9200();
        func_801224D0();
        func_800F6B68(0x1B8B);
        if (func_800F6434(2) != 0)
            goto L1323F0;
        func_800F93DC();
        func_800F9200();
        func_80132178();
        func_800F8768(4);
    L1323F0:
        func_800F93DC();
        func_800F61E8();
        func_800F5574(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
