#include "common.h"
void func_80120BDC(void)
{
    /* battle rows: 8011F320/8011EE34/8013B764/8013B7B8 rows, 0x45
       window; loop L120BE4 on 5DA0(0x45)/5B8C(0x202). */
L120be4:
    for (;;) {
        func_8011F320();
        func_8011EE34();
        if (func_800F5C64(0x202) == 0)
            goto L120C2C;
        func_8013B764();
        func_800F6630(0x45);
        func_8013B7B8();
    L120C2C:
        func_800F9644(0x20);
        func_800F6658(0x1D);
        func_800F5410();
        func_800F4064(0x40);
        func_800F8274(0x1D);
        func_800F6658(0x1F);
        func_800F5410();
        func_800F4064(0x80);
        func_800F8274(0x1F);
        func_800F9660(0x20);
        func_800F5DA0(0x45);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    return;
}
