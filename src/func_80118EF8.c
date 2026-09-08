#include "common.h"
void func_80118EF8(void)
{
    /* battle rows: 0x6/0x1440/0x1441/0x1033/0x1034 texts/windows;
       loops L118F18 (5A90/53D4) and L118F78 (54D4(3C3C(6)) gates). */
    func_80117594();
    func_800F824C(6);
    func_800F7500();
L118f18:
    for (;;) {
        func_800F6D70(0x1440);
        if (func_800F54D4(func_800F3C3C(6)) != 0)
            goto L118FF0;
        func_800F5A90(0x60);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F71DC();
L118f78:
    for (;;) {
        func_800F6B68(0x1033);
        if (func_800F54D4(func_800F3C3C(6)) != 0)
            goto L118FD0;
        func_80117DF8();
        func_800F5958(0x140);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_8011EA5C();
    return;
L118FD0:
    func_800F90EC(0x1033);
    func_800F90EC(0x1034);
    func_8011EA5C();
    return;
L118FF0:
    func_800F654C();
    func_800F8960(0x1440);
    func_800F8960(0x1441);
    func_8011EA5C();
    return;
}
