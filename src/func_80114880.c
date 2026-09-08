#include "common.h"
void func_80114880(void)
{
    /* battle rows: 0x70/0x2C/0x2E/0x89 windows, 80114D18/8011EA5C
       rows; loop L1148B8 on 5958(0x80/0x100). */
    func_800F71DC(0x70);
    func_800F8D6C(0x2C);
    func_800F71DC(0x70);
    func_800F8D6C(0x2E);
    func_800F71DC(0xD0);
    func_800F8D6C(0x89);
L1148b8:
    for (;;) {
        func_80114D18();
        func_800F7270(0x89);
        func_800F5E48();
        func_800F8D6C(0x89);
        func_800F5958(0x80);
        if (func_800F53C0() != 0)
            continue;
        func_800F7270(0x2C);
        func_800F5E48();
        func_800F8D6C(0x2C);
        func_800F5958();
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_8011EA5C();
    return;
}
