#include "common.h"
void func_80110664(void)
{
    /* battle spell row: 0xCA/0x89 windows, 0x2100/0xAD4/0xAD5 texts,
       80115D2C/80110474/8011EA5C; loop L110694 on 5C64(0x202). */
    func_80110024();
    func_800F654C(2);
    func_800F824C(0xCA);
    func_800F71DC(0x180);
    func_800F8D6C(0x89);
L110694:
    for (;;) {
        func_800FE778();
        func_800F7270(0x89);
        func_800F5958(0x10);
        if (func_800F53C0() != 0)
            goto L1106D8;
        func_800F8188(0x2100);
    L1106D8:
        func_800FE870();
        func_800F654C(0x70);
        func_800F8188(0xAD4);
        func_800F654C(0x58);
        func_800F8188(0xAD5);
        func_800F654C(3);
        func_800F8188(0xAD0);
        func_800F8188(0xAD1);
        func_80115D2C();
        func_80110474();
        func_800F6630(0x89);
        func_800F4248(0x3F);
        if (func_800F4120(0x202) != 0)
            goto L110758;
        func_800F654C(0x23);
        func_800FD804();
    L110758:
        func_800F7270(0x89);
        func_800F5E48();
        func_800F8D6C(0x89);
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F8FB8(0x80);
    func_8011EA5C();
    return;
}
