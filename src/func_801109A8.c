#include "common.h"
void func_801109A8(void)
{
    /* battle spell helper: 0x6C8/0x7A/0x24/0xB9/0x26/0xC8 windows,
       80110F2C/80110FA4/80110B08/80173780/80110BC8/8011EA5C rows;
       loops L1109C8/L110A28. */
    func_800F654C(1);
    func_800F8188(0x6C8);
    func_80110F2C();
L1109c8:
    for (;;) {
        func_80110FA4();
        func_80110B08();
        func_800F6630(0x7A);
        func_800F4248(7);
        if (func_800F4120(0x202) != 0)
            continue;
        func_800F62BC(0x24);
        func_800F6630(0x24);
        func_800F5574(0x32);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F8FB8(0x24);
L110a28:
    for (;;) {
        func_80110FA4();
        func_800F6630(0x24);
        func_800F5574(0x48);
        if (func_800F53C0() != 0)
            goto L110A68;
        func_800F5410();
        func_800F4008(0xDC);
        func_800F824C(0xB9);
    L110A68:
        func_80173780();
        func_80110BC8();
        func_800F6630(0x24);
        func_800F5574(0x24);
        if (func_800F53C0() != 0)
            goto L110AA0;
        func_80110B08();
    L110AA0:
        func_800F6630(0x7A);
        func_800F4248(7);
        if (func_800F4120(0x202) != 0)
            continue;
        func_800F62BC(0x24);
        func_800F6630(0x24);
        func_800F5574(0x64);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F8FB8(0xC8);
    func_8011EA5C();
    return;
}
