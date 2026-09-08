#include "common.h"
void func_8010E158(void)
{
    /* battle rows: 0x7B/0x7A windows, 0x64/0x89 windows,
       8010543C/80102770/80172BA8/8011EA5C rows; loop L10E180 on
       row reads. */
    func_800F8FB8(0x7B);
    func_800F8FB8(0x7A);
    func_800F71DC(0x64);
    func_800F8D6C(0x89);
L10e180:
    for (;;) {
        func_800FE778();
        func_800F6630(0x89);
        func_800F5574(0x40);
        if (func_800F53C0() != 0)
            goto L10E1E0;
        func_800F824C(0xB7);
        func_800F5410();
        func_800F4008(0x10);
        func_800F824C(0xAD);
    L10E1E0:
        func_800F654C(1);
        func_800F824C(0xD5);
        func_800FE870();
        func_800F654C(2);
        func_800F824C(5);
        func_800F8FB8(4);
        func_800F654C(1);
        func_800F824C(0xD5);
        func_8010543C();
        func_80102770();
        func_80172BA8();
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
