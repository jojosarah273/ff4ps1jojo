#include "common.h"
void func_8011CC98(void)
{
    /* shop rows: 0x3D/0x18/0x19 windows, 5024 cells + ADB/B1B texts;
       loop L11CCAC on 5A90(0x40). */
    func_800F7500();
L11ccac:
    for (;;) {
        func_800F7270(0x3D);
        func_800F6C68();
        func_800F824C(0x18);
        func_800F8FB8(0x19);
        func_800F9644(0x20);
        func_800F5024(func_800F3C3C(0x18));
        func_800F7270(0x18);
        func_800F6CF4();
        func_800F6CF4();
        func_800F6CF4();
        func_800F6CF4();
        func_800F89D4(0xADB);
        func_800F89D4(0xADD);
        func_800F89D4(0xB1B);
        func_800F89D4(0xB1D);
        func_800F6558();
        func_800F9660(0x20);
        func_800F62BC(0x3D);
        func_800F5A90(0x40);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
