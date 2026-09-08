#include "common.h"
void func_8013C094(void)
{
    /* ability/skill screen: 1BB3/1BB4 headers, 5B/5A/60 windows;
       8011F724/8011F684/8011F884 + 8012B100 renders; loops to L13C09C
       while 4120(2) holds; 8013C554 details. */
L13c09c:
    for (;;) {
        func_800F6564(0x1BB3);
        func_800F5140();
        func_800F4F4C();
        func_800F4008(0x30);
        func_800F824C(0x5B);
        func_800F6564(0x1BB4);
        if (func_800F6434(2) != 0)
            goto L13C104;
        func_800F654C(0x70);
        goto L13C10C;
    L13C104:
        func_800F654C();
    L13C10C:
        func_800F824C(0x5A);
        func_800F7270(0x5A);
        func_800F7500(0x304);
        func_800F971C();
        func_8011F724();
        func_8011F684();
        func_8011F884();
        func_800F6630(1);
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            goto L13C184;
        func_800F8FB8(0x60);
        func_800F7500(0x304);
        func_8012B100();
        return;
    L13C184:
        func_800F6630();
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            goto L13C1AC;
        func_8013C554();
    L13C1AC:
        func_800F6630(1);
        func_800F4248(1);
        if (func_800F4120(2) != 0)
            goto L13C1FC;
        func_800F6564(0x1BB4);
        func_800F61E8();
        func_800F4248(1);
        func_800F8188(0x1BB4);
        if (func_800F4120(2) != 0)
            goto L13C2B4;
    L13C1FC:
        func_800F6630(1);
        func_800F4248(2);
        if (func_800F4120(2) != 0)
            goto L13C24C;
        func_800F6564(0x1BB4);
        func_800F61E8();
        func_800F4248(1);
        func_800F8188(0x1BB4);
        if (func_800F4120(0x202) != 0)
            goto L13C26C;
    L13C24C:
        func_800F6630(1);
        func_800F4248(8);
        if (func_800F4120(2) != 0)
            goto L13C294;
    L13C26C:
        func_800F6564(0x1BB3);
        func_800F5CCC();
        if (func_800F5B8C(0x80) != 0)
            goto L13C294;
        func_800F8188(0x1BB3);
    L13C294:
        func_800F6630(1);
        func_800F4248(4);
        if (func_800F4120(2) != 0)
            continue;
        goto L13C2B4;
    L13C2B4:
        func_800F6564(0x1BB3);
        func_800F61E8();
        func_800F5574(4);
        if (func_800F53D4() != 0)
            continue;
        func_800F8188(0x1BB3);
    }
    return;
}
