#include "common.h"
void func_8011B158(void)
{
    /* battle item-selection flow: 62/61 label window, 64/65 + BC/BD item
       slot rows, AB result rows. 8011B6B4/8011B448 draw the row halves;
       801163E8 performs the use. Sub-loops: L1B214 (wait), L1B264 (scroll),
       L1B2E0 (row select). */
    func_800F8FB8(0x3E);
    func_800F5140();
    func_800F4F4C();
    func_800F7A40(func_800F3C3C(0x3E));
    func_800F824C(0x3D);
    func_800F6564(0xFE5);
    if (func_800F6434(0x80) != 0)
        goto L1B1C0;
    func_800F6564(0x1701);
    if (func_800F6434(2) != 0)
        goto L1B1D0;
L1B1C0:
    func_800F62BC(0x3E);
    func_800F62BC(0x3E);
L1B1D0:
    func_800F7270(0x3D);
    func_800F6C68();
    func_800F824C(0x40);
    func_800F6C68();
    func_800F824C(0x41);
    func_800F7270(0x40);
    func_800F5E48();
L1b214:
    for (;;) {
        func_800F6C68();
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            goto L1B244;
        func_800F5E48();
    }
L1B244:
    func_800F6364();
    func_800F8D00(0xA69);
    func_800F6364();
    func_800F7500();
L1b264:
    for (;;) {
        func_800F3C3C(0x40);
        if (func_800F56AC(func_800F53D4()) != 0)
            goto L1B2B0;
        func_800F6C68();
        func_800F8960(0xA49);
        func_800F63BC();
        func_800F6364();
    }
L1B2B0:
    func_800F7270(0x3D);
    func_800F6C68();
    func_800F824C(0xBC);
    func_800F6C68();
    func_800F824C(0xBD);
L1b2e0:
    for (;;) {
        func_800F7270(0xBC);
        func_800F6C68();
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            goto L1B3E0;
        func_800F5574(0xFE);
        if (func_800F53D4() == 0)
            goto L1B370;
        func_800F7270(0xBC);
        func_800F6364();
        func_800F8D6C(0xBC);
        func_800F6C68();
        func_8011B6B4();
        func_800F5574();
        if (func_800F53D4() != 0)
            goto L1B390;
        goto L1B3C0;
    L1B370:
        func_8011B6B4();
        func_800F5574();
        if (func_800F53D4() != 0)
            goto L1B3C0;
    L1B390:
        func_8011B448();
        func_800F7270(0xBC);
        if (func_800F56AC(func_800F3B04(0xA69)) != 0)
            goto L1B3E0;
        continue;
    L1B3C0:
        func_800F7270(0xBC);
        func_800F6364();
        func_800F8D6C(0xBC);
    }
L1B3E0:
    func_800F654C(1);
    func_800F824C(0xB1);
    func_800F8FB8(0xAB);
    func_800F7270(0xBC);
    func_800F6C68();
    if (func_800F6434(2) != 0)
        goto L1B42C;
    func_801163E8();
    if (func_800F53C0() != 0)
        goto L1B438;
L1B42C:
    func_800F8FB8(0xB1);
L1B438:
    return;
}
