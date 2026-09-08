#include "common.h"
void func_80114DC8(void)
{
    /* battle rows: 0xC0/0x89 windows, 80114FD0/80172BA8/80115080/
       8011511C/80115038/8011EA5C rows; loop L114DE8 on row reads. */
    func_80114FD0();
    func_800F71DC(0xC0);
    func_800F8D6C(0x89);
L114de8:
    for (;;) {
        func_800FE778();
        func_800F7270(0x89);
        func_800F5958(0xF);
        if (func_800F53C0() != 0)
            goto L114E2C;
        func_800F8188(0x2100);
    L114E2C:
        func_800FE870();
        func_80172BA8();
        func_80115080();
        func_800F654C(0x40);
        func_8011511C();
        func_800F654C(4);
        func_800F824C(5);
        func_800F8FB8(4);
        func_80115038();
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
