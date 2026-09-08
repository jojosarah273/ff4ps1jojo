#include "common.h"
void func_8010DF98(void)
{
    /* battle rows: 0x1000-0x1004/0x1008 cells, 5574(0xB) gate, 80117DF8
       row; loop L10DFA8 on 5958(0x140). */
    func_800F71DC();
L10dfa8:
    for (;;) {
        func_800F6B68(0x1000);
        func_800F4248(0x1F);
        func_800F5574(0xB);
        if (func_800F53D4() == 0)
            goto L10DFE8;
        func_800F90EC(0x1003);
        func_800F654C(1);
        goto L10E000;
    L10DFE8:
        func_800F654C(0x80);
        func_800F8768(0x1003);
        func_800F654C();
    L10E000:
        func_800F8768(0x1007);
        func_800F90EC(0x1008);
        func_800F90EC(0x1004);
        func_80117DF8();
        func_800F5958(0x140);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_8011EA5C();
    return;
}
