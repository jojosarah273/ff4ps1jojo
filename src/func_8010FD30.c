#include "common.h"
void func_8010FD30(void)
{
    /* battle rows: 0x89/0x7A windows, 0xAD4/0xAD5/0xAD0/0xAD1 texts,
       80115D2C/80110474/8011EA5C rows; loop L10FD60 on 5C64(0x202). */
    func_80110024();
    func_800F71DC(0x200);
    func_800F8D6C(0x89);
L10fd60:
    for (;;) {
        func_800FE778();
        func_800FE870();
        func_800F6630(0x7A);
        func_800F4248(6);
        func_800F8188(0xAD4);
        func_800F8188(0xAD5);
        func_800F8188(0xAD0);
        func_800F8188(0xAD1);
        func_800F8188();
        func_80115D2C();
        func_80110474();
        func_800F6630(0x89);
        func_800F4248(0x3F);
        if (func_800F4120(0x202) != 0)
            goto L10FEA4;
        func_800F654C(0x23);
        func_800FD804();
    L10FEA4:
        func_800F7270(0x89);
        func_800F5E48();
        func_800F8D6C(0x89);
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_8011EA5C();
    return;
}
