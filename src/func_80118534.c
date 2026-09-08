#include "common.h"
void func_80118534(void)
{
    /* battle row pick: 0xB3/0x3D/0x3E/0x40/0x7 windows, 0x1000/
       0x1140/0x1143-0x1146/0x9D5 gates, 8011EA5C closes; loops
       L11855C (5A90(0x140)) and L1186C8 (5DA0(7)/5B8C(0x202)). */
    func_800F6364();
    func_800F8D6C(0xB3);
    func_800F7500();
    func_800F8EBC(0x3D);
L11855c:
    for (;;) {
        func_800F7594(0x3D);
        func_800F6D70(0x1000);
        func_800F4248(0x1F);
        if (func_800F54D4(func_800F3B04()) != 0)
            goto L11860C;
        func_800F6630(0x3D);
        func_800F5410();
        func_800F4008(0x40);
        func_800F824C(0x3D);
        func_800F6630(0x3E);
        func_800F4008();
        func_800F824C(0x3E);
        func_800F7594(0x3D);
        func_800F5A90(0x140);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_8011EA5C();
    return;
L11860C:
    func_800F6B68(0x9D5);
    func_800F5CCC();
    if (func_800F6434(0x80) != 0)
        goto L118728;
    func_800F9644(0x20);
    func_800F8274(0x40);
    func_800F6558();
    func_800F9660(0x20);
    func_800F654C(0x40);
    func_800F824C(7);
    func_800F7270(0x3D);
    func_800F7594(0x40);
L1186c8:
    for (;;) {
        func_800F6B68(0x1000);
        func_800F8960(0x1140);
        func_800F6364();
        func_800F63BC();
        func_800F5DA0(7);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_800F7270(0x40);
    func_800F90EC(0x1143);
    func_800F90EC(0x1144);
    func_800F90EC(0x1145);
    func_800F90EC(0x1146);
    return;
L118728:
    func_800F7270(0x3D);
    func_800F90EC(0x1000);
    func_8011EA5C();
    return;
}
