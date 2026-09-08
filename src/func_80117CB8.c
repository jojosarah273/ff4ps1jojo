#include "common.h"
void func_80117CB8(void)
{
    /* battle rows: 0xE4 window + 0x1100/0x1180/0x10C0 gates, 0xAD6/
       0x1000 texts; loops L117CF8/L117D30 (5958 pacing) and L117D70
       (5A90(5) gate with 80117E64/80117DF8 rows). */
    func_800F6630(0xE4);
    func_800F4248(0x7F);
    func_800F824C(0xE4);
    func_800F5574(0xB);
    if (func_800F53D4() == 0)
        goto L117D60;
    func_800F71DC();
L117cf8:
    for (;;) {
        func_800F6B68(0x1100);
        func_800F8768(0x1180);
        func_800F6364();
        func_800F5958(0x40);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F71DC();
L117d30:
    for (;;) {
        func_800F6B68(0x1200);
        func_800F8768(0x10C0);
        func_800F6364();
        func_800F5958(0x80);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
L117D60:
    func_800F71DC();
    func_800F7500();
L117d70:
    for (;;) {
        func_800F6D70(0xAD6);
        func_800F8768(0x1000);
        func_800F3C3C(0xE4);
        if (func_800F54D4(func_800F53D4()) == 0)
            goto L117DC0;
        func_80117E64();
    L117DC0:
        func_80117DF8();
        func_800F63BC();
        func_800F5A90(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
