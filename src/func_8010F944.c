#include "common.h"
void func_8010F944(void)
{
    /* battle row info: 0xEF/0xF1/0xF3/0xF5/0x89 windows with 8010FCA8
       header; loop L10F9A4 (weights on 5958(0xC0/0x138)) with the
       80117F40/80115D2C/80110474 rows; closes via 8011EA5C. */
    func_800F71DC(0x30);
    func_800F8D6C(0xEF);
    func_800F71DC(0xE0);
    func_800F8D6C(0xF1);
    func_800F71DC(0x100);
    func_800F8D6C(0xF3);
    func_800F71DC();
    func_800F8D6C(0xF5);
    func_8010FCA8();
    func_800F71DC(0x140);
    func_800F8D6C(0x89);
L10f9a4:
    for (;;) {
        func_800FE778();
        func_800F7270(0x89);
        func_800F5958(0xC0);
        if (func_800F53D4() == 0)
            goto L10F9DC;
        func_800F654C(0x2C);
        func_80117F40();
    L10F9DC:
        func_800FE870();
        func_800F7270(0x89);
        func_800F5958(0xC0);
        if (func_800F53C0() != 0)
            goto L10FA34;
        func_800F6630(0x7A);
        func_800F4248(3);
        if (func_800F4120(0x202) != 0)
            goto L10FA7C;
        func_800F5DA0(0xF1);
        goto L10FA7C;
    L10FA34:
        func_80115D2C();
        func_800F7270(0x89);
        func_800F5958(0x138);
        if (func_800F53D4() == 0)
            goto L10FA7C;
        func_800F654C(0x23);
        func_800FD804();
        func_800F654C(1);
        func_800F824C(0xE5);
    L10FA7C:
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
