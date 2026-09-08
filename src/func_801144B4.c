#include "common.h"
void func_801144B4(void)
{
    /* battle rows: 0x4/0xD5/0xC/0xE/0x91/0x8F/0xD/0xF/0x92 windows,
       8010543C/80102770/80115A34/8011581C rows; loop L1144F8 on
       5A90(0x50). */
    func_800FE870();
    func_800F8FB8(4);
    func_800F654C(1);
    func_800F824C(0xD5);
    func_8010543C();
    func_80102770();
    func_800F7500();
L1144f8:
    for (;;) {
        func_800F824C(0xC);
        func_800F824C(0xE);
        func_80115A34();
        func_800F654C(0x1C);
        func_800F824C(0x91);
        func_800F654C(0x78);
        func_800F824C(0x8F);
        func_800F8FB8(0xD);
        func_800F8FB8(0xF);
        func_800F8FB8(0x92);
        func_8011581C();
        func_800F5A90(0x50);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
