#include "common.h"
void func_8015CC80(void)
{
    /* options save-row: 0xAA window, 0xA9/0x2003 rows, 80153074;
       loop L15CC90 on 54D4(3C3C(0xAB)). */
    func_800F8FB8(0xAA);
L15cc90:
    for (;;) {
        func_800F3C3C(0xA9);
        func_800F4F28();
        if (func_800F4FAC(0x101) != 0)
            goto L15CD08;
        func_800F6D70(0x2003);
        func_800F4248(0xC0);
        if (func_800F4120(2) != 0)
            goto L15CD08;
        func_800F6630(0xAA);
        func_800F6630(0xAD);
        func_80153074();
        func_800F824C(0xAD);
    L15CD08:
        func_800F9644(0x20);
        func_800F5410();
        func_800F4064(0x80);
        func_800F971C();
        func_800F9660(0x20);
        func_800F62BC(0xAA);
        func_800F6630(0xAA);
        if (func_800F54D4(func_800F3C3C(0xAB)) == 0)
            continue;
        break;
    }
    return;
}
