#include "common.h"
void func_80118B80(void)
{
    /* battle stat row: 0x1003 gate, 0x18-0x1B windows, 0x30 window
       cells, 80174F0C/80117DF8/8011EA5C; loops L118BE0 (H16: 6BE0
       (0x1007)/5520 rows) and L118CA8 (0x1009 cell). */
    func_80117594();
    func_800F5574(0xFE);
    if (func_800F53D4() != 0)
        goto L118CA0;
    func_800F824C(0x18);
    func_800F8FB8(0x19);
    func_800F654C(0xA);
    func_800F824C(0x1A);
    func_800F8FB8(0x1B);
    func_80174F0C();
    func_800F71DC();
L118be0:
    for (;;) {
        func_800F6B68(0x1003);
        if (func_800F6434(0x80) != 0)
            goto L118C70;
        func_800F9644(0x20);
        func_800F6BE0(0x1007);
        func_800F5410();
        func_800F3F94(func_800F3C3C(0x30));
        func_800F5520(func_800F3B04());
        if (func_800F53C0() == 0)
            goto L118C58;
        func_800F6BE0(0x1009);
    L118C58:
        func_800F87DC(0x1007);
        func_800F6558();
        func_800F9660(0x20);
    L118C70:
        func_80117DF8();
        func_800F5958(0x140);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_8011EA5C();
    return;
L118CA0:
    func_800F71DC();
L118ca8:
    for (;;) {
        func_800F6B68(0x1003);
        if (func_800F6434(0x80) != 0)
            goto L118CE8;
        func_800F9644(0x20);
        func_800F6BE0(0x1009);
        func_800F87DC(0x1007);
        func_800F6558();
        func_800F9660(0x20);
    L118CE8:
        func_80117DF8();
        func_800F5958(0x140);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_8011EA5C();
    return;
}
