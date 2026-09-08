#include "common.h"
void func_8013C2FC(void)
{
    /* ability menu: 0x60 window, 0x1A83 text, 801210AC/8011FBA4/
       8013C44C/8011F684/80126418/8011F884/8013BFFC rows; loop
       L13C304 on 4120(2). */
L13c304:
    for (;;) {
        func_801210AC();
        func_800F7500();
        func_8011FBA4();
        func_8013C44C();
        func_8011F684();
        func_80126418();
        func_8011F884();
        func_800F6630(1);
        func_800F4248(3);
        if (func_800F4120(2) != 0)
            goto L13C38C;
        func_800F6630(0x60);
        func_800F824C();
    L13C38C:
        func_800F6630(1);
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            goto L13C3DC;
        func_800F6630(0x60);
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            goto L13C43C;
        func_800F654C(0xFF);
        func_800F824C(0x60);
    L13C3DC:
        func_800F6630();
        func_800F4248(0x80);
        if (func_800F4120(2) == 0)
            goto L13C43C;
        func_800F6630(1);
        func_800F4248(4);
        if (func_800F4120(2) != 0)
            continue;
        func_800F8FB8(0x60);
        func_8013C44C();
        func_800F6240(0x1A83);
        func_8013BFFC();
    L13C43C:
        return;
    }
}
