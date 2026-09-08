#include "common.h"
void func_80111C2C(void)
{
    /* battle rows: 0xC/0xE windows, 0x2C/0x2E cells, 0x300-0x303 scroll
       gates; loop L11C54 (3F38(3C3C) + 4008(0x10) row reads), closes
       via 8011416C + 0x51C/0x51D texts. */
    func_800F7500(0x1C0);
    func_800F71DC();
    func_800F8FB8(0xC);
    func_800F8FB8(0xE);
L11c54:
    for (;;) {
        func_800F6630(0xC);
        func_800F5410();
        func_800F3F38(func_800F3C3C(0x2C));
        func_800F8960(0x300);
        func_800F6630(0xE);
        func_800F5410();
        func_800F3F38(func_800F3C3C(0x2E));
        func_800F8960(0x301);
        func_800F6C68();
        func_800F8960(0x302);
        func_800F6C68();
        func_800F8960(0x303);
        func_800F6630(0xC);
        func_800F5410();
        func_800F4008(0x10);
        func_800F4248(0x3F);
        func_800F824C(0xC);
        if (func_800F4120(0x202) != 0)
            goto L11D24;
        func_800F6630(0xE);
        func_800F5410();
        func_800F4008(0x10);
        func_800F824C(0xE);
    L11D24:
        func_800F5958(0x20);
        if (func_800F53D4() != 0)
            goto L11D98;
        func_800F5958(0x10);
        if (func_800F53D4() == 0)
            continue;
        func_800F7500(0x10);
    }
L11D98:
    func_8011416C();
    func_800F654C(0xAA);
    func_800F8188(0x51C);
    func_800F8188(0x51D);
    return;
}
