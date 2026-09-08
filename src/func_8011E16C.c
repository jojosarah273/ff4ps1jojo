#include "common.h"
void func_8011E16C(void)
{
    /* battle verdict (twin of 8011E318): 3D/3E/40 rows with 885C
       fills, 6434(2) exit gate; loops L11E1B0 and L11E214. */
    func_800F7270(0x3D);
    func_800F6C68();
    func_800F824C(0x3D);
    func_800F6C68();
    func_800F824C(0x3E);
    func_800F7270(0x3D);
L11e1b0:
    for (;;) {
        func_800F6C68();
        if (func_800F6434() != 0)
            goto L11E29C;
        func_800F4248(0x7F);
        func_800F9200();
        func_800F6C68();
        func_800F63BC();
        func_800F93DC();
        func_800F7270(0x40);
    L11e214:
        for (;;) {
            func_800F885C();
            func_800F6364();
            func_800F5EA0();
            if (func_800F5C64(0x202) != 0)
                continue;
            break;
        }
        func_800F8D6C(0x40);
        if (func_800F6434(2) != 0)
            goto L11E308;
        func_800F7270(0x3D);
        func_800F8D6C(0x3D);
    }
L11E29C:
    func_800F7270(0x40);
    func_800F885C();
    func_800F6364();
    func_800F8D6C(0x40);
    if (func_800F6434(2) != 0)
        goto L11E308;
    func_800F7270(0x3D);
    func_800F6364();
    func_800F8D6C(0x3D);
    goto L11E1B0;
L11E308:
    return;
}
