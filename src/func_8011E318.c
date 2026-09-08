#include "common.h"
void func_8011E318(void)
{
    /* battle verdict driver: 3D/3E/40 rows with 885C color fills,
       6434(0x202) gate; loops L11E35C (885C/5C64), L11E3C0 (key
       spin), L11E4D4 (fill tail). */
    func_800F7270(0x3D);
    func_800F6C68();
    func_800F824C(0x3D);
    func_800F6C68();
    func_800F824C(0x3E);
    func_800F7270(0x3D);
L11E35C:
    for (;;) {
        func_800F6C68();
        if (func_800F6434() != 0)
            goto L11E450;
        func_800F4248(0x7F);
        func_800F9200();
        func_800F6C68();
        func_800F63BC();
        func_800F93DC();
        func_800F7270(0x40);
    L11E3C0:
        for (;;) {
            func_800F885C();
            func_800F6364();
            func_800F5EA0();
            if (func_800F5C64(0x202) != 0)
                continue;
            break;
        }
        func_800F8D6C(0x40);
        func_800F5574();
        if (func_800F53D4() != 0)
            goto L11E4C4;
        func_800F7270(0x3D);
        func_800F8D6C(0x3D);
    }
L11E450:
    func_800F7270(0x40);
    func_800F885C();
    func_800F6364();
    func_800F8D6C(0x40);
    func_800F5574();
    if (func_800F53D4() != 0)
        goto L11E4C4;
    func_800F7270(0x3D);
    func_800F6364();
    func_800F8D6C(0x3D);
    goto L11E35C;
L11E4C4:
    func_800F7500(0x40);
    func_800F7270(0x40);
L11E4D4:
    for (;;) {
        func_800F6C68();
        func_800F885C();
        func_800F885C();
        func_800F885C();
        func_800F6364();
        func_800F5EA0();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    return;
}
