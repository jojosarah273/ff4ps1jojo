#include "common.h"
void func_80118AA8(void)
{
    /* battle rows: 0x9D5 text, 0x18/0x1560 window/cell, 80117594 +
       8011EA5C rows; loop L118B30 on 6D70(0x1560)/6434(2). */
    func_800F6364();
    func_800F6B68(0x9D5);
    func_800F9644(0x20);
    func_800F8274(0x18);
    func_800F516C();
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x18));
    func_800F6558();
    func_800F9660(0x20);
L118b30:
    for (;;) {
        func_800F6D70(0x1560);
        if (func_800F6434(2) != 0)
            goto L118B58;
        func_800F63BC();
    }
L118B58:
    func_80117594();
    func_800F8960(0x1560);
    func_8011EA5C();
    return;
}
