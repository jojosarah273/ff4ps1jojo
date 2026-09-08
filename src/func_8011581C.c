#include "common.h"
void func_8011581C(void)
{
    /* battle rows: 0x300/0x7A cells, 801714C4 picker; loop L1158A4
       on 4248(0xF)/4120(0x202). */
    func_800F3B9C();
    func_800F3B04();
    func_800F3C3C(0x7A);
    func_800F6630();
L1158a4:
    for (;;) {
        if (func_800F4120(2) != 0)
            goto L115910;
        func_800F654C();
        func_801714C4();
    L115910:
        func_800F4248(0xF);
        if (func_800F4120(0x202) != 0)
            continue;
        break;
    }
    return;
}
