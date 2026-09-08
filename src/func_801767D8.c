#include "common.h"
void func_801767D8(void)
{
    /* shop row: 0xFD8 title + 0x3E/0x3D windows (76BC/7CC8 pair cells),
       0x5000 gate, 8011F724-style sprint; loops L1768B4/L1768B8
       (4968/5A90(0x800)). */
    func_800F6564(0xFD8);
    func_800F6C68();
    func_800F824C(0x3E);
    func_800F8FB8(0x3D);
    func_800F76BC(func_800F3C3C(0x3E));
    func_800F76E8();
    func_800F7CC8(func_800F3C3C(0x3D));
    func_800F6630(0x3E);
    func_800F5410();
    func_800F3F38(func_800F3B9C());
    func_800F824C(0x3E);
    func_800F7270(0x3D);
    func_800F7500();
    func_800F654C(0x7F);
    func_800F9200();
    func_800F9448();
L1768B4:
    for (;;) {
    L1768b8:
        for (;;) {
            func_800F6C68();
            func_800F8960(0x5000);
            func_800F6364();
            func_800F63BC();
            func_800F4248(0xF);
            if (func_800F4120(0x202) != 0)
                goto L1768B4;
            goto L17690C;
        }
    L17690C:
        for (;;) {
            func_800F6C68();
            func_800F8960(0x5000);
            func_800F6364();
            func_800F63BC();
            func_800F654C();
            func_800F8960(0x5000);
            func_800F63BC();
            func_800F4248(0xF);
            if (func_800F4120(0x202) != 0)
                continue;
            break;
        }
        func_800F5A90(0x800);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F654C();
    func_800F9200();
    func_800F9448();
    return;
}
