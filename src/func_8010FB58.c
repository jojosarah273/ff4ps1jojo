#include "common.h"
void func_8010FB58(void)
{
    /* battle rows (twin of 8010F944): 0xEF/0xF1/0xF3/0xF5/0x89
       windows, 8010FCA8/80115D2C/80110474/8011EA5C; loop L10FBB8
       (5958(0x140) weights). */
    func_800F71DC(0x30);
    func_800F8D6C(0xEF);
    func_800F71DC(0xB0);
    func_800F8D6C(0xF1);
    func_800F71DC(0x100);
    func_800F8D6C(0xF3);
    func_800F71DC();
    func_800F8D6C(0xF5);
    func_8010FCA8();
    func_800F71DC(0x1C0);
    func_800F8D6C(0x89);
L10fbb8:
    for (;;) {
        func_800FE778();
        func_800FE870();
        func_800F7270(0x89);
        func_800F5958(0x140);
        if (func_800F53C0() != 0)
            goto L10FC28;
        func_800F6630(0x7A);
        func_800F4248(3);
        if (func_800F4120(0x202) != 0)
            goto L10FC60;
        func_800F7270(0xF3);
        func_800F5E48();
        func_800F8D6C(0xF3);
        goto L10FC60;
    L10FC28:
        func_80115D2C();
        func_800F7270(0x89);
        func_800F5958(0x1B8);
        if (func_800F53D4() == 0)
            goto L10FC60;
        func_800F654C(0x23);
        func_800FD804();
    L10FC60:
        func_80110474();
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
