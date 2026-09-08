#include "common.h"
void func_801398F4(void)
{
    /* ability detail: 0x1340/0x1440 texts, 0x45/0x41 windows,
       80139694 prep, 80120E2C/8011FBA4/80126528/801399EC/
       801264C0 rows; loops L139934 (5DA0(0x45)/5B8C(0x202)). */
    func_80139694();
    func_800F6B68(0x1340);
    if (func_800F6434(2) != 0)
        goto L1399DC;
    func_800F654C(0x30);
    func_800F824C(0x45);
    func_800F7594(0x41);
L139934:
    for (;;) {
        func_800F6D70(0x1440);
        if (func_800F6434(2) != 0)
            goto L1399A4;
        func_800F63BC();
        func_800F63BC();
        func_800F5DA0(0x45);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_80120E2C();
    func_800F7500();
    func_8011FBA4();
    func_80126528();
    return;
L1399A4:
    func_800F9644(0x20);
    func_800F6BE0(0x1340);
    func_800F89D4(0x1440);
    func_800F9140(0x1340);
    func_800F9660(0x20);
    func_801399EC();
    func_801264C0();
    return;
L1399DC:
    return;
}
