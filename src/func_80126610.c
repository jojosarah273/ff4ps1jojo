#include "common.h"
void func_80126610(void)
{
    /* rows: 0x88 window, 0x2100 text, 8011F320/8011F844 rows;
       6434(0x80) gate; loop L126618 on 5B8C. */
L126618:
    for (;;) {
        func_8011F320();
        func_800F6630(0x88);
        if (func_800F6434(0x80) != 0)
            goto L126690;
        func_800F81E8(0x2100);
        func_800F9200();
        func_8011F844();
        func_800F93DC();
        func_800F5CCC();
        func_800F824C(0x88);
        if (func_800F5B8C() != 0)
            continue;
        func_800F654C(0x80);
        func_800F81E8(0x2100);
        func_800F824C(0x88);
        return;
    }
L126690:
    return;
}
