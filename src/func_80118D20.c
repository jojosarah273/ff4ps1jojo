#include "common.h"
void func_80118D20(void)
{
    /* battle stat row (twin): 0x100B gate, 0x100F/0x1011 cells,
       80174F0C/80117DF8/8011EA5C; loops L118D80/L118E48. */
    func_80117594();
    func_800F5574(0xFE);
    if (func_800F53D4() != 0)
        goto L118E40;
    func_800F824C(0x18);
    func_800F8FB8(0x19);
    func_800F654C(0xA);
    func_800F824C(0x1A);
    func_800F8FB8(0x1B);
    func_80174F0C();
    func_800F71DC();
L118d80:
    for (;;) {
        func_800F6B68(0x1003);
        if (func_800F6434(0x80) != 0)
            goto L118E10;
        func_800F9644(0x20);
        func_800F6BE0(0x100B);
        func_800F5410();
        func_800F3F94(func_800F3C3C(0x30));
        func_800F5520(func_800F3B04());
        if (func_800F53C0() == 0)
            goto L118DF8;
        func_800F6BE0(0x100D);
    L118DF8:
        func_800F87DC(0x100B);
        func_800F6558();
        func_800F9660(0x20);
    L118E10:
        func_80117DF8();
        func_800F5958(0x140);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_8011EA5C();
    return;
L118E40:
    func_800F71DC();
L118e48:
    for (;;) {
        func_800F6B68(0x1003);
        if (func_800F6434(0x80) != 0)
            goto L118E88;
        func_800F9644(0x20);
        func_800F6BE0(0x100D);
        func_800F87DC(0x100B);
        func_800F6558();
        func_800F9660(0x20);
    L118E88:
        func_80117DF8();
        func_800F5958(0x140);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_8011EA5C();
    return;
}
