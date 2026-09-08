#include "common.h"
void func_8011818C(void)
{
    /* battle rows: 0x40/0x7/0x3D windows, 0x1140/0x1000 cells; loop
       L1181F4 on 5DA0(7)/5B8C(0x202). */
    func_800F4248(0x7F);
    func_800F9644(0x20);
    func_800F8274(0x40);
    func_800F6558();
    func_800F9660(0x20);
    func_800F654C(0x40);
    func_800F824C(7);
    func_800F7594(0x3D);
    func_800F7270(0x40);
L1181f4:
    for (;;) {
        func_800F6B68(0x1140);
        func_800F8960(0x1000);
        func_800F90EC(0x1140);
        func_800F6364();
        func_800F63BC();
        func_800F5DA0(7);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    return;
}
