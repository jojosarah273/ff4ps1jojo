#include "common.h"
void func_80124358(void)
{
    /* equip/status row: 0x5A/0x5C/0x5B window + 0x22/0x42/0x45 cells,
       801224D0/8011F320/8011EE34/801813C0 rows; loop L124530
       (5DA0(0x45)/5B8C(0x202)); gate 6434(0x202)/0x90 window. */
    func_800F6630(0x90);
    if (func_800F6434(0x202) == 0)
        goto L1245A0;
    func_800F654C();
    func_800F3D48();
    func_800F6630(0x5C);
    func_800F3D48();
    func_800F9644(0x20);
    func_800F5410();
    func_800F4064();
    func_800F8274(0x1F);
    func_800F6558(0x600);
    func_800F8274(0x22);
    func_800F9660(0x20);
    func_800F654C(0x1A);
    func_800F824C(0x21);
    func_800F6630(0x5B);
    func_800F5140();
    func_800F4F4C();
    func_801224D0();
    func_800F9644(0x20);
    func_800F6CF4();
    func_800F8274(0x1D);
    func_800F9660(0x20);
    func_8011F320();
    func_8011EE34();
    func_800F971C();
    func_800F3D48();
    func_800F6630(0x5C);
    func_800F4248(0xF);
    func_800F9644(0x20);
    func_800F9660(0x20);
    func_800F6630(0x5B);
    func_800F824C(0x43);
    func_800F7594(0x43);
    func_800F654C(0x20);
    func_800F824C(0x45);
L124530:
    for (;;) {
        func_800F6C68();
        func_800F8960();
        func_800F6364();
        func_800F63BC();
        func_800F5DA0(0x45);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_801813C0();
    return;
L1245A0:
    return;
}
